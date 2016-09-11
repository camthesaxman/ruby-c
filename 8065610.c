int __fastcall script_env_2_execute_new_script(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  script_env_init((int)&unk_3000630, (int)&gScriptCmdTable, (int)&gScriptCmdTableEnd);
  script_setup_bytecode_script((int)&unk_3000630, v1);
  while ( (unsigned __int8)sub_80653EC((int)&unk_3000630) == 1 )
    ;
  return v3;
}
