int __fastcall sub_80429EC(unsigned __int8 a1, int a2, int a3)
{
  unsigned int *v3; // r5@1
  int v4; // r2@1
  unsigned __int16 v5; // r4@1
  int v6; // r4@1
  int v7; // r0@1
  int v9; // [sp+0h] [bp-24h]@1
  char v10; // [sp+Ch] [bp-18h]@1
  signed __int16 v11; // [sp+Eh] [bp-16h]@1
  __int16 v12; // [sp+10h] [bp-14h]@1
  char v13; // [sp+12h] [bp-12h]@1
  int v14; // [sp+20h] [bp-4h]@1

  v3 = &dword_3004360[25 * a1];
  sub_80428A4((int)v3, (int)&unk_30045C0, a3);
  v10 = 0;
  SetMonData((int)v3, 45, (int)&v10);
  v5 = GetMonData((int)v3, 11, v4);
  GetSpeciesName(&v9, v5);
  SetMonData((int)v3, 2, (int)&v9);
  v6 = (unsigned __int16)SpeciesToNationalPokedexNum(v5);
  sub_8090D90(v6, 2);
  sub_8090D90(v6, 3);
  pokemon_get_nick((int)v3, (int)&gStringVar1);
  v11 = 4;
  SetMonData((int)v3, 38, (int)&v11);
  v12 = 0;
  v7 = SetMonData((int)v3, 36, (int)&v12);
  v13 = sav1_map_get_name(v7);
  SetMonData((int)v3, 35, (int)&v13);
  sub_8040B1C();
  CalculateMonStats((int)v3);
  return v14;
}
