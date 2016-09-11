int __fastcall evolution_cutscene(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  signed int v4; // r10@1
  int v5; // r2@1
  signed int v6; // r6@1
  int v7; // r2@1
  int v8; // r2@1
  int *v9; // r0@1
  unsigned __int8 v10; // r0@1
  int v11; // r1@1
  char *v12; // r1@1
  _BYTE *v13; // r2@1
  int v14; // r1@1
  int *v15; // r0@1
  unsigned __int8 v16; // r0@1
  int v17; // r1@1
  char *v18; // r1@1
  unsigned __int8 v19; // r0@1
  int *v20; // r0@1
  int v21; // r0@1
  char v23; // [sp+8h] [bp-50h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@1
  int v25; // [sp+20h] [bp-38h]@1
  int v26; // [sp+24h] [bp-34h]@1
  int v27; // [sp+28h] [bp-30h]@1
  int v28; // [sp+2Ch] [bp-2Ch]@1
  int v29; // [sp+30h] [bp-28h]@1
  int v30; // [sp+34h] [bp-24h]@1
  int v31; // [sp+54h] [bp-4h]@1

  v25 = a1;
  v4 = a2;
  v26 = a3;
  v27 = a4;
  SetHBlankCallback(0);
  SetVBlankCallback(0);
  v24 = 0;
  CpuSet(&v24, 100663296, 83910656);
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
  remove_some_task();
  ResetTasks();
  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 4;
  GetMonData(v25, 2, (int)&v23);
  StringCopy10((int)&gStringVar1, (int)&v23);
  StringCopy(gStringVar2, &gSpeciesNames[11 * v4]);
  v6 = (unsigned __int16)GetMonData(v25, 11, v5);
  v28 = GetMonData(v25, 1, v7);
  v29 = GetMonData(v25, 0, v8);
  DecompressPicFromTable_2(
    &gMonFrontPicTable[2 * v6],
    gMonFrontPicCoords[4 * v6],
    gMonFrontPicCoords[4 * v6 + 1],
    0x2000000,
    33595392,
    v6);
  v9 = (int *)sub_80409C8(v6, v28, v29);
  LoadCompressedPalette(*v9, 0x110u, 32);
  GetMonSpriteTemplate_803C56C(v6, 1u);
  v2024E9C = &gDummySpriteAffineAnimTable;
  v10 = CreateSprite(33705612, 120, 64);
  v2014800 = v10;
  v11 = 17 * v10;
  dword_2020020[v11] = (int)nullsub_37;
  v12 = &gSprites[v11 * 4];
  v12[5] = v12[5] & 0xF | 0x10;
  v12[62] |= 4u;
  v13 = &gMonFrontPicCoords[4 * v4];
  v14 = *v13;
  v30 = v13[1];
  DecompressPicFromTable_2(&gMonFrontPicTable[2 * v4], v14, v30, 0x2000000, 33611776, v4);
  v15 = (int *)sub_80409C8(v4, v28, v29);
  LoadCompressedPalette(*v15, 0x120u, 32);
  GetMonSpriteTemplate_803C56C(v4, 3u);
  v2024E9C = &gDummySpriteAffineAnimTable;
  v16 = CreateSprite(33705612, 120, 64);
  v2014801 = v16;
  v17 = 17 * v16;
  dword_2020020[v17] = (int)nullsub_37;
  v18 = &gSprites[v17 * 4];
  v18[5] = v18[5] & 0xF | 0x20;
  v18[62] |= 4u;
  sub_8149954();
  v19 = CreateTask((int)sub_811240C, 0);
  v2014802 = v19;
  v20 = &dword_3004B20[10 * v19];
  *((_WORD *)v20 + 4) = 0;
  *((_WORD *)v20 + 7) = v6;
  *((_WORD *)v20 + 8) = v4;
  *((_WORD *)v20 + 5) = v25;
  *((_WORD *)v20 + 6) = HIWORD(v25);
  *((_WORD *)v20 + 9) = v26;
  *((_WORD *)v20 + 10) = 1;
  *((_WORD *)v20 + 15) = 0;
  *((_WORD *)v20 + 16) = v27;
  memcpy(33591296, (const char *)0x202EB08, 96);
  v4000000 = 8000;
  SetHBlankCallback((int)nullsub_73);
  v21 = SetVBlankCallback((int)sub_8114FD4);
  m4aMPlayAllStop(v21);
  SetMainCallback2((int)sub_8112270);
  return v31;
}
