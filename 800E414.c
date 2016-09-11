signed int __fastcall sub_800E414(int a1)
{
  signed int v1; // r4@1
  void *v2; // r0@9
  int v3; // r0@12
  unsigned int v4; // r0@15
  void *v5; // r0@29
  int v6; // r0@32
  unsigned int v7; // r0@35
  void *v8; // r0@49
  int v9; // r0@52
  unsigned int v10; // r0@56

  a1 = (unsigned __int8)a1;
  v1 = 0;
  if ( (unsigned __int8)a1 > 6u )
  {
def_800E42A:
    v1 = 1;
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        LZDecompressVram((int)&gUnknown_08D00000, 100663296);
        return v1;
      case 1:
        CpuSet(&gUnknown_08D00524, 100712448, 2048);
        return v1;
      case 2:
        LoadCompressedPalette(&gUnknown_08D004E0, 0, 64);
        return v1;
      case 3:
        if ( v20239F8 & 0x902 )
          goto _0800E57C;
        if ( v20239F8 & 0x1000 )
        {
          if ( gGameVersion == 2 )
            v2 = &gBattleTerrainTiles_Cave;
          else
            v2 = &gBattleTerrainTiles_Water;
          goto _0800E57E;
        }
        if ( !(v20239F8 & 8) )
          goto _0800E4F0;
        v3 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 1);
        if ( v3 == 25 )
        {
_0800E57C:
          v2 = &gBattleTerrainTiles_Building;
          goto _0800E57E;
        }
        if ( v3 == 32 )
        {
          v2 = &gBattleTerrainTiles_Stadium;
_0800E57E:
          LZDecompressVram((int)v2, 100696064);
          return v1;
        }
_0800E4F0:
        v4 = (unsigned __int8)sav1_map_get_battletype();
        if ( v4 <= 8 )
        {
          switch ( v4 )
          {
            case 0u:
              v2 = *(&gBattleTerrainTable + 5 * (unsigned __int8)byte_300428C);
              goto _0800E57E;
            case 2u:
              v2 = &gBattleTerrainTiles_Stadium;
              goto _0800E57E;
            case 3u:
              v2 = &gBattleTerrainTiles_Stadium;
              goto _0800E57E;
            case 4u:
              v2 = &gBattleTerrainTiles_Stadium;
              goto _0800E57E;
            case 5u:
              v2 = &gBattleTerrainTiles_Stadium;
              goto _0800E57E;
            case 6u:
              v2 = &gBattleTerrainTiles_Stadium;
              goto _0800E57E;
            case 7u:
              v2 = &gBattleTerrainTiles_Stadium;
              goto _0800E57E;
            case 1u:
            case 8u:
              goto _0800E57C;
            default:
              return v1;
          }
        }
        return v1;
      case 4:
        if ( v20239F8 & 0x902 )
          goto _0800E688;
        if ( v20239F8 & 0x1000 )
        {
          if ( gGameVersion == 2 )
            v5 = &gBattleTerrainTilemap_Cave;
          else
            v5 = &gBattleTerrainTilemap_Water;
          goto _0800E68A;
        }
        if ( !(v20239F8 & 8) )
          goto _0800E5FC;
        v6 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 1);
        if ( v6 == 25 )
        {
_0800E688:
          v5 = &gBattleTerrainTilemap_Building;
          goto _0800E68A;
        }
        if ( v6 == 32 )
        {
          v5 = &gBattleTerrainTilemap_Stadium;
_0800E68A:
          LZDecompressVram((int)v5, 100716544);
          return v1;
        }
_0800E5FC:
        v7 = (unsigned __int8)sav1_map_get_battletype();
        if ( v7 <= 8 )
        {
          switch ( v7 )
          {
            case 0u:
              v5 = *(&off_81F95B0 + 5 * (unsigned __int8)byte_300428C);
              goto _0800E68A;
            case 2u:
              v5 = &gBattleTerrainTilemap_Stadium;
              goto _0800E68A;
            case 3u:
              v5 = &gBattleTerrainTilemap_Stadium;
              goto _0800E68A;
            case 4u:
              v5 = &gBattleTerrainTilemap_Stadium;
              goto _0800E68A;
            case 5u:
              v5 = &gBattleTerrainTilemap_Stadium;
              goto _0800E68A;
            case 6u:
              v5 = &gBattleTerrainTilemap_Stadium;
              goto _0800E68A;
            case 7u:
              v5 = &gBattleTerrainTilemap_Stadium;
              goto _0800E68A;
            case 1u:
            case 8u:
              goto _0800E688;
            default:
              return v1;
          }
        }
        return v1;
      case 5:
        if ( v20239F8 & 0x902 )
        {
_0800E7A4:
          v8 = &gBattleTerrainPalette_BattleTower;
          goto _0800E7A6;
        }
        if ( v20239F8 & 0x1000 )
        {
          if ( gGameVersion == 2 )
            v8 = &gBattleTerrainPalette_Groudon;
          else
            v8 = &gBattleTerrainPalette_Kyogre;
          goto _0800E7A6;
        }
        if ( !(v20239F8 & 8) )
          goto _0800E710;
        v9 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 1);
        if ( v9 == 25 )
        {
          v8 = &gBattleTerrainPalette_BuildingLeader;
_0800E7A6:
          LoadCompressedPalette(v8, 32, 96);
          return v1;
        }
        if ( v9 == 32 )
        {
          v8 = &gBattleTerrainPalette_StadiumSteven;
          goto _0800E7A6;
        }
_0800E710:
        v10 = (unsigned __int8)sav1_map_get_battletype();
        if ( v10 <= 8 )
        {
          switch ( v10 )
          {
            case 0u:
              v8 = *(&off_81F95BC + 5 * (unsigned __int8)byte_300428C);
              goto _0800E7A6;
            case 1u:
              v8 = &gBattleTerrainPalette_BuildingGym;
              goto _0800E7A6;
            case 2u:
              v8 = &gBattleTerrainPalette_StadiumMagma;
              goto _0800E7A6;
            case 3u:
              v8 = &gBattleTerrainPalette_StadiumAqua;
              goto _0800E7A6;
            case 4u:
              v8 = &gBattleTerrainPalette_StadiumSidney;
              goto _0800E7A6;
            case 5u:
              v8 = &gBattleTerrainPalette_StadiumPhoebe;
              goto _0800E7A6;
            case 6u:
              v8 = &gBattleTerrainPalette_StadiumGlacia;
              goto _0800E7A6;
            case 7u:
              v8 = &gBattleTerrainPalette_StadiumDrake;
              goto _0800E7A6;
            case 8u:
              goto _0800E7A4;
            default:
              return v1;
          }
        }
        break;
      case 6:
        sub_800D74C();
        return v1;
      default:
        goto def_800E42A;
    }
  }
  return v1;
}
