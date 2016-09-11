int sub_8097DE0()
{
  int v1; // [sp+0h] [bp-4h]@0

  v2000007 = 0;
  v2000008 = 0;
  v200000A = 0;
  v400000E = 7695;
  v40000D4 = &gPokemonStorageScrollingBGTile;
  v40000D8 = 100720640;
  v40000DC = -2147483632;
  LZ77UnCompVram(&gPokemonStorageScrollingBGTilemap, 100724736);
  LoadPalette((int)&gPokemonStorageScrollingBGPalette, 208, 16);
  return v1;
}
