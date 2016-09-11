unsigned int player_get_direction_upper_nybble()
{
  return (unsigned int)LOBYTE(dword_30048A0[9 * v202E85D + 6]) >> 4;
}
