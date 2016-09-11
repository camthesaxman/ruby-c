int __fastcall sub_80C9D74(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  script_env_2_enable();
  script_env_1_execute_new_script((int)&gUnknown_081A168F);
  DestroyTask(v1);
  return v3;
}
