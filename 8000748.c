int ResetSpriteData()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v0 = ResetOamRange(0, 128);
  v1 = ResetAllSprites(v0);
  v2 = ClearSpriteCopyRequests(v1);
  v3 = ResetAffineAnimData(v2);
  FreeSpriteTileRanges(v3);
  gOamLimit = 64;
  gReservedSpriteTileCount = 0;
  AllocSpriteTiles(0);
  gSpriteCoordOffsetX = 0;
  gSpriteCoordOffsetY = 0;
  return v5;
}
