int sub_8080F68()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053FF8();
  sub_8080918();
  audio_play(0x2Du);
  CreateTask((int)task0A_fade_n_map_maybe, 10);
  dword_300485C = (int)sub_8080B78;
  return v1;
}
