int cur_mapdata_block_role_at_player_pos()
{
  signed __int16 v1; // [sp+0h] [bp-Ch]@1

  PlayerGetDestCoords(&v1, &v1 + 1);
  return (unsigned __int16)MapGridGetMetatileBehaviorAt(v1, *(&v1 + 1));
}
