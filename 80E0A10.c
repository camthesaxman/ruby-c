int __fastcall sub_80E0A10(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  StartSpriteAnim(a1, word_3004B04);
  *(_DWORD *)(v1 + 28) = sub_8078600;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
