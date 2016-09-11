int sub_80237CC()
{
  int v1; // [sp+0h] [bp-4h]@0

  v2024A60 = battle_get_side_with_given_state(*(_BYTE *)(v2024C10 + 1) != 0);
  dp01_build_cmdbuf_x08_8_8_8(0);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  v2024C10 += 2;
  return v1;
}
