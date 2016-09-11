int sub_8081A18()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  player_bitmagic();
  sub_80597F4();
  dword_3001778 = (int)sub_8081C8C;
  v20239F8 = 0;
  v0 = sub_8082034();
  task_add_01_battle_start(v0, 0);
  sav12_xor_increment(7u);
  sav12_xor_increment(8u);
  return v2;
}
