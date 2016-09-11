int __fastcall sub_80C4B5C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v202E8CC == 1 )
  {
    if ( sub_8007ECC() << 24 )
      dword_3004B20[10 * v1] = (int)sub_80C4BA4;
  }
  else
  {
    DestroyTask(a1);
    script_env_2_disable();
    script_env_2_enable_and_set_ctx_running();
  }
  return v3;
}
