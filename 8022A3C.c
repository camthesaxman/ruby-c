int __fastcall sub_8022A3C(char a1)
{
  int v2; // [sp+Ch] [bp-4h]@0

  *(_BYTE *)(v2024A60 + 0x2016064) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
  dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f(0, 1, a1, 0, 3 * v2024A60 + 33644652);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  return v2;
}
