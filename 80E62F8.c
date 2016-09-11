int sub_80E62F8()
{
  int v0; // r0@3
  int v1; // r0@8
  int v3; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC > 8u )
  {
def_80E6310:
    v4000000 = 0;
    SetVBlankCallback(0);
    ResetPaletteFade();
    ResetSpriteData();
    dp12_8087EA4();
    v0 = remove_some_task();
    sub_80EAD08(v0);
    sub_80895F8(67108894, -1570766847, 1);
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_80E6310;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E6DA8);
        break;
      case 2:
        InitMenuWindow();
        InitMenuWindow();
        MenuZeroFillScreen();
        break;
      case 3:
        sub_80E6424();
        break;
      case 4:
        sub_80E8DD8();
        break;
      case 5:
        v1 = sub_80E8218();
        sub_80E8CEC(v1);
        break;
      case 6:
        sub_80E69F8();
        sub_80E682C(sub_80E6AA8);
        SetVBlankCallback((int)sub_80E6A6C);
        break;
      case 7:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        break;
      case 8:
        v4000000 = 8000;
        SetMainCallback2((int)sub_80E6A88);
        FlagSet(0x805u);
        break;
    }
  }
  ++byte_3001BAC;
  return v3;
}
