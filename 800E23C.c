int sub_800E23C()
{
  void *v0; // r0@4
  int v1; // r0@10
  int v3; // [sp+8h] [bp-4h]@0

  if ( !(v20239F8 & 2) )
  {
    if ( v20239F8 & 0x902 )
    {
      LZDecompressVram((int)&gBattleTerrainAnimTiles_Building, 100679680);
      v0 = &gBattleTerrainAnimTilemap_Building;
_0800E3D2:
      LZDecompressVram((int)v0, 100720640);
      return v3;
    }
    if ( v20239F8 & 0x1000 )
    {
      if ( gGameVersion == 2 )
      {
        LZDecompressVram((int)&gBattleTerrainAnimTiles_Cave, 100679680);
        v0 = &gBattleTerrainAnimTilemap_Cave;
      }
      else
      {
        LZDecompressVram((int)&gBattleTerrainAnimTiles_Underwater, 100679680);
        v0 = &gBattleTerrainAnimTilemap_Underwater;
      }
      goto _0800E3D2;
    }
    if ( v20239F8 & 8 )
    {
      v1 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 1);
      if ( v1 == 25 )
      {
        LZDecompressVram((int)&gBattleTerrainAnimTiles_Building, 100679680);
        v0 = &gBattleTerrainAnimTilemap_Building;
        goto _0800E3D2;
      }
      if ( v1 == 32 )
      {
        LZDecompressVram((int)&gBattleTerrainAnimTiles_Building, 100679680);
        v0 = &gBattleTerrainAnimTilemap_Building;
        goto _0800E3D2;
      }
    }
    if ( sav1_map_get_battletype() << 24 )
    {
      LZDecompressVram((int)&gBattleTerrainAnimTiles_Building, 100679680);
      LZDecompressVram((int)&gBattleTerrainAnimTilemap_Building, 100720640);
      return v3;
    }
    LZDecompressVram((int)*(&off_81F95B4 + 5 * (unsigned __int8)byte_300428C), 100679680);
    v0 = *(&off_81F95B8 + 5 * (unsigned __int8)byte_300428C);
    goto _0800E3D2;
  }
  LZDecompressVram((int)&gVersusFrameGfx, 100679680);
  LZDecompressVram((int)&gVersusFrameTilemap, 100720640);
  LZDecompressVram((int)&gVersusFrameTilemap, 100724736);
  LZDecompressVram((int)&gUnknown_08E5DC2C, 100728832);
  LoadCompressedPalette(&gVersusFramePal, 96, 32);
  v400000A = 23556;
  v4000048 = 54;
  v400004A = 54;
  word_30041B4 = -164;
  word_3004280 = -164;
  LoadCompressedObjectPic((_DWORD *)",άε\b");
  return v3;
}
