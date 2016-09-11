signed int sub_80F1080()
{
  if ( v200D160 <= 0xEu )
  {
    switch ( v200D160 )
    {
      case 0u:
        sub_80EEDE8();
        v200D162 = 11;
        goto _080F1218;
      case 1u:
        SetUpWindowConfig((int)&gWindowConfig_81E70B8);
        goto _080F1218;
      case 2u:
        MultistepInitMenuWindowBegin();
        goto _080F1218;
      case 3u:
        if ( !MultistepInitMenuWindowContinue() )
          return 1;
        goto _080F1218;
      case 4u:
        MenuZeroFillScreen();
        goto _080F1218;
      case 5u:
        sub_80F1614();
        goto _080F1218;
      case 6u:
        if ( sub_80F162C(1) << 24 )
          return 1;
        goto _080F1218;
      case 7u:
        LZ77UnCompWram(&gUnknown_08E9FBA0, 33592140);
        goto _080F1218;
      case 8u:
        sub_80F1238();
        goto _080F1218;
      case 9u:
        sub_80F13FC();
        goto _080F1218;
      case 0xAu:
        LZ77UnCompVram(&gPokenavRibbonView_Gfx, 100696064);
        goto _080F1218;
      case 0xBu:
        LZ77UnCompVram(&gUnknown_083E040C, 100696576);
        goto _080F1218;
      case 0xCu:
        LoadPalette((int)&gPokenavRibbonView_Pal, 32, 32);
        LoadPalette((int)&gUnknown_083E03A8, 240, 32);
        LoadPalette((int)&gUnknown_083E3C60, 48, 160);
        LoadPalette((int)&gUnknownPalette_81E6692, 176, 32);
        LoadPalette((int)&unk_83E03C6, 191, 2);
        goto _080F1218;
      case 0xDu:
        sub_80F1438();
_080F1218:
        ++v200D160;
        return 1;
      case 0xEu:
        v400000C = 7682;
        v400000E = 5899;
        v4000050 = 0;
        ++v200D160;
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
