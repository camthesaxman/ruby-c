int c2_exit_to_overworld_2_switch()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( is_c1_link_related_active() == 1 )
  {
    SetMainCallback2((int)c2_exit_to_overworld_2_link);
  }
  else
  {
    sub_80547A8();
    SetMainCallback2((int)c2_exit_to_overworld_2_local);
  }
  return v1;
}
