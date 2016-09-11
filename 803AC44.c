int __fastcall CreateMaleMon(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r8@1
  int v4; // r6@1
  unsigned __int8 v5; // r7@1
  int v6; // r0@2
  int v7; // r0@2
  int v8; // r0@2
  int v9; // r4@2
  int v11; // [sp+24h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  do
  {
    v6 = Random(a1);
    v7 = Random(v6) << 16;
    v8 = Random(v7);
    v9 = (unsigned __int16)v8 | (Random(v8) << 16);
    a1 = GetGenderFromSpeciesAndPersonality(v4, v9) << 24;
  }
  while ( a1 );
  CreateMon(v3, v4, v5, 0x20u);
  return v11;
}
