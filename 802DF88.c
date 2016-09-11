int sub_802DF88()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (int (*)())dword_3001774 == sub_800F808 && !(v202F38F & 0x80) )
  {
    if ( v202E8F4 == 1 )
      dp01_build_cmdbuf_x22_a_three_bytes(1u, v202E8F5, 33784944);
    else
      dp01_build_cmdbuf_x22_a_three_bytes(1u, 6, 0);
    if ( (*(_BYTE *)((v2024A60 << 9) + 0x2023A61) & 0xF) == 1 )
      b_link_standby_message();
    dp01_tbl1_exec_completed();
  }
  return v1;
}
