signed int sub_8081E90()
{
  unsigned __int8 v0; // r4@1
  signed __int16 v2; // [sp+0h] [bp-Ch]@1

  PlayerGetDestCoords(&v2, &v2 + 1);
  v0 = MapGridGetMetatileBehaviorAt(v2, *(&v2 + 1));
  if ( sav1_get_flash_used_on_map() << 24 )
    return 2;
  if ( !(MetatileBehavior_IsSurfableWaterOrUnderwater(v0) << 24) )
  {
    if ( v202E83F == 4 )
      return 1;
    if ( v202E83F != 5 )
      return 0;
  }
  return 3;
}
