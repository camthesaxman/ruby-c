signed int __fastcall sub_81340A8(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r3@1
  signed int result; // r0@3
  int v4; // r4@4
  _BYTE *v5; // r0@4
  int v6; // r6@5
  _DWORD *v7; // r4@5
  _BYTE *v8; // r1@6

  v1 = a1;
  v2 = 0;
  if ( a1 && (v4 = *((_BYTE *)&gDecorations + 32 * a1 + 19), v5 = &gUnknown_08402E40[8 * v4], (unsigned int)v5[4] > 0) )
  {
    v6 = *((_BYTE *)&gDecorations + 32 * v1 + 19);
    v7 = &gUnknown_08402E40[8 * v4];
    while ( 1 )
    {
      v8 = (_BYTE *)(*v7 + v2);
      if ( *v8 == v1 )
        break;
      v2 = (v2 + 1) & 0xFF;
      if ( v2 >= v5[4] )
        goto _081340F2;
    }
    *v8 = 0;
    sub_8134104(v6);
    result = 1;
  }
  else
  {
_081340F2:
    result = 0;
  }
  return result;
}
