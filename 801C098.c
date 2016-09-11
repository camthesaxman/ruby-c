int atk40_801DBA0()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(16 * v2024C08 + 0x2024D28) << 31 && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 8) & 2 )
  {
    v2024C68 |= 1u;
    mcmd_jump_if_move_not_executed(5u, 0);
    v2024D24 = 1;
  }
  else
  {
    v2024C10 += 5;
  }
  return v1;
}
