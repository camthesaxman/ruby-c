int atk01_accuracycheck()
{
  int v0; // r6@1
  unsigned int v1; // r10@13
  int v2; // r5@18
  char *v3; // r7@24
  signed int v4; // r8@24
  int v5; // r4@29
  int v6; // r5@40
  int v7; // r2@40
  int v8; // r0@42
  int v9; // r0@46
  char v10; // r0@48
  int v12; // [sp+24h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 5) | (*(_BYTE *)(v2024C10 + 6) << 8);
  if ( ((v0 + 2) & 0xFFFFu) > 1 )
  {
    if ( !(*(_BYTE *)(v2024C10 + 5) | (*(_BYTE *)(v2024C10 + 6) << 8)) )
      v0 = v2024BE6;
    if ( v201601C )
      v1 = v201601C & 0x3F;
    else
      v1 = *((_BYTE *)&gBattleMoves + 12 * v0 + 2);
    if ( !(sub_801C108(v0) << 24) && !(sub_801C174(v0) << 24) )
    {
      if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x20000000 )
        v2 = *(_BYTE *)(88 * v2024C07 + 0x2024A9E);
      else
        v2 = (*(_BYTE *)(88 * v2024C07 + 0x2024A9E) + 6 - *(_BYTE *)(88 * v2024C08 + 0x2024A9F)) & 0xFF;
      if ( v2 & 0x80 )
        v2 = 0;
      if ( (char)v2 > 12 )
        v2 = 12;
      v3 = (char *)&gBattleMoves + 12 * v0;
      v4 = (unsigned __int8)v3[3];
      if ( !(unsigned __int8)sub_8018324(0x13u, 0, 0xDu, 0, 0)
        && !(sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24)
        && v2024DB8 & 0x60
        && (unsigned __int8)*v3 == 152 )
      {
        v4 = 50;
      }
      v5 = v4 * gAccuracyStageRatios[v2 << 24 >> 22] / gAccuracyStageRatios[(v2 << 24 >> 22) + 1] & 0xFFFF;
      if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 14 )
        v5 = 130
           * (v4 * gAccuracyStageRatios[v2 << 24 >> 22] / gAccuracyStageRatios[(v2 << 24 >> 22) + 1] & 0xFFFF)
           / 100 & 0xFFFF;
      if ( !(unsigned __int8)sub_8018324(0x13u, 0, 0xDu, 0, 0)
        && !(sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24)
        && *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 8
        && v2024DB8 & 0x18 )
      {
        v5 = 80 * v5 / 100 & 0xFFFF;
      }
      if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 55 && v1 <= 8 )
        v5 = 80 * v5 / 100 & 0xFFFF;
      if ( *(_WORD *)(88 * v2024C08 + 0x2024AAE) == 175 )
      {
        v6 = *(_BYTE *)(28 * v2024C08 + 0x2024DF7);
        v7 = *(_BYTE *)(28 * v2024C08 + 0x2024E0A);
      }
      else
      {
        v6 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * v2024C08 + 0x2024AAE));
        v7 = itemid_get_quality(*(_WORD *)(88 * v2024C08 + 0x2024AAE)) & 0xFF;
      }
      v8 = 33704971;
      v2024C0B = v2024C08;
      if ( v6 == 22 )
      {
        v8 = (100 - v7) * v5 / 100 << 16;
        v5 = (100 - v7) * v5 / 100 & 0xFFFF;
      }
      if ( (signed int)(((unsigned __int16)Random(v8) % 0x64u & 0xFFFF) + 1) > v5 )
      {
        v2024C68 |= 1u;
        if ( v20239F8 & 1 && ((v9 = *((_BYTE *)&gBattleMoves + 12 * v0 + 6), v9 == 8) || v9 == 32) )
          v10 = 2;
        else
          v10 = 0;
        v2024D24 = v10;
        b_wonderguard_and_levitate();
      }
      mcmd_jump_if_move_not_executed(7u, v0);
    }
  }
  else if ( *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x18
         && (*(_BYTE *)(v2024C10 + 5) | (*(_BYTE *)(v2024C10 + 6) << 8)) == 0xFFFF
         && *(_BYTE *)(28 * v2024C08 + 0x2024CBD) == v2024C07 )
  {
    v2024C10 += 7;
  }
  else if ( *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x400C0 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else if ( !(sub_801C108(0) << 24) )
  {
    v2024C10 += 7;
  }
  return v12;
}
