int mapldr_080842E8()
{
  int v1; // [sp+0h] [bp-4h]@0

  pal_fill_black();
  CreateTask((int)task00_8084310, 0);
  script_env_2_enable();
  player_bitmagic();
  dword_300485C = 0;
  return v1;
}
