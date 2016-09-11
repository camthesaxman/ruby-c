int __fastcall task_mpl_807E3C8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8080E70() == 1 )
  {
    script_env_2_disable();
    DestroyTask(v1);
    sub_8064E2C();
  }
  return v3;
}
