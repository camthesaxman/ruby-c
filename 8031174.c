int bx_exec_buffer_A_ch0_tbl1()
{
  int v0; // r3@2
  int v1; // ST00_4@2
  int v3; // [sp+10h] [bp-4h]@0

  if ( !(mplay_80342A4(v2024A60) << 24) )
  {
    v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
    v1 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A63) << 8);
    if ( move_anim_start_t3(v2024A60, v2024A60) << 24 )
      dp01_tbl1_exec_completed();
    else
      dword_3004330[v2024A60] = (int)sub_802E460;
  }
  return v3;
}
