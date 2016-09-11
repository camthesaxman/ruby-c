int sub_8030C4C()
{
  unsigned __int16 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
  sub_80750B4(v0, -25, 5);
  dp01_tbl1_exec_completed();
  return v2;
}
