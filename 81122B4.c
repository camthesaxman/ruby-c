int __fastcall sub_81122B4(unsigned __int16 a1, int a2)
{
  int v2; // r10@1
  int v3; // r7@1
  int v4; // r9@1
  int v5; // r4@1
  unsigned int *v6; // r5@3
  int v7; // r4@3
  int v8; // r4@5
  _WORD *v9; // r4@7
  unsigned __int16 v10; // r0@7
  unsigned __int16 v11; // r0@7
  int v12; // r2@7
  int v13; // r2@7
  int v14; // r2@8
  int v16; // [sp+0h] [bp-24h]@1
  int v17; // [sp+20h] [bp-4h]@11

  v2 = a2;
  v3 = a1;
  v16 = 0;
  v4 = 4 * a1;
  v5 = 20 * a1;
  if ( gEvolutionTable[v5] == 13 && (unsigned __int8)byte_3004350 <= 5u )
  {
    v6 = &dword_3004360[25 * (unsigned __int8)byte_3004350];
    CopyMon((int)v6, a2, 100);
    SetMonData((int)v6, 11, (int)&gEvolutionTable[v5 + 6]);
    SetMonData((int)v6, 2, (int)&gSpeciesNames[11 * gEvolutionTable[v5 + 6]]);
    SetMonData((int)v6, 12, (int)&v16);
    SetMonData((int)v6, 8, (int)&v16);
    SetMonData((int)v6, 10, (int)&v16);
    v7 = 50;
    do
      SetMonData((int)v6, v7++, (int)&v16);
    while ( v7 <= 54 );
    v8 = 67;
    do
      SetMonData((int)v6, v8++, (int)&v16);
    while ( v8 <= 79 );
    SetMonData((int)v6, 55, (int)&v16);
    v16 = 255;
    SetMonData((int)v6, 64, (int)&v16);
    CalculateMonStats((int)v6);
    calc_player_party_count();
    v9 = &gEvolutionTable[4 * (v4 + v3)];
    v10 = SpeciesToNationalPokedexNum(v9[6]);
    sub_8090D90(v10, 2u);
    v11 = SpeciesToNationalPokedexNum(v9[6]);
    sub_8090D90(v11, 3u);
    if ( GetMonData((int)v6, 11, v12) == 303 && GetMonData((int)v6, 3, v13) == 1 && GetMonData(v2, 11, v14) == 302 )
      SetMonData((int)v6, 2, (int)&gUnknown_083F868C);
  }
  return v17;
}
