int __fastcall sub_80D4F18(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_807867C(a1, word_3004B00[0]);
  *(_WORD *)(v1 + 34) += word_3004B02;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 48) = word_3004B04;
  *(_WORD *)(v1 + 50) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078394;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
