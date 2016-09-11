int BuyMenuDrawGraphics()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  unsigned int v3; // r0@1
  int v5; // [sp+4h] [bp-18h]@1
  int v6; // [sp+18h] [bp-4h]@1

  sub_80F9438();
  remove_some_task();
  v4000014 = 0;
  v4000016 = 0;
  v4000018 = 0;
  v400001A = 0;
  v400001C = 0;
  v400001E = 0;
  v202F390 |= 0x80u;
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = 117440512;
  v40000DC = -2063597312;
  LZDecompressVram((int)&gBuyMenuFrame_Gfx, 100695040);
  sub_800D238();
  LoadCompressedPalette((int)&gMenuMoneyPal, 0xC0u, 32);
  FreeAllSpritePalettes();
  ResetPaletteFade();
  ResetSpriteData();
  ResetTasks();
  SetUpWindowConfig((int)&gWindowConfig_81E6DFC);
  v0 = InitMenuWindow();
  BuyMenuDrawMapGraphics(v0);
  byte_3000711 = 0;
  byte_3000713 = 0;
  MenuZeroFillWindowRect(0, 0, 0x20u, 0x20u);
  sub_80B7C14(v2025BC4, 0, 0);
  v1 = sub_80B3764(0, 7);
  v2 = sub_80B37EC(v1);
  sub_80B3270(v2);
  v3 = CreateTask((int)sub_80B40E8, 8);
  sub_80B3240(v3);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v202F390 &= 0x7Fu;
  SetVBlankCallback((int)sub_80B30AC);
  SetMainCallback2((int)sub_80B3094);
  return v6;
}
