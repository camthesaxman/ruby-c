signed int sub_80EFF68()
{
  int v0; // r0@17
  signed int result; // r0@20

  if ( v200D160 > 0xDu )
  {
def_80EFF84:
    result = 0;
  }
  else
  {
    switch ( v200D160 )
    {
      case 0u:
        sub_80EEDE8();
        v200D162 = 11;
        break;
      case 1u:
        SetUpWindowConfig((int)&gWindowConfig_81E7080);
        break;
      case 2u:
        MultistepInitMenuWindowBegin();
        break;
      case 3u:
        if ( !MultistepInitMenuWindowContinue() )
          goto _080F0162;
        break;
      case 4u:
        MenuZeroFillScreen();
        break;
      case 5u:
        sub_80F1614();
        break;
      case 6u:
        if ( sub_80F162C(0) << 24 )
          goto _080F0162;
        break;
      case 7u:
        LZ77UnCompVram(&gPokenavConditionView_Gfx, 100683776);
        break;
      case 8u:
        LZ77UnCompVram(&gUnknown_08E9AC4C, 100724736);
        LoadPalette((int)&gPokenavConditionMenu2_Pal, 32, 32);
        break;
      case 9u:
        if ( v20076AA == 1 )
          sub_8095C8C(100724736, 0, 5, (int)&gUnknown_083E01AC, 0, 0, 9, 4u, 9u);
        break;
      case 0xAu:
        LZ77UnCompVram(&gUnknown_08E9FEB4, 100710400);
        break;
      case 0xBu:
        LoadPalette((int)&gUnknown_083E0254, 48, 32);
        LoadPalette((int)&gUnknownPalette_81E6692, 176, 32);
        LoadPalette((int)&unk_8E8A1C2, 177, 2);
        LoadPalette((int)&unk_8E8A1D0, 181, 2);
        v0 = LoadPalette((int)&unk_8E8A1DE, 191, 2);
        sub_80F01A4(v0);
        break;
      case 0xCu:
        sub_80F01E0(v2008FE9 & 0xFFFF);
        break;
      case 0xDu:
        v400000E = 7683;
        v400000C = 5890;
        v4000050 = 2116;
        v4000052 = 1035;
        break;
      default:
        goto def_80EFF84;
    }
    ++v200D160;
_080F0162:
    result = 1;
  }
  return result;
}
