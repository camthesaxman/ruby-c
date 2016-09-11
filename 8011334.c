int bc_load_battlefield()
{
  char v0; // r5@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = v2024A64;
  if ( !v2024A64 )
  {
    v2024A60 = battle_get_side_with_given_state(0);
    dp01_build_cmdbuf_x2E_a(0, byte_300428C);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    dword_30042D4 = (int)sub_8011384;
    v2024D1E = v0;
    v2024D1F = v0;
  }
  return v2;
}
