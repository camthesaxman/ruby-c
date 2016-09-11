int sub_80E6084()
{
  unsigned __int8 v0; // r0@2
  unsigned __int8 v1; // r0@3
  signed __int16 v3; // [sp+0h] [bp-10h]@2
  int v4; // [sp+Ch] [bp-4h]@4

  if ( v202E858 & 4 )
  {
    PlayerGetDestCoords(&v3, &v3 + 1);
    v0 = MapGridGetMetatileBehaviorAt(v3, *(&v3 + 1));
    if ( MetatileBehavior_IsBumpySlope(v0) << 24 )
    {
      v202E860 = 2;
      v1 = player_get_direction_upper_nybble();
      sub_8059C94(v1);
    }
  }
  return v4;
}
