int PlayerNotOnBikeNotMoving()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = player_get_direction_lower_nybble();
  PlayerFaceDirection(v0);
  return v2;
}
