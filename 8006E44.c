_BYTE *__fastcall StringExpandPlaceholders(_BYTE *a1, unsigned __int8 *a2)
{
  _BYTE *v2; // r5@1
  unsigned __int8 *v3; // r6@1
  int v4; // r2@2
  int v5; // r0@4
  int v6; // r0@4
  int v7; // r5@5
  int v8; // r4@5

  v2 = a1;
  v3 = a2;
  while ( 1 )
  {
    v4 = *v3++;
    if ( (unsigned int)(v4 - 250) <= 5 )
    {
      switch ( v4 )
      {
        case 253:
          v5 = *v3++;
          v6 = GetExpandedPlaceholder(v5);
          v2 = (_BYTE *)StringExpandPlaceholders(v2, v6);
          continue;
        case 252:
          *v2 = v4;
          v7 = (int)(v2 + 1);
          v8 = (unsigned __int8)GetExtCtrlCodeLength(*v3);
          memcpy(v7, v3, v8);
          v2 = (_BYTE *)(v7 + v8);
          v3 += v8;
          continue;
        default:
          break;
        case 255:
          *v2 = -1;
          return v2;
      }
    }
    *v2++ = v4;
  }
}
