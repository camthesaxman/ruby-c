_BOOL4 IsPlayerSurfingNorth()
{
  return (unsigned __int8)player_get_direction_upper_nybble() == 2 && TestPlayerAvatarFlags(8u) << 24;
}
