signed int __fastcall sub_801C108(unsigned __int16 a1)
{
  signed int v1; // r4@1

  v1 = 0;
  if ( *(_BYTE *)(16 * v2024C08 + 0x2024D28) << 31 && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 8) & 2 )
  {
    v2024C68 |= 1u;
    mcmd_jump_if_move_not_executed(7u, a1);
    v2024D24 = 1;
    v1 = 1;
  }
  return v1;
}
