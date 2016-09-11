int sub_8145D88()
{
  int v0; // r0@1
  __int16 v2; // [sp+4h] [bp-1Ch]@1
  int v3; // [sp+8h] [bp-18h]@1
  int v4; // [sp+1Ch] [bp-4h]@1

  SetVBlankCallback(0);
  v4000000 = 0;
  v400000E = 0;
  v400000C = 0;
  v400000A = 0;
  v4000008 = 0;
  v400001C = 0;
  v400001E = 0;
  v4000018 = 0;
  v400001A = 0;
  v4000014 = 0;
  v4000016 = 0;
  v4000010 = 0;
  v4000012 = 0;
  v3 = 0;
  v2 = 0;
  v40000D4 = &v2;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  LZ77UnCompVram(&gUnknown_0840D288, 100663296);
  LZ77UnCompVram(&gUnknown_0840CB4C, 100675584);
  remove_some_task();
  ResetTasks();
  ResetSpriteData();
  ResetPaletteFade();
  FreeAllSpritePalettes();
  LoadPalette((int)&gUnknown_0840CB0C, 0, 64);
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  v0 = InitMenuWindow();
  pokedex_diploma_something(v0);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v4000200 |= 1u;
  v4000004 |= 8u;
  SetVBlankCallback((int)sub_8145D74);
  SetMainCallback2((int)sub_8145EFC);
  v4000050 = 0;
  v4000052 = 0;
  v4000054 = 0;
  v400000E = 17923;
  v4000000 = 6464;
  CreateTask((int)sub_8145F14, 0);
  return v4;
}
