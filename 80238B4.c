int atk57_80251C4_flee()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024A60 = battle_get_side_with_given_state(0);
  dp01_build_cmdbuf_x37_a(0, v2024D26);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  ++v2024C10;
  return v1;
}
