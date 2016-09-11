signed int __fastcall sub_8126FF0(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, __int16 a5)
{
  int v5; // r7@1
  int v6; // r6@1
  unsigned int v7; // r5@1
  char *v8; // r2@2
  unsigned int v9; // r1@6

  v5 = a2;
  v6 = a3;
  v7 = 0;
  a4 = (signed __int16)a4;
  do
  {
    v8 = &gSprites[68 * v7];
    if ( (unsigned __int8)v8[62] << 31 )
    {
      if ( *((int (__fastcall **)(int))v8 + 7) == unc_grass_normal
        && a4 == *((_WORD *)v8 + 24)
        && a5 == *((_WORD *)v8 + 25) )
      {
        v9 = *((_WORD *)v8 + 26);
        if ( a1 == v9 >> 8 && v5 == (unsigned __int8)v9 && v6 == *((_WORD *)v8 + 27) )
          return v7;
      }
    }
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 0x3F );
  return 64;
}
