int sp13E_warp_to_last_warp()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053FF8();
  sub_8080918();
  play_some_sound();
  dword_300485C = (int)mapldr_default;
  CreateTask((int)task0A_fade_n_map_maybe, 10);
  return v1;
}
