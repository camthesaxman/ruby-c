int c2_8011A1C()
{
  __int16 *v0; // r0@1
  __int16 *v1; // r2@1
  signed int v2; // r1@1
  signed int v3; // r1@3
  __int16 *v4; // r2@3
  __int16 *v5; // r0@3
  int v6; // r0@5
  int v7; // r0@5
  int v8; // r0@5
  int *v9; // r1@5
  int v11; // [sp+0h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-4h]@5

  SetHBlankCallback(0);
  SetVBlankCallback(0);
  v11 = 0;
  CpuSet(&v11, 100663296, 83910656);
  v400004C = 0;
  v4000040 = 240;
  v4000044 = 20561;
  v4000048 = 0;
  v400004A = 0;
  word_30042C4 = 240;
  word_3004240 = 20561;
  dp12_8087EA4();
  v0 = &word_3004DE0;
  v1 = &word_3005560;
  v2 = 79;
  do
  {
    *v0 = 240;
    *v1 = 240;
    ++v1;
    ++v0;
    --v2;
  }
  while ( v2 >= 0 );
  v3 = 80;
  v4 = &word_3005600;
  v5 = &word_3004E80;
  do
  {
    *v5 = -240;
    *v4 = -240;
    ++v4;
    ++v5;
    ++v3;
  }
  while ( v3 <= 159 );
  v6 = SetUpWindowConfig((int)&gWindowConfig_81E6C58);
  ResetPaletteFade(v6);
  word_30042A4 = 0;
  word_30042A0 = 0;
  word_30042C0 = 0;
  word_30041B4 = 0;
  word_3004288 = 0;
  word_3004280 = 0;
  word_30041B0 = 0;
  word_30041B8 = 0;
  InitWindowFromConfig((int)&unk_3004210, (int)&gWindowConfig_81E6C58);
  InitWindowFromConfig((int)&unk_30041D0, (int)&gWindowConfig_81E71D0);
  InitWindowFromConfig((int)&unk_3004250, (int)&gWindowConfig_81E71EC);
  sub_800D6D4();
  LoadCompressedPalette(&gUnknown_08D004E0, 0, 64);
  sub_800D74C();
  v7 = ResetSpriteData();
  ResetTasks(v7);
  sub_800E23C();
  v400004A = 55;
  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 4;
  SetVBlankCallback((int)sub_800FCFC);
  v8 = (unsigned __int8)CreateTask(sub_800DE30, 0);
  v9 = &dword_3004B20[10 * v8];
  *((_WORD *)v9 + 5) = 270;
  *((_WORD *)v9 + 6) = 90;
  *((_WORD *)v9 + 9) = 1;
  sub_800FE40(v8);
  SetMainCallback2((int)sub_80101B8);
  v2024D1E = 0;
  return v12;
}
