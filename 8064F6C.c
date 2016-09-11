int __fastcall LoadTextWindowGraphics_OverrideFrameType(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  LoadTextWindowTiles(a2, *(_DWORD *)(*(_DWORD *)(a1 + 44) + 16) + 32 * (unsigned __int16)sTextWindowBaseTileNum);
  LoadTextWindowPalette(v2, 14);
  return v4;
}
