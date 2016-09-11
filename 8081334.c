int sub_8081334()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053FF8();
  sub_8080918();
  play_some_sound();
  audio_play(9u);
  dword_300485C = (int)sub_8080B60;
  CreateTask((int)sub_80812C8, 10);
  return v1;
}
