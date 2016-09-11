int sub_80809B0()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  pal_fill_black();
  CreateTask((int)task0A_asap_script_env_2_enable_and_set_ctx_running, 10);
  return v1;
}
