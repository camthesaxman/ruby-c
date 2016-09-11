signed int sub_8148970()
{
  unsigned int v0; // r1@4
  unsigned int v1; // r1@6
  __int16 v3; // [sp+4h] [bp-10h]@4
  int v4; // [sp+8h] [bp-Ch]@4

  if ( byte_3001BAC && byte_3001BAC == 1 )
  {
    UpdatePaletteFade();
    if ( !(v202F38F & 0x80) )
    {
      SetMainCallback2((int)sub_8148954);
      return 1;
    }
  }
  else
  {
    SetVBlankCallback(0);
    v4000000 = 0;
    v4000010 = 0;
    v4000012 = 0;
    v400001C = 0;
    v400001E = 0;
    v4000040 = 0;
    v4000044 = 0;
    v4000048 = 0;
    v400004A = 0;
    v4000050 = 0;
    v4000052 = 0;
    v4000054 = 0;
    v4 = 0;
    v3 = 0;
    v40000D4 = &v3;
    v40000D8 = 83886082;
    v40000DC = -2130705921;
    ResetPaletteFade();
    v202EAC8 = 0x7FFF;
    v202EEC8 = 0x7FFF;
    v202EACA = 14661;
    v202EECA = 14661;
    v0 = 0;
    do
    {
      *(_WORD *)(2 * v0 + 0x6000020) = 4369;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0xF );
    v1 = 0;
    do
    {
      *(_WORD *)(2 * v1 + 0x6003800) = 1;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0x4FF );
    ResetTasks();
    ResetSpriteData();
    SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
    InitMenuWindow();
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, -1);
    v4000200 |= 1u;
    v4000004 |= 8u;
    SetVBlankCallback((int)sub_8148964);
    v400000E = 1795;
    v4000000 = 2304;
    byte_3001BAC = 1;
  }
  return 0;
}
