int sub_8080F9C()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8080918();
  CreateTask((int)task0A_fade_n_map_maybe, 10);
  dword_300485C = (int)sub_80C791C;
  return v1;
}
