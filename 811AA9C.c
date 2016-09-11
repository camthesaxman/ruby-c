int sub_811AA9C()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( sub_81474C8() << 24 )
  {
    sub_8147514();
  }
  else
  {
    FieldEffectActiveListRemove(0x28u);
    script_env_2_enable_and_set_ctx_running();
  }
  return v1;
}
