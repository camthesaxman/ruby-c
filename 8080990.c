int sub_8080990()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053E90();
  pal_fill_black();
  CreateTask((int)task0A_asap_script_env_2_enable_and_set_ctx_running, 10);
  return v1;
}
