signed int ai_switchout_natural_cure()
{
  int v0; // r0@4
  int v1; // r0@7
  int v2; // r1@8

  if ( !(*(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 7)
    || *(_BYTE *)(88 * v2024A60 + 0x2024AA0) != 30
    || *(_WORD *)(88 * v2024A60 + 0x2024AA8) < (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 1 )
  {
    return 0;
  }
  v0 = 2 * v2024A60 + 33705020;
  if ( *(_WORD *)(2 * v2024A60 + 0x2024C3C) && (v0 = 0xFFFF, *(_WORD *)(2 * v2024A60 + 0x2024C3C) != 0xFFFF)
    || !(Random(v0) & 1) )
  {
    v2 = *(_WORD *)(2 * v2024A60 + 0x2024C3C);
    if ( !gBattleMoves[12 * v2 + 1] && Random(gBattleMoves[12 * v2 + 1]) & 1 )
    {
      v1 = v2024A60;
      goto _080364E0;
    }
    if ( sub_80366A4(8, 1) << 24 || sub_80366A4(4, 1) << 24 )
      return 1;
    if ( Random(0) & 1 )
    {
      v1 = v2024A60;
      goto _080364E0;
    }
    return 0;
  }
  v1 = v2024A60;
_080364E0:
  *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v1) << 24) >> 25) + 0x20160C8) = 6;
  dp01_build_cmdbuf_x21_a_bb(1u, 2, 0);
  return 1;
}
