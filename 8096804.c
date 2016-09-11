int sub_8096804()
{
  int v1; // [sp+0h] [bp-4h]@0

  ResetPaletteFade();
  ResetSpriteData();
  FreeSpriteTileRanges();
  FreeAllSpritePalettes();
  ResetTasks();
  gReservedSpriteTileCount = 640;
  sub_809CFDC();
  gKeyRepeatStartDelay = 20;
  return v1;
}
