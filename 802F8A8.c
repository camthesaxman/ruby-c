int sub_802F8A8()
{
  int v0; // r1@1
  int v1; // r1@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
  sub_8032AA8();
  *(_WORD *)(2 * v2024A60 + 0x2024A6A) = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  sub_80318FC((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
  *(_BYTE *)(v2024A60 + 0x2024E60) = 0;
  *(_BYTE *)(v2024A60 + 0x2024E64) = 0;
  v1 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
  sub_802F934();
  dword_3004330[v2024A60] = (int)sub_802D798;
  return v3;
}
