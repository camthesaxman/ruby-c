int sub_8081AFC()
{
  int v1; // [sp+0h] [bp-4h]@0

  CreateMaleMon((int)&unk_30045C0, 0x188u, 5u);
  script_env_2_enable();
  dword_3001778 = (int)c2_exit_to_overworld_1_continue_scripts_restart_music;
  v20239F8 = 512;
  task_add_01_battle_start(8u, 0);
  return v1;
}
