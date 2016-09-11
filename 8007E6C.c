int bitmask_all_link_players_but_self()
{
  return ((1 << GetMultiplayerId()) ^ 0xF) & 0xFF;
}
