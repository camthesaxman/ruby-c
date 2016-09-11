int __fastcall sub_8031FC4(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r8@1
  int v4; // r10@6
  int v5; // r7@6
  int v6; // r9@6
  int v7; // r6@6
  void **v8; // r0@6
  _BYTE *v9; // r2@6
  int v10; // r1@6
  int v11; // r2@6
  int v12; // r0@8
  char *v13; // r1@8
  _BYTE *v14; // r2@11
  int v15; // ST00_4@11
  int v16; // r4@11
  int v17; // ST00_4@13
  int v18; // ST08_4@13
  int v19; // r2@14
  _BYTE *v20; // r10@14
  int v21; // r0@14
  unsigned int v22; // r5@14
  int v23; // r0@16
  int v25; // [sp+Ch] [bp-24h]@1
  int v26; // [sp+2Ch] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v3 = (unsigned __int8)a1;
  v25 = a2;
  if ( a3 << 24 )
  {
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(a1 + 33704928)], v2017840);
    LoadPalette(32 * v2017840 + 33645568, (unsigned int)((v3 << 20) + 0x1000000) >> 16, 32);
    *(_BYTE *)(v3 + 33705604) = v2017840;
    if ( *(_WORD *)(4 * v3 + 0x2017802) )
    {
      BlendPalette((unsigned int)((v3 << 20) + 0x1000000) >> 16, 16, 6, 0x7FFF);
      CpuSet(
        2 * ((unsigned int)((v3 << 20) + 0x1000000) >> 16) + 33746632,
        2 * ((unsigned int)((v3 << 20) + 0x1000000) >> 16) + 33745608,
        67108872);
    }
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33704928) + 34] = (unsigned __int8)sub_8077F68(v3);
    return v26;
  }
  if ( ((int (*)(void))sub_8076BE0)() << 24 )
  {
    v4 = 0;
    v5 = v201934A;
    v6 = v2019350;
    v7 = v2019354;
    v8 = &gMonBackPicTable + 2 * v201934A;
    v9 = &gMonBackPicCoords[4 * v201934A];
    v10 = *v9;
    v11 = v9[1];
  }
  else
  {
    v4 = (unsigned __int8)battle_get_per_side_status(v3);
    if ( (unsigned __int8)battle_side_get_owner(v25) == 1 )
    {
      v12 = 100 * *(_WORD *)(2 * v25 + 0x2024A6A);
      v13 = (char *)&unk_30045C0;
    }
    else
    {
      v12 = 100 * *(_WORD *)(2 * v25 + 0x2024A6A);
      v13 = (char *)&unk_3004360;
    }
    v5 = (unsigned __int16)GetMonData(&v13[v12], 11);
    if ( battle_side_get_owner(v3) << 24 )
    {
      v6 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), 0);
      v7 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), 1);
      v17 = gUnknown_081FAF4C[v4];
      v18 = *(_DWORD *)(4 * v3 + 0x2024E70);
      sub_800D334((int)&gMonFrontPicTable[2 * v5], gMonFrontPicCoords[4 * v5], gMonFrontPicCoords[4 * v5 + 1]);
      goto _08032202;
    }
    v6 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), 0);
    v7 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), 1);
    v8 = &gMonBackPicTable + 2 * v5;
    v14 = &gMonBackPicCoords[4 * v5];
    v10 = *v14;
    v11 = v14[1];
    v15 = gUnknown_081FAF4C[v4];
    v16 = *(_DWORD *)(4 * v3 + 0x2024E70);
  }
  sub_800D334((int)v8, v10, v11);
_08032202:
  v19 = gUnknown_081FAF4C[v4];
  v20 = (_BYTE *)(v3 + 33704928);
  v21 = (32 * *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33704928) + 4] & 0x7FFF) + 100728832;
  v40000D4 = v19;
  v40000D8 = v21;
  v40000DC = -2080374272;
  v22 = (unsigned int)((v3 << 20) + 0x1000000) >> 16;
  species_and_otid_get_pal(v5, v7, v6);
  sub_800D238();
  LoadPalette(0x2000000, v22, 32);
  if ( v5 == 385 )
  {
    sub_800D238();
    LoadPalette(32 * *(_BYTE *)(v25 + 33705604) + 33645568, (unsigned int)((v3 << 20) + 0x1000000) >> 16, 32);
  }
  BlendPalette((unsigned int)((v3 << 20) + 0x1000000) >> 16, 16, 6, 0x7FFF);
  v23 = CpuSet(
          2 * ((unsigned int)((v3 << 20) + 0x1000000) >> 16) + 33746632,
          2 * ((unsigned int)((v3 << 20) + 0x1000000) >> 16) + 33745608,
          67108872);
  if ( !(sub_8076BE0(v23) << 24) )
  {
    *(_WORD *)(4 * v3 + 0x2017802) = v5;
    *(_BYTE *)(v3 + 33705604) = *(_BYTE *)(v25 + 33705604);
  }
  *(_WORD *)&gSprites[68 * *v20 + 34] = (unsigned __int8)sub_8077F68(v3);
  StartSpriteAnim((int)&gSprites[68 * *v20], *(_BYTE *)(v3 + 33705604));
  return v26;
}
