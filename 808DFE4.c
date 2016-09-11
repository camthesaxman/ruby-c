unsigned int __fastcall sub_808DFE4(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r4@1
  int v6; // r0@3
  unsigned int v7; // r4@4
  int v8; // r1@4
  int v9; // r5@4
  int v10; // r6@4
  int v12; // [sp+0h] [bp-1Ch]@2

  v3 = a2;
  v4 = a3;
  v5 = 0;
  do
  {
    *((_BYTE *)&v12 + v5) = 0;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 9 );
  *((_BYTE *)&v12 + v5) = -1;
  v6 = NationalPokedexNumToSpecies(a1);
  if ( v6 )
  {
    v7 = 0;
    v8 = 11 * v6;
    v9 = v3 - 17;
    v10 = v4 << 19;
    if ( (unsigned __int8)gSpeciesNames[11 * v6] != 255 )
    {
      do
      {
        *((_BYTE *)&v12 + v7) = *(&gSpeciesNames[v7] + v8);
        v7 = (v7 + 1) & 0xFF;
      }
      while ( (unsigned __int8)*(&gSpeciesNames[v7] + v8) != 255 && v7 <= 9 );
    }
  }
  else
  {
    v7 = 0;
    v9 = v3 - 17;
    v10 = v4 << 19;
    do
    {
      *((_BYTE *)&v12 + v7) = -82;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 <= 9 );
  }
  sub_80729D8((int)&v12, (unsigned int)((v9 << 27) - 0x4000000) >> 24, SHIWORD(v10), 0);
  return v7;
}
