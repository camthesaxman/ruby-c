int __fastcall sub_803BA2C(int a1, int a2, int a3, char a4, __int16 a5, char a6, unsigned __int8 a7, unsigned __int8 a8)
{
  int v8; // r7@1
  int v9; // r5@1
  unsigned int v10; // r9@5
  int v11; // r6@7
  unsigned int v12; // r8@7
  int v13; // r10@8
  int v14; // r0@8
  int v15; // r1@13
  int v16; // r2@40
  char *v17; // r3@40
  int v18; // r4@76
  signed int v19; // r0@116
  _BYTE *v20; // r2@117
  int v21; // r5@118
  signed int v22; // r5@121
  _BYTE *v23; // r2@123
  int v24; // r0@123
  int v25; // r3@124
  signed int v26; // r0@146
  _BYTE *v27; // r2@147
  int v28; // r5@148
  signed int v29; // r5@151
  signed int v30; // r0@152
  _BYTE *v31; // r2@153
  int v32; // r3@154
  int v34; // [sp+4h] [bp-48h]@1
  int v35; // [sp+8h] [bp-44h]@1
  char v36; // [sp+Ch] [bp-40h]@1
  unsigned int v37; // [sp+14h] [bp-38h]@7
  int v38; // [sp+18h] [bp-34h]@7
  int v39; // [sp+1Ch] [bp-30h]@11
  int v40; // [sp+20h] [bp-2Ch]@10
  _BYTE *v41; // [sp+24h] [bp-28h]@13
  _BYTE *v42; // [sp+28h] [bp-24h]@40

  v8 = a1;
  v34 = a2;
  v35 = a3;
  v36 = a4;
  v9 = 0;
  if ( a5 )
    v2024E80 = a5;
  else
    v2024E80 = gBattleMoves[12 * a3 + 1];
  if ( a6 )
    v10 = a6 & 0x3F;
  else
    v10 = gBattleMoves[12 * a3 + 2];
  v11 = *(_WORD *)(a1 + 2);
  v37 = *(_WORD *)(a2 + 4);
  v12 = *(_WORD *)(a1 + 8);
  v38 = *(_WORD *)(a2 + 10);
  if ( *(_WORD *)(a1 + 46) == 175 )
  {
    v13 = *(_BYTE *)(28 * a7 + 0x2024DF7);
    v14 = *(_BYTE *)(28 * a7 + 0x2024E0A);
  }
  else
  {
    v13 = (unsigned __int8)itemid_get_x12(*(_WORD *)(a1 + 46));
    v14 = (unsigned __int8)itemid_get_quality(*(_WORD *)(v8 + 46));
  }
  v40 = v14;
  if ( *(_WORD *)(v34 + 46) == 175 )
  {
    v39 = *(_BYTE *)(28 * a8 + 0x2024DF7);
  }
  else
  {
    v39 = (unsigned __int8)itemid_get_x12(*(_WORD *)(v34 + 46));
    itemid_get_quality(*(_WORD *)(v34 + 46));
  }
  v15 = *(_BYTE *)(v8 + 32);
  v41 = (_BYTE *)(v8 + 32);
  if ( v15 == 37 || v15 == 74 )
    v11 = 2 * v11 & 0xFFFF;
  if ( !(v20239F8 & 0x902) )
  {
    if ( v20239F8 & 8 && v202FF5E != 1024 && FlagGet(2055) << 24 && !(battle_side_get_owner(a7) << 24) )
      v11 = 110 * v11 / 100 & 0xFFFF;
    if ( !(v20239F8 & 0x902) )
    {
      if ( v20239F8 & 8 && v202FF5E != 1024 && FlagGet(2059) << 24 && !(battle_side_get_owner(a8) << 24) )
        v37 = (signed int)(110 * v37) / 100 & 0xFFFF;
      if ( !(v20239F8 & 0x902) )
      {
        if ( v20239F8 & 8 && v202FF5E != 1024 && FlagGet(2061) << 24 && !(battle_side_get_owner(a7) << 24) )
          v12 = (signed int)(110 * v12) / 100 & 0xFFFF;
        if ( !(v20239F8 & 0x902)
          && v20239F8 & 8
          && v202FF5E != 1024
          && FlagGet(2061) << 24
          && !(battle_side_get_owner(a8) << 24) )
        {
          v38 = 110 * v38 / 100 & 0xFFFF;
        }
      }
    }
  }
  v16 = 0;
  v42 = (_BYTE *)(v34 + 32);
  v17 = &gHoldEffectToType;
  while ( v13 != (unsigned __int8)*v17 || v10 != (unsigned __int8)byte_8208264[2 * v16] )
  {
    v17 += 2;
    if ( (unsigned int)++v16 > 0x10 )
      goto _0803BCDC;
  }
  if ( v10 > 8 )
    v12 = (signed int)(v12 * (v40 + 100)) / 100 & 0xFFFF;
  else
    v11 = (v40 + 100) * v11 / 100 & 0xFFFF;
_0803BCDC:
  if ( v13 == 29 )
    v11 = 150 * v11 / 100 & 0xFFFF;
  if ( v13 == 34 && !(v20239F8 & 0x100) && ((*(_WORD *)v8 - 407) & 0xFFFFu) <= 1 )
    v12 = (signed int)(150 * v12) / 100 & 0xFFFF;
  if ( v39 == 34 && !(v20239F8 & 0x100) && ((*(_WORD *)v34 - 407) & 0xFFFFu) <= 1 )
    v38 = 150 * v38 / 100 & 0xFFFF;
  if ( v13 == 35 && *(_WORD *)v8 == 373 )
    v12 = 2 * v12 & 0xFFFF;
  if ( v39 == 36 && *(_WORD *)v34 == 373 )
    v38 = 2 * v38 & 0xFFFF;
  if ( v13 == 45 && *(_WORD *)v8 == 25 )
    v12 = 2 * v12 & 0xFFFF;
  if ( v39 == 64 && *(_WORD *)v34 == 132 )
    v37 = 2 * v37 & 0xFFFF;
  if ( v13 == 65 && ((*(_WORD *)v8 - 104) & 0xFFFFu) <= 1 )
    v11 = 2 * v11 & 0xFFFF;
  if ( *v42 == 47 && (v10 == 10 || v10 == 15) )
    v12 >>= 1;
  v18 = *v41;
  if ( v18 == 55 )
    v11 = 150 * v11 / 100 & 0xFFFF;
  if ( v18 == 57 && sub_8018324(0xEu, 0, 0x3Au, 0, 0) << 24 )
    v12 = (signed int)(150 * v12) / 100 & 0xFFFF;
  if ( *v41 == 58 && sub_8018324(0xEu, 0, 0x39u, 0, 0) << 24 )
    v12 = (signed int)(150 * v12) / 100 & 0xFFFF;
  if ( *v41 == 62 && *(_DWORD *)(v8 + 76) )
    v11 = 150 * v11 / 100 & 0xFFFF;
  if ( *v42 == 63 && *(_DWORD *)(v34 + 76) )
    v37 = (signed int)(150 * v37) / 100 & 0xFFFF;
  if ( v10 == 13 && sub_8018324(0xEu, 0, 0, 0xFDu, 0) << 24 )
    v2024E80 >>= 1;
  if ( v10 == 10 && sub_8018324(0xEu, 0, 0, 0xFEu, 0) << 24 )
    v2024E80 >>= 1;
  if ( v10 == 12 && *v41 == 65 && *(_WORD *)(v8 + 40) <= *(_WORD *)(v8 + 44) / 3u )
    v2024E80 = 150 * v2024E80 / 100;
  if ( v10 == 10 && *v41 == 66 && *(_WORD *)(v8 + 40) <= *(_WORD *)(v8 + 44) / 3u )
    v2024E80 = 150 * v2024E80 / 100;
  if ( v10 == 11 && *v41 == 67 && *(_WORD *)(v8 + 40) <= *(_WORD *)(v8 + 44) / 3u )
    v2024E80 = 150 * v2024E80 / 100;
  if ( v10 == 6 && *v41 == 68 && *(_WORD *)(v8 + 40) <= *(_WORD *)(v8 + 44) / 3u )
    v2024E80 = 150 * v2024E80 / 100;
  if ( gBattleMoves[12 * v2024BE6] == 7 )
    v37 >>= 1;
  if ( v10 <= 8 )
  {
    if ( v2024C0D == 2 )
    {
      v19 = *(_BYTE *)(v8 + 25);
      if ( v19 <= 6 )
      {
        v21 = v11;
        goto _0803C01E;
      }
      v20 = gStatStageRatios;
    }
    else
    {
      v20 = gStatStageRatios;
      v19 = *(_BYTE *)(v8 + 25);
    }
    v21 = v11 * v20[2 * v19] / v20[2 * v19 + 1];
_0803C01E:
    v22 = v21 * v2024E80 * (2 * *(_BYTE *)(v8 + 42) / 5 + 2);
    if ( v2024C0D == 2 )
    {
      if ( (signed int)*(_BYTE *)(v34 + 26) > 5 )
      {
        v25 = v37;
        goto _0803C07E;
      }
      v23 = gStatStageRatios;
      v24 = *(_BYTE *)(v34 + 26);
    }
    else
    {
      v23 = gStatStageRatios;
      v24 = *(_BYTE *)(v34 + 26);
    }
    v25 = (signed int)(v37 * v23[2 * v24]) / v23[2 * v24 + 1];
_0803C07E:
    v9 = v22 / v25 / 50;
    if ( *(_DWORD *)(v8 + 76) & 0x10 && *v41 != 62 )
      v9 /= 2;
    if ( v36 & 1 && v2024C0D == 1 )
    {
      if ( v20239F8 & 1 && (unsigned __int8)sub_803C348(2) == 2 )
        v9 = 2 * (v9 / 3);
      else
        v9 /= 2;
    }
    if ( v20239F8 & 1 && gBattleMoves[12 * v35 + 6] == 8 && (unsigned __int8)sub_803C348(2) == 2 )
      v9 /= 2;
    if ( !v9 )
      v9 = 1;
  }
  if ( v10 == 9 )
    v9 = 0;
  if ( v10 > 9 )
  {
    if ( v2024C0D == 2 )
    {
      v26 = *(_BYTE *)(v8 + 28);
      if ( v26 <= 6 )
      {
        v28 = v12;
        goto _0803C17A;
      }
      v27 = gStatStageRatios;
    }
    else
    {
      v27 = gStatStageRatios;
      v26 = *(_BYTE *)(v8 + 28);
    }
    v28 = (signed int)(v12 * v27[2 * v26]) / v27[2 * v26 + 1];
_0803C17A:
    v29 = v28 * v2024E80 * (2 * *(_BYTE *)(v8 + 42) / 5 + 2);
    if ( v2024C0D == 2 )
    {
      v30 = *(_BYTE *)(v34 + 29);
      if ( v30 > 5 )
      {
        v32 = v38;
        goto _0803C1D6;
      }
      v31 = gStatStageRatios;
    }
    else
    {
      v31 = gStatStageRatios;
      v30 = *(_BYTE *)(v34 + 29);
    }
    v32 = v38 * v31[2 * v30] / v31[2 * v30 + 1];
_0803C1D6:
    v9 = v29 / v32 / 50;
    if ( v36 & 2 && v2024C0D == 1 )
    {
      if ( v20239F8 & 1 && (unsigned __int8)sub_803C348(2) == 2 )
        v9 = 2 * (v9 / 3);
      else
        v9 /= 2;
    }
    if ( v20239F8 & 1 && gBattleMoves[12 * v35 + 6] == 8 && (unsigned __int8)sub_803C348(2) == 2 )
      v9 /= 2;
    if ( !(unsigned __int8)sub_8018324(0xEu, 0, 0xDu, 0, 0) && !(sub_8018324(0xEu, 0, 0x4Du, 0, 0) << 24) )
    {
      if ( v2024DB8 & 1 )
      {
        if ( v10 == 10 )
        {
          v9 /= 2;
        }
        else if ( v10 == 11 )
        {
          v9 = 15 * v9 / 10;
        }
      }
      if ( v2024DB8 & 0x9F && v2024BE6 == 76 )
        v9 /= 2;
      if ( v2024DB8 & 0x60 )
      {
        if ( v10 == 10 )
        {
          v9 = 15 * v9 / 10;
        }
        else if ( v10 == 11 )
        {
          v9 /= 2;
        }
      }
    }
    if ( *(_DWORD *)(4 * a7 + 0x2017100) & 1 && v10 == 10 )
      v9 = 15 * v9 / 10;
  }
  return v9 + 2;
}
