int __fastcall sub_813051C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = word_3004B00[0];
  *(_WORD *)(a1 + 34) = word_3004B02;
  *(_WORD *)(a1 + 50) = word_3004B04;
  *(_WORD *)(a1 + 54) = word_3004B06;
  *(_WORD *)(a1 + 46) = word_3004B08;
  oamt_set_x3A_32(a1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078CC0;
  return v3;
}
