int c2_load_new_map()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_80547A8();
  v1 = script_env_1_init(v0);
  script_env_2_disable(v1);
  set_callback1(0);
  SetMainCallback2((int)sub_810CC80);
  dword_3001778 = (int)CB2_NewGame;
  return v3;
}
