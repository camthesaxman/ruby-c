int __fastcall script_env_1_execute_new_script(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  script_env_init((int)&unk_30005B8, (int)&gScriptCmdTable, (int)&gScriptCmdTableEnd);
  script_setup_bytecode_script((int)&unk_30005B8, v1);
  script_env_2_enable();
  byte_30005B0 = 0;
  return v3;
}
