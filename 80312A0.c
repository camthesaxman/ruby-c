int sub_80312A0()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024D26 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  sub_8074D28(5);
  BeginFastPaletteFade(3);
  dp01_tbl1_exec_completed();
  dword_3004330[v2024A60] = (int)sub_802D18C;
  return v1;
}
