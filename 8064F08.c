int __fastcall LoadTextWindowGraphics(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  LoadTextWindowTiles(
    (unsigned int)v2024EB8 >> 3,
    *(_DWORD *)(*(_DWORD *)(a1 + 44) + 16) + 32 * (unsigned __int16)sTextWindowBaseTileNum);
  LoadTextWindowPalette((unsigned int)v2024EB8 >> 3, 14);
  return v2;
}
