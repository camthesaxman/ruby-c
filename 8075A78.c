int ma01_080728D0()
{
  int v0; // r4@1
  unsigned __int16 v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = (*v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8)) - 10000;
  v1 = *(_WORD *)&gBattleAnimPicTable[8 * v0 + 6];
  FreeSpriteTilesByTag(*(_WORD *)&gBattleAnimPicTable[8 * v0 + 6]);
  FreeSpritePaletteByTag(v1);
  v202F7A4 += 2;
  sub_8075970(v0);
  return v3;
}
