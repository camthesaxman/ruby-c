int c2_exit_to_overworld_2_link()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !sub_8055870() && sub_8054A9C(&byte_3001BAC) )
    SetMainCallback2((int)c2_overworld);
  return v1;
}
