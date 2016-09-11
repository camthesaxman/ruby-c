int sub_80393E4()
{
  int v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  *(_WORD *)(2 * v2024A60 + 0x2024A6A) = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
  sub_8039430();
  dword_3004330[v2024A60] = (int)sub_8037E30;
  return v2;
}
