int sub_812BEE0()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( move_anim_start_t3(
         v2024A60,
         v2024A60,
         v2024A60,
         *(_BYTE *)((v2024A60 << 9) + 0x2023A61),
         *(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A63) << 8)) << 24 )
    dp01_tbl6_exec_completed();
  else
    dword_3004330[v2024A60] = (int)sub_812B794;
  return v1;
}
