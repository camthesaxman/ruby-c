int mapdata_load_assets_to_gpu_and_full_redraw()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  move_tilemap_camera_to_upper_left_corner();
  copy_map_tileset1_tileset2_to_vram(v202E828);
  v0 = apply_map_tileset1_tileset2_palette(v202E828);
  v1 = DrawWholeMapView(v0);
  cur_mapheader_run_tileset_funcs_after_some_cpuset(v1);
  return v3;
}
