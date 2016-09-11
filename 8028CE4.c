int atkB3_rolloutdamagecalculation()
{
  char v0; // r3@5
  int v1; // r1@5
  int i; // r2@7
  int v4; // [sp+18h] [bp-4h]@0

  if ( v2024C68 & 0x29 )
  {
    b_cancel_multi_turn_move_maybe(v2024C07);
    v2024C10 = &BattleScript_1D6F74;
  }
  else
  {
    if ( !(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x1000) )
    {
      *(_BYTE *)(28 * v2024C07 + 0x2024CB9) = *(_BYTE *)(28 * v2024C07 + 0x2024CB9) & 0xF0 | 5;
      *(_BYTE *)(28 * v2024C07 + 0x2024CB9) = *(_BYTE *)(28 * v2024C07 + 0x2024CB9) & 0xF | 0x50;
      *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= 0x1000u;
      *(_WORD *)(2 * v2024C07 + 0x2024C54) = v2024BE6;
    }
    v0 = *(_BYTE *)(28 * v2024C07 + 0x2024CB9);
    v1 = ((v0 & 0xF) - 1) & 0xF;
    *(_BYTE *)(28 * v2024C07 + 0x2024CB9) = v0 & 0xF0 | v1;
    if ( !v1 )
      *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xFFFFEFFF;
    v2024DEC = gBattleMoves[12 * v2024BE6 + 1];
    for ( i = 1; i < 5 - (*(_BYTE *)(28 * v2024C07 + 0x2024CB9) & 0xF); ++i )
      v2024DEC *= 2;
    if ( *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x40000000 )
      v2024DEC *= 2;
    ++v2024C10;
  }
  return v4;
}
