int __fastcall sub_80D517C(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 34) = 0;
  *(_WORD *)(a1 + 46) = 60;
  *(_WORD *)(a1 + 50) = 140;
  *(_WORD *)(a1 + 54) = 80;
  *(_DWORD *)(a1 + 28) = sub_8078B34;
  oamt_set_x3A_32(a1, (int)move_anim_8072740);
  return v2;
}
