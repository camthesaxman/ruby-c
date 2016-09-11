unsigned int __fastcall sub_80911C8(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  char v3; // r6@1
  unsigned __int8 v4; // r5@1
  unsigned int v5; // r4@1
  int v6; // r0@3
  unsigned int v7; // r4@4
  int v8; // r1@4
  int v10; // [sp+0h] [bp-1Ch]@2

  v3 = a2;
  v4 = a3;
  v5 = 0;
  do
  {
    *((_BYTE *)&v10 + v5);
    *((_BYTE *)&v10 + v5) = -1;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 0xA );
  v6 = NationalPokedexNumToSpecies(a1);
  if ( v6 )
  {
    v7 = 0;
    v8 = 11 * v6;
    if ( (unsigned __int8)gSpeciesNames[11 * v6] != 255 )
    {
      do
      {
        *((_BYTE *)&v10 + v7) = *(&gSpeciesNames[v7] + v8);
        v7 = (v7 + 1) & 0xFF;
      }
      while ( (unsigned __int8)*(&gSpeciesNames[v7] + v8) != 255 && v7 <= 9 );
    }
  }
  else
  {
    v7 = 0;
    do
    {
      *((_BYTE *)&v10 + v7) = -82;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 <= 9 );
  }
  MenuPrint((int)&v10, v3, v4);
  return v7;
}
