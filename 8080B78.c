int sub_8080B78()
{
  int v1; // [sp+0h] [bp-4h]@0

  sub_8053E90();
  pal_fill_for_maplights();
  audio_play(0x2Eu);
  CreateTask((int)task_map_chg_seq_0807E2CC, 10);
  script_env_2_enable();
  return v1;
}
