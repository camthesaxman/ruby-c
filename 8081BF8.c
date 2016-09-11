int sub_8081BF8()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  dword_3001778 = (int)sub_8081CEC;
  v20239F8 = 12288;
  if ( gGameVersion == 2 )
    task_add_01_battle_start(0xBu, 0x1CFu);
  else
    task_add_01_battle_start(6u, 0x1CFu);
  sav12_xor_increment(7u);
  sav12_xor_increment(8u);
  return v1;
}
