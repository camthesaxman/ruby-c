int c2_exit_to_overworld_2_local()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = sub_8054A4C(&byte_3001BAC);
  if ( v0 )
  {
    SetFieldVBlankCallback(v0);
    SetMainCallback2((int)c2_overworld);
  }
  return v2;
}
