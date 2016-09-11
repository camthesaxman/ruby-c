int sub_810CC80()
{
  int v0; // r0@1
  __int16 v2; // [sp+0h] [bp-10h]@1
  int v3; // [sp+4h] [bp-Ch]@1
  int v4; // [sp+Ch] [bp-4h]@3

  SetVBlankCallback(0);
  v4000000 = 0;
  v400000C = 0;
  v400000A = 0;
  v4000008 = 0;
  v4000018 = 0;
  v400001A = 0;
  v4000014 = 0;
  v4000016 = 0;
  v4000010 = 0;
  v4000012 = 0;
  v3 = 0;
  v2 = 0;
  v40000D4 = &v2;
  v40000D8 = 83886082;
  v40000DC = -2130705921;
  ResetPaletteFade();
  ResetTasks();
  ResetSpriteData();
  v4000200 |= 1u;
  SetVBlankCallback((int)sub_810CC6C);
  v0 = SetMainCallback2((int)sub_810CC54);
  if ( !(sub_810CD5C(v0) << 24) )
    SetMainCallback2(dword_3001778);
  return v4;
}
