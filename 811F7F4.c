int sub_811F7F4()
{
  int v0; // r1@1
  int v2; // [sp+Ch] [bp-4h]@0

  sub_8032AA8(v2024A60, *(_BYTE *)((v2024A60 << 9) + 0x2023A62));
  *(_WORD *)(2 * v2024A60 + 0x2024A6A) = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  sub_80318FC((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
  sub_811F864();
  dword_3004330[v2024A60] = (int)sub_811E1BC;
  return v2;
}
