int dp15_determine_move_damage_jump_if_not_fatal()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( (unsigned int)gBattleMoves[12 * v2016802 + 1] <= 1
    || (v2024DEC = 0,
        v201601C = 0,
        v201601F = 1,
        v2024C68 = 0,
        v2024C0D = 1,
        v2024BE6 = v2016802,
        sub_801CAF8(v2024C07, v2024C08),
        move_effectiveness_something(v2024BE6, v2024C07, v2024C08),
        v2024BEC = v2024BEC * *(_BYTE *)(v2016801 + 0x2016818) / 100,
        (signed int)*(_WORD *)(88 * v2024C08 + 0x2024AA8) <= v2024BEC) )
  {
    v2039238 += 5;
  }
  else
  {
    v2039238 = *(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24);
  }
  return v1;
}
