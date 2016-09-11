int __fastcall sub_81260EC(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  script_env_init(a1, (int)&gScriptFuncs, 136170296);
  script_setup_bytecode_script(v2, v3);
  *(_DWORD *)(v2 + 100) = v3;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  return v5;
}
