int sub_8081BB8()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  dword_3001778 = (int)sub_8081CEC;
  v20239F8 = 0x2000;
  task_add_01_battle_start(0, 0x1CFu);
  sav12_xor_increment(7u);
  sav12_xor_increment(8u);
  return v1;
}
