int sub_8100364()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
  pal_fill_black();
  v0 = CreateTask((int)sub_8100334, 8);
  sub_80FE7EC(v0);
  return v2;
}
