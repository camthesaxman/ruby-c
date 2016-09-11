int __fastcall draw_status_ailment_maybe(unsigned __int8 a1)
{
  int v1; // r9@1
  char *v2; // r1@1
  int v3; // r7@1
  int v4; // r10@1
  int v5; // r2@1
  int v6; // r0@2
  char v7; // r4@2
  signed int v8; // r8@2
  unsigned __int8 v9; // r0@6
  char *v10; // r6@6
  signed int v11; // r0@6
  unsigned __int8 v12; // r0@8
  unsigned __int8 v13; // r0@10
  unsigned __int8 v14; // r0@12
  unsigned __int8 v15; // r0@14
  char *v16; // r6@15
  signed int v17; // r4@15
  signed int v18; // r8@15
  int v19; // r7@15
  char *v20; // r0@18
  char *v21; // r5@20
  unsigned int v22; // r4@20
  int v23; // r0@20
  char *v24; // r0@23
  char *v25; // r4@23
  char *v26; // r0@23
  int v28; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * a1];
  v3 = *((_WORD *)v2 + 29) & 0xFF;
  v4 = *((_WORD *)v2 + 28) & 0xFF;
  if ( battle_side_get_owner(v3) << 24 )
  {
    v7 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), 55, v5);
    v8 = 17;
  }
  else
  {
    v6 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v3 + 0x2024A6A)], 55, v5);
    v7 = v6;
    v8 = 18;
    if ( !(battle_type_is_double(v6) << 24) )
      v8 = 26;
  }
  if ( v7 & 7 )
  {
    v9 = sub_80457E8(27, v3);
    v10 = sub_8043CDC(v9);
    v11 = 2;
    goto _080456FC;
  }
  if ( v7 & 0x88 )
  {
    v12 = sub_80457E8(21, v3);
    v10 = sub_8043CDC(v12);
    v11 = 0;
    goto _080456FC;
  }
  if ( v7 & 0x10 )
  {
    v13 = sub_80457E8(33, v3);
    v10 = sub_8043CDC(v13);
    v11 = 4;
    goto _080456FC;
  }
  if ( v7 & 0x20 )
  {
    v14 = sub_80457E8(30, v3);
    v10 = sub_8043CDC(v14);
    v11 = 3;
    goto _080456FC;
  }
  if ( v7 & 0x40 )
  {
    v15 = sub_80457E8(24, v3);
    v10 = sub_8043CDC(v15);
    v11 = 1;
_080456FC:
    v21 = &gSprites[68 * v1];
    v22 = 16 * ((unsigned int)(unsigned __int8)v21[5] >> 4) + 12 + v3;
    FillPalette(gBattleInterfaceStatusIcons_DynPal[v11], v22 + 256, 2);
    CpuSet(2 * v22 + 33746120, 2 * v22 + 83886592, 1);
    v23 = CpuSet(v10, 32 * ((*((_WORD *)v21 + 2) & 0x3FF) + v8) + 100728832, 67108888);
    if ( ((unsigned __int8)battle_type_is_double(v23) == 1 || (unsigned __int8)battle_side_get_owner(v3) == 1)
      && !(*(_BYTE *)(4 * v3 + 0x2017800) & 0x10) )
    {
      v24 = sub_8043CDC(0);
      v25 = &gSprites[68 * v4];
      CpuSet(v24, (32 * *((_WORD *)v25 + 2) & 0x7FFF) + 100728832, 67108872);
      v26 = sub_8043CDC(65);
      CpuSet(v26, (32 * *((_WORD *)v25 + 2) & 0x7FFF) + 100728864, 67108872);
    }
    sub_8045458(v1, 0);
    return v28;
  }
  v16 = sub_8043CDC(39);
  v17 = 0;
  v18 = v8 << 16;
  v19 = 4 * v3;
  do
    CpuSet(v16, 32 * ((*(_WORD *)&gSprites[68 * v1 + 4] & 0x3FF) + (v18 >> 16) + v17++) + 100728832, 67108872);
  while ( v17 <= 2 );
  if ( !(*(_BYTE *)(v19 + 33650688) & 0x10) )
  {
    v20 = sub_8043CDC(1);
    CpuSet(v20, (32 * *(_WORD *)&gSprites[68 * v4 + 4] & 0x7FFF) + 100728832, 67108880);
  }
  sub_8045458(v1, 1u);
  return v28;
}
