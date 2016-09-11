signed int __fastcall sub_80A99A8(_BYTE *a1, unsigned __int16 a2, int a3)
{
  _BYTE *v3; // r6@1
  int v4; // r5@1
  _BYTE *v5; // r3@1
  _BYTE *v6; // r2@1
  int v7; // r1@2

  v3 = a1;
  v4 = a3 + 1;
  v5 = *(_BYTE **)&gItems[22 * (unsigned __int16)itemid_sanitize(a2) + 10];
  v6 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( ((v7 + 2) & 0xFFu) <= 1 )
        break;
      *v6 = v7;
      ++v5;
      ++v6;
    }
    if ( !--v4 )
    {
      *v6 = -1;
      return 1;
    }
    if ( (unsigned __int8)v7 == 255 )
      break;
    v6 = v3;
    ++v5;
  }
  return 0;
}
