signed int __fastcall sub_80BD494(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r7@1
  unsigned int v6; // r5@1
  int v7; // r4@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  while ( 1 )
  {
    v7 = 160 * v6 + v4;
    if ( *(_BYTE *)v7 )
    {
      if ( (unsigned __int8)sub_80BD0EC(v3, 160 * v6 + v4) == 1 )
        break;
    }
    v6 = (v6 + 1) & 0xFF;
    if ( v6 > 0x13 )
      return 0;
  }
  if ( v5 )
  {
    if ( *(_WORD *)(v3 + 14) <= (unsigned int)*(_WORD *)(v7 + 14) )
    {
      *(_BYTE *)(v7 + 1) = *(_BYTE *)(v7 + 1) & 0xF0 | *(_BYTE *)(v3 + 1) & 0xF;
      sub_80BB4AC(v3);
      return 1;
    }
    sub_80BB4AC(160 * v6 + v4);
  }
  else
  {
    sub_80BB4AC(160 * v6 + v4);
  }
  return 0;
}
