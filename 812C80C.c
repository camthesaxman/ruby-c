int __fastcall sub_812C80C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  sub_807867C(v1, word_3004B00[0]);
  *(_WORD *)(v1 + 34) += word_3004B02;
  *(_DWORD *)(v1 + 28) = sub_8078600;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
