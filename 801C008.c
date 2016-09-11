int __fastcall mcmd_jump_if_move_not_executed(unsigned __int8 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+10h] [bp-4h]@0

  v2 = a2;
  v3 = v2024C10;
  v4 = v2024C10 + a1;
  if ( v2024C68 & 0x29 )
  {
    *(_WORD *)(2 * v2024C08 + 0x2024C3C) = 0;
    *(_WORD *)(2 * v2024C08 + 0x2024C44) = 0;
    v4 = *(_BYTE *)(v3 + 1) | (*(_BYTE *)(v3 + 2) << 8) | (*(_BYTE *)(v3 + 3) << 16) | (*(_BYTE *)(v3 + 4) << 24);
_0801C082:
    v2024C10 = v4;
    return v6;
  }
  b_feature_update_destiny_bond();
  if ( !(sub_8018324(3u, v2024C08, 0, 0, v2) << 24) )
    goto _0801C082;
  return v6;
}
