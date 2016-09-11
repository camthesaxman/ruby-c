int sub_8080A3C()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053E90();
  palette_bg_faded_fill_white();
  CreateTask((int)task_mpl_807DD60, 10);
  return v1;
}
