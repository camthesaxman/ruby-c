int __fastcall sub_8139EF8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( byte_30007B4 == 4 )
  {
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    if ( v2024EAC )
      script_env_1_execute_new_script((int)&gUnknown_08152C75);
    else
      script_env_1_execute_new_script((int)&gUnknown_08152850);
  }
  else
  {
    MenuZeroFillWindowRect(0, 0, 0xAu, 9u);
    script_env_2_enable_and_set_ctx_running();
  }
  DestroyTask(v1);
  return v3;
}
