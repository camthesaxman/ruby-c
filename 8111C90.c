int sub_8111C90()
{
  int *v0; // r0@1
  unsigned int *v1; // r4@1
  signed int v2; // r6@1
  int v3; // r10@1
  int v4; // r2@1
  int v5; // r8@1
  int *v6; // r0@1
  unsigned __int8 v7; // r0@1
  unsigned int v8; // r1@1
  int v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+24h] [bp-4h]@1

  v0 = &dword_3004B20[10 * v2014802];
  v1 = &dword_3004360[25 * *((_WORD *)v0 + 16)];
  v2 = *((_WORD *)v0 + 8);
  v3 = GetMonData((int)v1, 1, *((_WORD *)v0 + 16));
  v5 = GetMonData((int)v1, 0, v4);
  SetHBlankCallback(0);
  SetVBlankCallback(0);
  v10 = 0;
  CpuSet(&v10, 100663296, 83910656);
  v400004C = 0;
  v4000040 = 0;
  v4000044 = 0;
  v4000042 = 0;
  v4000046 = 0;
  v4000048 = 0;
  v400004A = 0;
  SetUpWindowConfig((int)&gWindowConfig_81E6C58);
  ResetPaletteFade();
  word_30042A4 = 0;
  word_30042A0 = 0;
  word_30042C0 = 0;
  word_30041B4 = 0;
  word_3004288 = 0;
  word_3004280 = 0;
  word_30041B0 = 256;
  word_30041B8 = 0;
  InitWindowFromConfig((int)&unk_3004210, (int)&gWindowConfig_81E6C58);
  byte_300428C = 9;
  sub_800D6D4();
  sub_800DAB8();
  ResetSpriteData();
  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 4;
  DecompressPicFromTable_2(
    &gMonFrontPicTable[2 * v2],
    gMonFrontPicCoords[4 * v2],
    gMonFrontPicCoords[4 * v2 + 1],
    0x2000000,
    33611776,
    v2);
  v6 = (int *)sub_80409C8(v2, v3, v5);
  LoadCompressedPalette(*v6, 0x120u, 32);
  GetMonSpriteTemplate_803C56C(v2, 3u);
  v2024E9C = &gDummySpriteAffineAnimTable;
  v7 = CreateSprite(33705612, 120, 64);
  v2014801 = v7;
  v8 = 68 * v7;
  dword_2020020[v8 / 4] = (int)nullsub_37;
  gSprites[v8 + 5] = gSprites[v8 + 5] & 0xF | 0x20;
  v4000000 = 8000;
  SetHBlankCallback((int)nullsub_73);
  SetVBlankCallback((int)sub_8114FD4);
  SetMainCallback2((int)sub_8112270);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  return v11;
}
