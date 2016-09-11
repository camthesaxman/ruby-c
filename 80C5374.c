signed int __fastcall sub_80C5374(unsigned __int16 a1, unsigned __int8 a2, int a3)
{
  unsigned __int16 v3; // r5@1
  int v4; // r4@1
  char v5; // r8@1
  signed int v6; // r4@1
  unsigned __int16 v7; // r0@1
  int v8; // r5@1
  char v10; // [sp+10h] [bp-7Ch]@1
  char v11; // [sp+11h] [bp-7Bh]@1
  char v12; // [sp+14h] [bp-78h]@1

  v3 = a1;
  v4 = a3 << 16;
  v5 = a3;
  CreateMon((int)&v12, a1, a2, 0x20u);
  v10 = v5;
  v11 = BYTE3(v4);
  SetMonData((int)&v12, 12, (int)&v10);
  v6 = (unsigned __int8)pokemon_catch((int)&v12);
  v7 = SpeciesToNationalPokedexNum(v3);
  v8 = v7;
  if ( v6 <= 1 && v6 >= 0 )
  {
    sub_8090D90(v7, 2u);
    sub_8090D90(v8, 3u);
  }
  return v6;
}
