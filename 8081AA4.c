int sub_8081AA4()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  player_bitmagic();
  sub_80597F4();
  dword_3001778 = (int)sub_80C824C;
  v20239F8 = 128;
  v0 = sub_8082034();
  task_add_01_battle_start(v0, 0);
  return v2;
}
