int sub_800D7B8()
{
  void *v0; // r0@2
  int v1; // r0@8
  unsigned int v2; // r0@12
  int v4; // [sp+8h] [bp-4h]@0

  if ( v20239F8 & 0x902 )
  {
    LZDecompressVram((int)&gBattleTerrainTiles_Building, 100696064);
    LZDecompressVram((int)&gBattleTerrainTilemap_Building, 100716544);
    v0 = &gBattleTerrainPalette_BattleTower;
_0800DA66:
    LoadCompressedPalette(v0, 32, 96);
    return v4;
  }
  if ( v20239F8 & 0x1000 )
  {
    if ( gGameVersion == 2 )
    {
      LZDecompressVram((int)&gBattleTerrainTiles_Cave, 100696064);
      LZDecompressVram((int)&gBattleTerrainTilemap_Cave, 100716544);
      v0 = &gBattleTerrainPalette_Groudon;
    }
    else
    {
      LZDecompressVram((int)&gBattleTerrainTiles_Water, 100696064);
      LZDecompressVram((int)&gBattleTerrainTilemap_Water, 100716544);
      v0 = &gBattleTerrainPalette_Kyogre;
    }
    goto _0800DA66;
  }
  if ( v20239F8 & 8 )
  {
    v1 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 1);
    if ( v1 == 25 )
    {
      LZDecompressVram((int)&gBattleTerrainTiles_Building, 100696064);
      LZDecompressVram((int)&gBattleTerrainTilemap_Building, 100716544);
      v0 = &gBattleTerrainPalette_BuildingLeader;
      goto _0800DA66;
    }
    if ( v1 == 32 )
    {
      LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
      LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
      v0 = &gBattleTerrainPalette_StadiumSteven;
      goto _0800DA66;
    }
  }
  v2 = (unsigned __int8)sav1_map_get_battletype();
  if ( v2 <= 8 )
  {
    switch ( v2 )
    {
      case 0u:
        LZDecompressVram((int)*(&gBattleTerrainTable + 5 * (unsigned __int8)byte_300428C), 100696064);
        LZDecompressVram((int)*(&off_81F95B0 + 5 * (unsigned __int8)byte_300428C), 100716544);
        v0 = *(&off_81F95BC + 5 * (unsigned __int8)byte_300428C);
        goto _0800DA66;
      case 1u:
        LZDecompressVram((int)&gBattleTerrainTiles_Building, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Building, 100716544);
        v0 = &gBattleTerrainPalette_BuildingGym;
        goto _0800DA66;
      case 2u:
        LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
        v0 = &gBattleTerrainPalette_StadiumMagma;
        goto _0800DA66;
      case 3u:
        LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
        v0 = &gBattleTerrainPalette_StadiumAqua;
        goto _0800DA66;
      case 4u:
        LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
        v0 = &gBattleTerrainPalette_StadiumSidney;
        goto _0800DA66;
      case 5u:
        LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
        v0 = &gBattleTerrainPalette_StadiumPhoebe;
        goto _0800DA66;
      case 6u:
        LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
        v0 = &gBattleTerrainPalette_StadiumGlacia;
        goto _0800DA66;
      case 7u:
        LZDecompressVram((int)&gBattleTerrainTiles_Stadium, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Stadium, 100716544);
        v0 = &gBattleTerrainPalette_StadiumDrake;
        goto _0800DA66;
      case 8u:
        LZDecompressVram((int)&gBattleTerrainTiles_Building, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Building, 100716544);
        LoadCompressedPalette(&gBattleTerrainPalette_BattleTower, 32, 96);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
