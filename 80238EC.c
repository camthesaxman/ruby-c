int atk58_cmd58()
{
  int v1; // [sp+8h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  dp01_build_cmdbuf_x06_a(0, 1);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  v2024C10 += 2;
  return v1;
}
