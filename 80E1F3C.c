int __fastcall sub_80E1F3C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 48) = 10;
  *(_WORD *)(a1 + 50) = 8;
  *(_WORD *)(a1 + 52) = 40;
  *(_WORD *)(a1 + 54) = 112;
  *(_WORD *)(a1 + 56) = 0;
  oamt_set_x3A_32(a1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_8078174;
  call_via_r1(v1, sub_8078174);
  return v3;
}
