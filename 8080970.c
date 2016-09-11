int __fastcall task0A_asap_script_env_2_enable_and_set_ctx_running(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8080E70() == 1 )
  {
    DestroyTask(v1);
    script_env_2_enable_and_set_ctx_running();
  }
  return v3;
}
