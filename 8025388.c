int atk79_setuserhptozero()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = v2024C07;
    *(_WORD *)(88 * v2024C07 + 0x2024AA8) = v2024A64;
    dp01_build_cmdbuf_x02_a_b_varargs(0, 42, 0, 2u, (char *)(88 * v2024A60 + 33704616));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    ++v2024C10;
  }
  return v1;
}
