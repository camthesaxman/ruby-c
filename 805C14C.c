int __fastcall npc_coords_shift_still(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  npc_coords_shift(a1, *(_WORD *)(a1 + 16), *(_WORD *)(a1 + 18));
  return v2;
}
