int __fastcall sub_8055840(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  audio_play(5);
  v2 = script_env_1_execute_new_script(v1);
  script_env_2_enable(v2);
  return v4;
}
