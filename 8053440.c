int warp_in()
{
  int v1; // [sp+0h] [bp-4h]@0

  warp_shift();
  set_current_map_header_from_sav1_save_old_name();
  sub_80533CC();
  return v1;
}
