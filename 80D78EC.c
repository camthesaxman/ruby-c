int __fastcall sub_80D78EC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B00[0];
  *(_WORD *)(a1 + 48) = 60;
  *(_WORD *)(a1 + 50) = 9;
  *(_WORD *)(a1 + 52) = 30;
  *(_WORD *)(a1 + 54) = -512;
  oamt_set_x3A_32(a1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078174;
  call_via_r1(v1, sub_8078174);
  return v3;
}
