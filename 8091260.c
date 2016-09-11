unsigned int __fastcall sub_8091260(unsigned __int16 a1, char a2, unsigned __int8 a3, char a4)
{
  unsigned __int16 v4; // r5@1
  char v5; // r8@1
  unsigned __int8 v6; // r7@1
  char v7; // r4@1
  _BYTE *v8; // r6@1
  int v9; // r0@1
  unsigned int v10; // r4@2
  int v11; // r2@3
  int v13; // [sp+0h] [bp-40h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = StringCopy(&v13, &gUnknown_083B5558);
  BYTE2(v13) = v7;
  v9 = NationalPokedexNumToSpecies(v4);
  if ( v9 )
  {
    v10 = 0;
    if ( (unsigned __int8)gSpeciesNames[11 * v9] != 255 )
    {
      v11 = 11 * v9;
      do
      {
        v8[v10] = *(&gSpeciesNames[v10] + v11);
        v10 = (v10 + 1) & 0xFF;
      }
      while ( (unsigned __int8)*(&gSpeciesNames[v10] + v11) != 255 && v10 <= 9 );
    }
  }
  else
  {
    v10 = 0;
    do
    {
      v8[v10] = -82;
      v10 = (v10 + 1) & 0xFF;
    }
    while ( v10 <= 9 );
  }
  v8[v10] = -1;
  MenuPrint((int)&v13, v5, v6);
  return v10;
}
