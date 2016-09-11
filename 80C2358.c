int sub_80C2358()
{
  int v0; // r0@1
  int v1; // r0@1
  unsigned int v2; // r0@1
  int v4; // [sp+Ch] [bp-4h]@0

  v202F390 |= 0x80u;
  SetVBlankCallback(0);
  sub_80C2020();
  dp12_8087EA4();
  ResetPaletteFade();
  ResetSpriteData();
  ResetTasks();
  FreeAllSpritePalettes();
  v0 = sub_80C2144();
  sub_80C310C(v0);
  sub_80C30D4(0, 1);
  sub_80C2340();
  memset(33652736, 0, 24);
  v1 = memset(33652760, 0, 80);
  sub_80C33DC(v1);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v202F390 &= 0x7Fu;
  v2018002 = CreateTask((int)sub_80C24F4, 5);
  SetMainCallback2((int)sub_80C2430);
  word_3004200 = 240;
  word_3004244 = -32608;
  v2 = CreateTask((int)sub_80C2F28, 20);
  sub_80C3F00(v2);
  sub_8075474(0x1BEu);
  SetVBlankCallback((int)sub_80C2448);
  return v4;
}
