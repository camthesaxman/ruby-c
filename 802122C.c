int atk3B_8022C68()
{
  _BYTE *v0; // r1@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(v2024C10 + 1) )
    v0 = (_BYTE *)33704967;
  else
    v0 = (_BYTE *)33704968;
  v2024A60 = *v0;
  dp01_build_cmdbuf_x18_0_aa_health_bar_update(0, v2024BEC);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  v2024C10 += 2;
  return v2;
}
