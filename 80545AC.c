int c2_80567AC()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = sub_805483C(&byte_3001BAC);
  if ( v0 )
  {
    SetFieldVBlankCallback(v0);
    set_callback1((int)sub_8055354);
    sub_80543DC((int)sub_8055390);
    SetMainCallback2((int)c2_overworld);
  }
  return v2;
}
