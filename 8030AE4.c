int sub_8030AE4()
{
  int v1; // [sp+0h] [bp-4h]@0

  v20238C8 = v20238C8 & 0x80 | *(_BYTE *)((v2024A60 << 9) + 0x2023A61) & 0x7F;
  dp01_tbl1_exec_completed();
  return v1;
}
