int __fastcall sub_810D028(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r0@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v4000000 = 0;
  LZ77UnCompVram(&gCaveTransitionTiles, 100712448);
  LZ77UnCompVram(&gCaveTransitionTilemap, 100726784);
  v4000050 = 0;
  v4000052 = 0;
  v4000054 = 0;
  v4000008 = 7948;
  v4000000 = 4416;
  LoadPalette((int)&gCaveTransitionPalette_White, 224, 32);
  LoadPalette((int)&gCaveTransitionPalette_Black, 0, 32);
  v2 = &dword_3004B20[10 * v1];
  *v2 = (int)sub_810D0C4;
  *((_WORD *)v2 + 4) = 16;
  *((_WORD *)v2 + 5) = 0;
  *((_WORD *)v2 + 6) = 0;
  return v4;
}
