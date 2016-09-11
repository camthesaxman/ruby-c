int sub_8030530()
{
  signed int v0; // r3@1
  int v2; // [sp+Ch] [bp-4h]@0

  BeginNormalPaletteFade(-1, 0, 0, 16);
  dword_3004330[v2024A60] = (int)sub_802E004;
  v2024E6C = v2024A60;
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33784944) = *(_BYTE *)(v0 + (v2024A60 << 9) + 1 + 33700448);
    ++v0;
  }
  while ( v0 <= 2 );
  return v2;
}
