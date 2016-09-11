int __fastcall sub_80DD490(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  StartSpriteAnim(a1, word_3004B08);
  sub_80787B0(v1, 0);
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_WORD *)(v1 + 50) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = word_3004B04 + *(_WORD *)(v1 + 34);
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
