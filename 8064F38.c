int __fastcall LoadTextWindowGraphics_OverridePalSlot(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = a2;
  LoadTextWindowTiles(
    (unsigned int)v2024EB8 >> 3,
    *(_DWORD *)(*(_DWORD *)(a1 + 44) + 16) + 32 * (unsigned __int16)sTextWindowBaseTileNum);
  LoadTextWindowPalette((unsigned int)v2024EB8 >> 3, v2);
  return v4;
}
