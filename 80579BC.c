int __fastcall move_tilemap_camera_to_upper_left_corner_(int result)
{
  *(_BYTE *)(result + 2) = 0;
  *(_BYTE *)(result + 3) = 0;
  *(_BYTE *)result = 0;
  *(_BYTE *)(result + 1) = 0;
  *(_BYTE *)(result + 4) = 1;
  return result;
}
