int __fastcall sub_80CC8C8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  *(_WORD *)(a1 + 46) = word_3004B04;
  *(_WORD *)(a1 + 48) = word_3004B06;
  *(_WORD *)(a1 + 52) = word_3004B08;
  *(_WORD *)(a1 + 56) = word_3004B0A;
  StartSpriteAffineAnim(a1, word_3004B0C);
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_8078504;
  return v3;
}
