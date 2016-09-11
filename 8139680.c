int sub_8139680()
{
  int v1; // [sp+0h] [bp-4h]@0

  audio_play(*(_BYTE *)((v2024A60 << 9) + 0x2023A61) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A62) << 8));
  dp01_tbl5_exec_completed();
  return v1;
}
