int sub_8080E44()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053E90();
  pal_fill_black();
  CreateTask((int)task_mpl_807E3C8, 10);
  return v1;
}
