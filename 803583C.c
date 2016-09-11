int sub_803583C()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !(mplay_80342A4(v2024A60) << 24) )
  {
    move_anim_start_t2_for_situation(
      *(_BYTE *)((v2024A60 << 9) + 0x2023A61),
      *(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A63) << 8) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A64) << 16) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A65) << 24));
    dword_3004330[v2024A60] = (int)sub_8033494;
  }
  return v1;
}
