int sub_806AAD8()
{
  signed int v0; // r2@1
  unsigned int v1; // r3@1
  int v2; // r0@3
  int v3; // r0@3
  int v4; // r0@3
  int v5; // r0@3
  __int16 v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+14h] [bp-4h]@3

  v4000000 = 0;
  SetVBlankCallback(0);
  v7 = 0;
  v40000D4 = &v7;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  v0 = 100663296;
  v1 = 98304;
  do
  {
    v7 = 0;
    v40000D4 = &v7;
    v40000D8 = v0;
    v40000DC = -2130704384;
    v0 += 4096;
    v1 -= 4096;
  }
  while ( v1 > 0x1000 );
  v7 = 0;
  v40000D4 = &v7;
  v40000D8 = v0;
  v40000DC = (v1 >> 1) | 0x81000000;
  ResetOamRange(0, 0x80u);
  v2 = LoadOam();
  v3 = remove_some_task(v2);
  dp12_8087EA4(v3);
  v4 = ResetSpriteData();
  v5 = ResetTasks(v4);
  ResetPaletteFade(v5);
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  InitMenuWindow(&gWindowConfig_81E6CE4);
  v4000000 = 4352;
  SetVBlankCallback((int)sub_806ABC8);
  SetMainCallback2((int)sub_806ABB0);
  CreateTask(sub_806ACCC, 80);
  return v8;
}
