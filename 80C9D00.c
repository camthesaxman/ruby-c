int __fastcall sub_80C9D00(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80A9538(v203855E, 1u);
  script_env_2_enable();
  script_env_1_execute_new_script((int)&gUnknown_081A1654);
  DestroyTask(v1);
  return v3;
}
