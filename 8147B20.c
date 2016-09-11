signed int __fastcall sub_8147B20(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@3
  int v5; // ST04_4@3
  unsigned __int16 v6; // r5@4
  int v7; // r2@4
  int v8; // r6@4
  int v9; // r2@4
  int v10; // r0@4
  int v11; // r4@4
  void *v12; // r0@9
  int v13; // r1@9
  signed int result; // r0@13

  v3 = a1;
  if ( v201FFFF > 8u )
  {
def_8147B3C:
    result = 0;
  }
  else
  {
    switch ( v201FFFF )
    {
      case 0u:
        v5 = (unsigned __int16)GetMonData(a1, 65, a3);
        GetMonData(v3, 0, v4);
        sub_800D334((int)&gMonFrontPicTable[2 * v5], gMonFrontPicCoords[4 * v5], gMonFrontPicCoords[4 * v5 + 1]);
        goto _08147C40;
      case 1u:
        v6 = GetMonData(a1, 65, a3);
        v8 = GetMonData(v3, 0, v7);
        v10 = GetMonData(v3, 1, v9);
        v11 = sub_80409C8(v6, v10, v8);
        LoadCompressedObjectPalette((_DWORD *)v11);
        GetMonSpriteTemplate_803C56C(*(_WORD *)(v11 + 4), 1u);
        goto _08147C40;
      case 2u:
        LoadCompressedObjectPic((_DWORD *)"ê}Á\b");
        goto _08147C40;
      case 3u:
        LoadCompressedObjectPalette((_DWORD *)"PÄÁ\b–9");
        goto _08147C40;
      case 4u:
        LoadCompressedObjectPic((_DWORD *)"»ÅÁ\b ");
        goto _08147C40;
      case 5u:
        sub_8147C90(v203855E);
        LoadCompressedObjectPalette((_DWORD *)0x2039350);
        goto _08147C40;
      case 6u:
        v12 = &gBattleTerrainTiles_Building;
        v13 = 100663296;
        goto _08147C3C;
      case 7u:
        v12 = &gUnknown_08E782FC;
        v13 = 100722688;
_08147C3C:
        LZDecompressVram((int)v12, v13);
_08147C40:
        ++v201FFFF;
        goto def_8147B3C;
      case 8u:
        LoadCompressedPalette((int)&gBattleTerrainPalette_BattleTower, 0x20u, 96);
        v201FFFF = 0;
        result = 1;
        break;
      default:
        goto def_8147B3C;
    }
  }
  return result;
}
