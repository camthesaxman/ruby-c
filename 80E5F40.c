_BOOL4 player_should_look_direction_be_enforced_upon_movement()
{
  return !(TestPlayerAvatarFlags(4u) << 24)
      || !(MetatileBehavior_IsBumpySlope(BYTE2(dword_30048A0[9 * v202E85D + 7])) << 24);
}
