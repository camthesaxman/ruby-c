int atk4C_switch1()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    *(_WORD *)(2 * v2024A60 + 0x2024A6A) = *(_BYTE *)(v2024A60 + 0x2016068);
    dp01_build_cmdbuf_x00_a_b_0(0, 0, gBitTable[*(_WORD *)(2 * v2024A60 + 0x2024A6A)]);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 2;
  }
  return v1;
}
