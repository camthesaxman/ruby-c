int sub_808102C()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  sub_8053FF8();
  sub_8080918();
  audio_play(9u);
  CreateTask((int)sub_8080FC4, 10);
  return v1;
}
