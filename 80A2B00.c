int sub_80A2B00()
{
  int v1; // [sp+0h] [bp-4h]@0

  audio_play(0x80u);
  FieldEffectActiveListRemove(2u);
  script_env_2_enable_and_set_ctx_running();
  return v1;
}
