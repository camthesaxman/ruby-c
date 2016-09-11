int sub_8071C20()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = audio_play(5);
  MenuZeroFillScreen(v0);
  sub_8064E2C();
  v1 = script_env_2_disable();
  sub_8072DEC(v1);
  return v3;
}
