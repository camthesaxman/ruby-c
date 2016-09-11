int sub_8111E80()
{
  int *v0; // r0@1
  unsigned int *v1; // r4@1
  signed int v2; // r7@1
  char *v3; // r1@3
  char v4; // r0@5
  int v5; // r6@7
  int v6; // r2@7
  int v7; // r5@7
  int *v8; // r0@7
  unsigned int v9; // r1@8
  int v11; // [sp+18h] [bp-4h]@0

  v0 = &dword_3004B20[10 * v2014802];
  v1 = &dword_3004360[25 * *((_WORD *)v0 + 16)];
  v2 = *((_WORD *)v0 + 8);
  if ( (unsigned __int8)byte_3001BAC <= 6u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v4000000 = 0;
        SetHBlankCallback(0);
        SetVBlankCallback(0);
        ResetSpriteData();
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 4;
        word_30042A4 = 0;
        word_30042A0 = 0;
        word_30042C0 = 0;
        word_30041B4 = 0;
        word_3004288 = 0;
        word_3004280 = 0;
        word_30041B0 = 256;
        word_30041B8 = 0;
        v3 = &byte_3001BAC;
        goto _0811208E;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E6F84);
        InitWindowFromConfig(dword_3004828 + 4, (int)&gWindowConfig_81E6F84);
        goto _08112088;
      case 2:
        LoadTextWindowGraphics(dword_3004828 + 4);
        v4 = SetTextWindowBaseTileNum(2);
        *(_BYTE *)(dword_3004828 + 52) = v4;
        LoadTextWindowGraphics(dword_3004828 + 4);
        MenuZeroFillScreen();
        ResetPaletteFade();
        ++byte_3001BAC;
        SetHBlankCallback((int)nullsub_73);
        SetVBlankCallback((int)sub_811505C);
        return v11;
      case 3:
        sub_804E22C();
        goto _08112088;
      case 4:
        v5 = GetMonData((int)v1, 1, 1084);
        v7 = GetMonData((int)v1, 0, v6);
        DecompressPicFromTable_2(
          &gMonFrontPicTable[2 * v2],
          gMonFrontPicCoords[4 * v2],
          gMonFrontPicCoords[4 * v2 + 1],
          0x2000000,
          33611776,
          v2);
        v8 = (int *)sub_80409C8(v2, v5, v7);
        LoadCompressedPalette(*v8, 0x120u, 32);
        v3 = &byte_3001BAC;
        goto _0811208E;
      case 5:
        GetMonSpriteTemplate_803C56C(v2, 3u);
        v2024E9C = &gDummySpriteAffineAnimTable;
        v2014801 = CreateSprite(33705612, 120, 64);
        v9 = 68 * v2014801;
        dword_2020020[v9 / 4] = (int)nullsub_37;
        gSprites[v9 + 5] = gSprites[v9 + 5] & 0xF | 0x20;
_08112088:
        v3 = &byte_3001BAC;
_0811208E:
        ++*v3;
        break;
      case 6:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        SetMainCallback2((int)sub_8112290);
        v4000000 = 4928;
        break;
      default:
        return v11;
    }
  }
  return v11;
}
