int sub_8120A58()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024D26 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  sub_8074D28(5u);
  BeginFastPaletteFade(3u);
  dp01_tbl3_exec_completed();
  dword_3004330[v2024A60] = (int)sub_811E29C;
  return v1;
}
