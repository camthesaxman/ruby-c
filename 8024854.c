int atk6A_stash_item_for_side()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v2024A60 = v0;
  *(_WORD *)(2 * v0 + 0x20160CC) = *(_WORD *)(88 * v0 + 0x2024AAE);
  *(_WORD *)(88 * v2024A60 + 0x2024AAE) = 0;
  dp01_build_cmdbuf_x02_a_b_varargs(0, 2, 0, 2u, (char *)(88 * v2024A60 + 33704622));
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  v2024C10 += 2;
  return v2;
}
