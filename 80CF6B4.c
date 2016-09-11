int __fastcall sub_80CF6B4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 46) = 6;
  *(_WORD *)(a1 + 50) = *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 54) = *(_WORD *)(a1 + 34) - 32;
  *(_DWORD *)(a1 + 28) = sub_8078B34;
  oamt_set_x3A_32(a1, (int)move_anim_8072740);
  return v2;
}
