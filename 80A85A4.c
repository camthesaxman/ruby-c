int __fastcall sub_80A85A4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 46) = *(_WORD *)(a1 + 54);
  *(_WORD *)(a1 + 48) = -*(_WORD *)(a1 + 48);
  *(_DWORD *)(a1 + 28) = sub_8078458;
  oamt_set_x3A_32(a1, (int)move_anim_8072740);
  return v2;
}
