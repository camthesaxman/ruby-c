signed int __fastcall do_berry_tree_growth_sparkle_2(int a1, int a2)
{
  *(_BYTE *)a1 |= 2u;
  *(_WORD *)(a2 + 48) = 3;
  *(_WORD *)(a2 + 50) = 0;
  *(_WORD *)(a2 + 60) |= 2u;
  v202FF84 = *(_WORD *)(a1 + 16);
  v202FF88 = *(_WORD *)(a1 + 18);
  v202FF8C = *(_BYTE *)(a2 + 67) - 1;
  v202FF90 = (unsigned int)*(_BYTE *)(a2 + 5) << 28 >> 30;
  FieldEffectStart(23);
  return 1;
}
