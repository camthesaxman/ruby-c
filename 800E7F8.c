int sub_800E7F8()
{
  __int16 *v0; // r0@1
  __int16 *v1; // r2@1
  signed int v2; // r1@1
  signed int v3; // r1@3
  __int16 *v4; // r2@3
  __int16 *v5; // r0@3
  int v6; // r0@5
  int v7; // r0@5
  int v8; // r0@9
  void *v9; // r4@10
  int v11; // [sp+0h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-4h]@12

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
  sub_80895F8(67108892, -1570766847, 1, 65296);
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
  byte_300428C = sub_8081D3C();
  InitWindowFromConfig((int)&unk_3004210, (int)&gWindowConfig_81E6C58);
  InitWindowFromConfig((int)&unk_30041D0, (int)&gWindowConfig_81E71D0);
  InitWindowFromConfig((int)&unk_3004250, (int)&gWindowConfig_81E71EC);
  sub_800D6D4();
  sub_800DAB8();
  v7 = ResetSpriteData();
  ResetTasks(v7);
  sub_800E23C();
  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 4;
  SetVBlankCallback((int)sub_800FCFC);
  sub_800B884();
  if ( v20239F8 & 0x40 )
    SetMainCallback2((int)sub_800F298);
  else
    SetMainCallback2((int)sub_800EC9C);
  if ( !(v20239F8 & 2) )
  {
    v8 = sub_800F8E8(&unk_30045C0, v202FF5E);
    sub_8040C38(v8);
  }
  byte_3001BAD |= 2u;
  v9 = &unk_3004360;
  do
  {
    sub_803FCD4(v9, 3);
    v9 = (char *)v9 + 100;
  }
  while ( (signed int)v9 <= (signed int)&unk_3004554 );
  v2024D1E = 0;
  return v12;
}
