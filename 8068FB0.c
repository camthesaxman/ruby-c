signed int GetFieldObjectScriptPointerForComparison()
{
  unsigned __int8 v0; // r4@1
  unsigned __int8 v1; // r0@1
  signed __int16 v3; // [sp+0h] [bp-14h]@1

  v0 = player_get_direction_upper_nybble();
  player_get_next_pos_and_height((int)&v3);
  v1 = MapGridGetMetatileBehaviorAt(v3, *(&v3 + 1));
  return sub_8068364((unsigned __int16 *)&v3, v1, v0);
}
