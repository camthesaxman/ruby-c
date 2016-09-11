int __fastcall sub_8083418(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v202E8DC = 6;
  sub_8082D4C();
  textbox_close();
  script_env_2_enable_and_set_ctx_running();
  DestroyTask(v1);
  return v3;
}
