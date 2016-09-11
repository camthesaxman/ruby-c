int sub_810B58C()
{
  int v1; // [sp+0h] [bp-4h]@0

  audio_play(0x83u);
  FieldEffectActiveListRemove(0x25u);
  script_env_2_enable_and_set_ctx_running();
  return v1;
}
