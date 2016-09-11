int sub_8054534()
{
  int v0; // r0@2
  int v1; // r0@2
  int v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  if ( !byte_3001BAC )
  {
    v0 = sub_80547A8();
    v1 = script_env_1_init(v0);
    script_env_2_disable(v1);
    set_callback1(0);
  }
  v2 = sub_805493C(&byte_3001BAC, 1);
  if ( v2 )
  {
    SetFieldVBlankCallback(v2);
    set_callback1((int)c1_overworld);
    SetMainCallback2((int)c2_overworld);
  }
  return v4;
}
