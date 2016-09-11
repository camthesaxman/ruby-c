int __fastcall CreateMonWithGenderNatureLetter(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int v7; // r7@1
  unsigned __int8 v8; // r10@1
  unsigned int v9; // r0@1
  int v10; // r0@2
  int v11; // r4@2
  int v12; // r0@6
  int v13; // r4@6
  int v15; // [sp+10h] [bp-28h]@1
  unsigned __int8 v16; // [sp+14h] [bp-24h]@1
  int v17; // [sp+34h] [bp-4h]@0

  v15 = a1;
  v7 = a2;
  v16 = a3;
  v8 = a4;
  v9 = (unsigned int)((a7 << 24) - 0x1000000) >> 24;
  if ( v9 > 0x1B )
  {
    do
    {
      do
      {
        v12 = Random(v9);
        v13 = (unsigned __int16)v12 | (Random(v12) << 16);
        v9 = (unsigned __int8)GetNatureFromPersonality(v13);
      }
      while ( a6 != v9 );
      v9 = (unsigned __int8)GetGenderFromSpeciesAndPersonality(v7, v13);
    }
    while ( a5 != v9 );
  }
  else
  {
    while ( 1 )
    {
      do
      {
        v10 = Random(v9);
        v11 = (unsigned __int16)v10 | (Random(v10) << 16);
        v9 = (unsigned __int8)GetNatureFromPersonality(v11);
      }
      while ( a6 != v9 );
      v9 = (unsigned __int8)GetGenderFromSpeciesAndPersonality(v7, v11);
      if ( a5 == v9 )
      {
        v9 = (unsigned __int8)a7 - 1;
        if ( ((((v11 & 0x3000000u) >> 18) | ((v11 & 0x30000u) >> 12) | ((v11 & 0x300u) >> 6) | v11 & 3) % 0x1C & 0xFFFF) == v9 )
          break;
      }
    }
  }
  CreateMon(v15, v7, v16, v8);
  return v17;
}
