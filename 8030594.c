int sub_8030594()
{
  char v0; // r0@1
  signed int v1; // r2@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = CreateTask(TaskDummy, 255);
  byte_300434C[v2024A60] = v0;
  LOWORD(dword_3004B20[10 * byte_300434C[v2024A60] + 2]) = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) & 0xF;
  v2016054 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) >> 4;
  v201609D = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
  v20160C0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A63);
  v1 = 0;
  do
  {
    *(_BYTE *)(v1 + 33784944) = *(_BYTE *)(v1 + (v2024A60 << 9) + 4 + 33700448);
    ++v1;
  }
  while ( v1 <= 2 );
  BeginNormalPaletteFade(-1, 0, 0, 16);
  dword_3004330[v2024A60] = (int)sub_802DF30;
  v2024E6C = v2024A60;
  return v3;
}
