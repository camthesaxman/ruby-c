int atkEA_recycleitem()
{
  int v1; // [sp+14h] [bp-4h]@0

  v2024A60 = v2024C07;
  if ( !*(_WORD *)(2 * v2024C07 + 0x20160CC) || *(_WORD *)(88 * v2024C07 + 0x2024AAE) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    v2024C04 = *(_WORD *)(2 * v2024C07 + 0x20160CC);
    *(_WORD *)(2 * v2024C07 + 0x20160CC) = 0;
    *(_WORD *)(88 * v2024A60 + 0x2024AAE) = v2024C04;
    dp01_build_cmdbuf_x02_a_b_varargs(0, 2, 0, 2u, (char *)(88 * v2024A60 + 33704622));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 5;
  }
  return v1;
}
