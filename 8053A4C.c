int walkrun_find_lowest_active_bit_in_bitfield()
{
  char v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  v2029811 = player_get_direction_lower_nybble();
  if ( TestPlayerAvatarFlags(2) << 24 )
  {
    v0 = 2;
  }
  else if ( TestPlayerAvatarFlags(4) << 24 )
  {
    v0 = 4;
  }
  else if ( TestPlayerAvatarFlags(8) << 24 )
  {
    v0 = 8;
  }
  else if ( TestPlayerAvatarFlags(16) << 24 )
  {
    v0 = 16;
  }
  else
  {
    v0 = 1;
  }
  v2029810 = v0;
  return v2;
}
