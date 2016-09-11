int __fastcall c3_080843F8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    if ( v202F38F & 0x80 )
      return v4;
    FieldEffectStart(0x20u);
    ++*((_WORD *)v2 + 4);
  }
  if ( !(FieldEffectActiveListContains(0x20u) << 24) )
  {
    script_env_2_disable();
    sub_806451C();
    DestroyTask(v1);
  }
  return v4;
}
