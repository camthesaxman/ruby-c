int move_tilemap_camera_to_upper_left_corner()
{
  __int16 v1; // [sp+0h] [bp-18h]@1
  __int16 v2; // [sp+2h] [bp-16h]@1
  __int16 v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+14h] [bp-4h]@1

  move_tilemap_camera_to_upper_left_corner_((int)&byte_3000590);
  v1 = 0;
  CpuSet(&v1, &gBG2TilemapBuffer, 16778240);
  v2 = 0;
  CpuSet(&v2, &gBG1TilemapBuffer, 16778240);
  v3 = 12308;
  CpuSet(&v3, &gBG3TilemapBuffer, 16778240);
  return v4;
}
