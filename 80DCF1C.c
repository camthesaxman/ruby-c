int __fastcall sub_80DCF1C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56);
  *(_WORD *)(a1 + 32) += v2;
  *(_WORD *)(a1 + 46) = 192;
  *(_WORD *)(a1 + 48) = v2;
  *(_WORD *)(a1 + 50) = 4;
  *(_WORD *)(a1 + 52) = 32;
  *(_WORD *)(a1 + 54) = -24;
  oamt_set_x3A_32(a1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_8078278;
  call_via_r1(v1, sub_8078278);
  return v4;
}
