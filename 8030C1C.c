int sub_8030C1C()
{
  int v1; // [sp+0h] [bp-4h]@0

  fanfare_play(*(_BYTE *)((v2024A60 << 9) + 0x2023A61) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A62) << 8));
  dp01_tbl1_exec_completed();
  return v1;
}
