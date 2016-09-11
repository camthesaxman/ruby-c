int __fastcall sub_8120514(int a1, int a2, int a3)
{
  unsigned __int16 v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v3 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], 11, a3);
  sub_80750B4(v3, -25, 5);
  dp01_tbl3_exec_completed();
  return v5;
}
