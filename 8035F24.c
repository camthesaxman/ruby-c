int dp01t_34_7_move_anim_start_t3()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( !(mplay_80342A4(v2024A60) << 24) )
  {
    if ( move_anim_start_t3(
           v2024A60,
           v2024A60,
           v2024A60,
           *(_BYTE *)((v2024A60 << 9) + 0x2023A61),
           *(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A63) << 8)) << 24 )
      sub_80334EC();
    else
      dword_3004330[v2024A60] = (int)sub_80334C0;
  }
  return v1;
}
