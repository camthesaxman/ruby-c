int sub_8030910()
{
  char v1; // [sp+0h] [bp-18h]@1
  int v2; // [sp+14h] [bp-4h]@1

  v1 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 55) ^ *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  SetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 55, &v1);
  dp01_tbl1_exec_completed();
  return v2;
}
