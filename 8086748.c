int sub_8086748()
{
  int v1; // [sp+0h] [bp-4h]@0

  sub_8053E90();
  pal_fill_for_maplights();
  script_env_2_enable();
  player_bitmagic();
  CreateTask((int)sub_8086774, 0);
  dword_300485C = 0;
  return v1;
}
