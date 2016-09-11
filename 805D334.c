signed int __fastcall do_berry_tree_growth_sparkle_1(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r7@1
  signed int result; // r0@5

  v2 = a1;
  v3 = a2;
  npc_reset();
  *(_BYTE *)(v2 + 1) |= 0x20u;
  *(_BYTE *)(v3 + 62) |= 4u;
  v4 = (unsigned __int8)GetStageByBerryTreeId(*(_BYTE *)(v2 + 29));
  if ( v4 )
  {
    *(_BYTE *)(v2 + 1) &= 0xDFu;
    *(_BYTE *)(v3 + 62) &= 0xFBu;
    if ( *(_BYTE *)(v3 + 42) == ((v4 - 1) & 0xFF) )
    {
      get_berry_tree_graphics(v2, v3);
      FieldObjectSetRegularAnim(v2, v3, 57);
      result = 1;
      *(_WORD *)(v3 + 48) = 1;
    }
    else
    {
      *(_WORD *)(v3 + 48) = 2;
      result = 1;
    }
  }
  else
  {
    if ( !(*(_WORD *)(v3 + 60) & 4) && *(_BYTE *)(v3 + 42) == 4 )
    {
      v202FF84 = *(_WORD *)(v2 + 16);
      v202FF88 = *(_WORD *)(v2 + 18);
      v202FF8C = *(_BYTE *)(v3 + 67) - 1;
      v202FF90 = (unsigned int)*(_BYTE *)(v3 + 5) << 28 >> 30;
      FieldEffectStart(23);
      *(_BYTE *)(v3 + 42) = 0;
    }
    result = 0;
  }
  return result;
}
