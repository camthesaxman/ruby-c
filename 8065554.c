int script_env_1_init()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_init((int)&unk_30005B8, (int)&gScriptCmdTable, (int)&gScriptCmdTableEnd);
  byte_30005B0 = 2;
  return v1;
}
