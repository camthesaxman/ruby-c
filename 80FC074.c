int sub_80FC074()
{
  _BYTE *v0; // r0@6
  int v2; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 9u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        v4000000 = 0;
        v4000010 = 0;
        v4000012 = 0;
        v4000014 = 0;
        v4000016 = 0;
        v400001A = 0;
        v4000018 = 0;
        v400001C = 0;
        v400001E = 0;
        ResetPaletteFade();
        ResetSpriteData();
        FreeSpriteTileRanges();
        FreeAllSpritePalettes();
        goto _080FC1E6;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E7224);
        goto _080FC1E6;
      case 2:
        InitMenuWindow();
        MenuZeroFillScreen();
        goto _080FC1E6;
      case 3:
        sub_80FA8EC(33554440, 0);
        sub_80FBB3C(0, 0);
        sub_80FBCF0(1, 1);
        v2000006 = v200001C;
        v0 = StringFill((_BYTE *)0x2000A48, 0, 0xCu);
        sub_80FC254(v0);
        goto _080FC1E6;
      case 4:
        LZ77UnCompVram(&gUnknown_083E773C, 100712448);
        goto _080FC1E6;
      case 5:
        LZ77UnCompVram(&gUnknown_083E7774, 100724736);
        goto _080FC1E6;
      case 6:
        LoadPalette((int)&gUnknown_083E771C, 16, 32);
        sub_80729D8((int)&OtherText_FlyToWhere, 1, 144, 1u);
        goto _080FC1E6;
      case 7:
        sub_80FC31C();
        goto _080FC1E6;
      case 8:
        BlendPalettes(0xFFFFFFFF, 0x10u, 0);
        SetVBlankCallback((int)sub_80FC214);
        goto _080FC1E6;
      case 9:
        v4000050 = 0;
        v400000A = 7693;
        v4000000 = 5953;
        sub_80FC244(sub_80FC5B4);
        SetMainCallback2((int)sub_80FC228);
_080FC1E6:
        ++byte_3001BAC;
        break;
      default:
        return v2;
    }
  }
  return v2;
}
