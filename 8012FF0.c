signed int __fastcall b_first_side(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r9@1
  int v4; // r10@1
  int v5; // r3@3
  signed int v6; // r3@7
  int v7; // r2@9
  signed int v8; // r7@13
  int v9; // r1@16
  unsigned int v10; // r8@16
  int v11; // r6@17
  int v12; // r5@17
  int v13; // r1@30
  unsigned int v14; // r7@30
  int v15; // r6@31
  int v16; // r5@31
  signed int v17; // r3@45
  signed int v18; // r2@53
  char *v19; // r0@56
  int v20; // r1@56
  int v21; // r0@58
  int v24; // [sp+4h] [bp-28h]@1
  signed int v25; // [sp+8h] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  v24 = a3;
  v25 = 0;
  if ( sub_8018324(19, 0, 13, 0) << 24 || sub_8018324(19, 0, 77, 0) << 24 )
  {
    v6 = 1;
  }
  else
  {
    v5 = *(_BYTE *)(88 * v3 + 0x2024AA0);
    if ( v5 == 33 && v2024DB8 & 7 || v5 == 34 && v2024DB8 & 0x60 )
      v6 = 2;
    else
      v6 = 1;
    v7 = *(_BYTE *)(88 * v4 + 0x2024AA0);
    if ( v7 == 33 && v2024DB8 & 7 || v7 == 34 && v2024DB8 & 0x60 )
    {
      v8 = 2;
      goto _080130BC;
    }
  }
  v8 = 1;
_080130BC:
  v9 = 2 * *(_BYTE *)(88 * v3 + 0x2024A9B);
  v10 = gStatStageRatios[v9] * v6 * *(_WORD *)(88 * v3 + 0x2024A86) / gStatStageRatios[v9 + 1];
  if ( *(_WORD *)(88 * v3 + 0x2024AAE) == 175 )
  {
    v11 = *(_BYTE *)(28 * v3 + 0x2024DF7);
    v12 = *(_BYTE *)(28 * v3 + 0x2024E0A);
  }
  else
  {
    v11 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * v3 + 0x2024AAE));
    v12 = itemid_get_quality(*(_WORD *)(88 * v3 + 0x2024AAE)) & 0xFF;
  }
  if ( !(v20239F8 & 2) && FlagGet(2057) << 24 && !(battle_side_get_owner(v3) << 24) )
    v10 = 110 * v10 / 0x64;
  if ( v11 == 24 )
    v10 >>= 1;
  if ( *(_DWORD *)(88 * v3 + 0x2024ACC) & 0x40 )
    v10 >>= 2;
  if ( v11 == 26 && v2024D1C < 0xFFFF * v12 / 100 )
    v10 = -1;
  v13 = 2 * *(_BYTE *)(88 * v4 + 0x2024A9B);
  v14 = gStatStageRatios[v13] * *(_WORD *)(88 * v4 + 0x2024A86) * v8 / gStatStageRatios[v13 + 1];
  if ( *(_WORD *)(88 * v4 + 0x2024AAE) == 175 )
  {
    v15 = *(_BYTE *)(28 * v4 + 0x2024DF7);
    v16 = *(_BYTE *)(28 * v4 + 0x2024E0A);
  }
  else
  {
    v15 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * v4 + 0x2024AAE));
    v16 = itemid_get_quality(*(_WORD *)(88 * v4 + 0x2024AAE)) & 0xFF;
  }
  if ( !(v20239F8 & 2) && FlagGet(2057) << 24 && !(battle_side_get_owner(v4) << 24) )
    v14 = 110 * v14 / 0x64;
  if ( v15 == 24 )
    v14 >>= 1;
  if ( *(_DWORD *)(88 * v4 + 0x2024ACC) & 0x40 )
    v14 >>= 2;
  if ( v15 == 26 && v2024D1C < 0xFFFF * v16 / 100 )
    v14 = -1;
  if ( v24 )
  {
    v17 = 0;
_08013334:
    v18 = 0;
    goto _08013336;
  }
  if ( *(_BYTE *)(v3 + 33704984) )
  {
    v17 = 0;
  }
  else if ( *(_BYTE *)(16 * v3 + 0x2024D28) & 4 )
  {
    v17 = 165;
  }
  else
  {
    v17 = *(_WORD *)(2 * *(_BYTE *)(v3 + 33644684) + 88 * v3 + 0x2024A8C);
  }
  if ( *(_BYTE *)(v4 + 33704984) )
    goto _08013334;
  if ( *(_BYTE *)(16 * v4 + 0x2024D28) & 4 )
    v18 = 165;
  else
    v18 = *(_WORD *)(2 * *(_BYTE *)(v4 + 33644684) + 88 * v4 + 0x2024A8C);
_08013336:
  v19 = (char *)&gBattleMoves + 12 * v17;
  v20 = v19[7];
  if ( v19[7] || *((_BYTE *)&gBattleMoves + 12 * v18 + 7) )
  {
    v21 = *((_BYTE *)&gBattleMoves + 12 * v18 + 7);
    if ( v20 == v21 )
    {
      if ( v10 == v14 && Random(v21) & 1 )
        return 2;
      if ( v10 < v14 )
        v25 = 1;
    }
    else if ( v20 < v21 )
    {
      v25 = 1;
    }
  }
  else if ( v10 == v14 && Random(*((_BYTE *)&gBattleMoves + 12 * v18 + 7)) & 1 )
  {
    v25 = 2;
  }
  else if ( v10 < v14 )
  {
    return 1;
  }
  return v25;
}
