signed int __fastcall sub_808E8C8(unsigned __int16 a1, int a2, __int16 a3)
{
  unsigned __int16 v3; // r8@1
  unsigned int v4; // r6@1
  signed int v5; // r1@1
  unsigned __int8 v6; // r0@3
  int v7; // r5@3
  char *v8; // r4@3

  v3 = a1;
  v4 = 0;
  v5 = a2 << 16;
  do
  {
    if ( *(_WORD *)(v202FFB4 + 1566 + 2 * v4) == 0xFFFF )
    {
      v6 = sub_80918EC(a1, v5 >> 16, a3, v4);
      v7 = v6;
      v8 = &gSprites[68 * v6];
      v8[1] = v8[1] & 0xFC | 1;
      v8[5] |= 0xCu;
      *((_WORD *)v8 + 23) = 0;
      *((_WORD *)v8 + 24) = v4;
      *((_WORD *)v8 + 25) = NationalPokedexNumToSpecies(v3);
      *(_WORD *)(v202FFB4 + 1566 + 2 * v4) = v7;
      return v7;
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 3 );
  return 0xFFFF;
}
