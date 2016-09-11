signed int sub_80F02A0()
{
  char v0; // r2@3
  __int16 *v1; // r0@14
  int v2; // r1@14
  __int16 v4; // [sp+14h] [bp-18h]@23

  if ( v2000306 <= 0xEu )
  {
    switch ( v2000306 )
    {
      case 0u:
        sub_80EEDE8();
        v0 = 0;
        if ( v20087CA == 1 )
          v0 = 1;
        v20087C8 = v0;
        v200D162 = 11;
        goto _080F0618;
      case 1u:
        SetUpWindowConfig((int)&gWindowConfig_81E70D4);
        goto _080F0618;
      case 2u:
        MultistepInitMenuWindowBegin();
        goto _080F0618;
      case 3u:
        if ( !MultistepInitMenuWindowContinue() )
          return 1;
        goto _080F0618;
      case 4u:
        MenuZeroFillScreen();
        goto _080F0618;
      case 5u:
        LZ77UnCompVram(&gUnknown_08E9FC64, 100722688);
        goto _080F0618;
      case 6u:
        LZ77UnCompVram(&gPokenavConditionSearch2_Gfx, 100696064);
        goto _080F0618;
      case 7u:
        LoadPalette((int)&gUnknown_083E02B4, 176, 32);
        LoadPalette((int)&gUnknown_083E02B4, 240, 32);
        LoadPalette((int)&gUnknown_083E0334, 64, 32);
        if ( v20087CA )
        {
          if ( v20087CA == 1 )
          {
            LoadPalette((int)&gUnknown_083E0274, 48, 32);
            v202EAC8 = 20095;
            LoadPalette((int)&gUnknownPalette_81E6692, 176, 32);
            LoadPalette((int)&unk_83E02B6, 177, 2);
            LoadPalette((int)&unk_83E02C4, 181, 2);
            v1 = &word_83E027E;
            v2 = 191;
          }
          else
          {
            LoadPalette((int)&gUnknown_08E9F9E8, 48, 32);
            v202EAC8 = word_8E9F9F2;
            LoadPalette((int)&gUnknown_083E0314, 80, 32);
            LoadPalette((int)&unk_83E02B6, 177, 2);
            LoadPalette((int)&unk_83E02C4, 181, 2);
            LoadPalette((int)&word_8E9F9F2, 191, 2);
            v1 = &word_8E9F9F2;
            v2 = 95;
          }
        }
        else
        {
          LoadPalette((int)&gPokenavConditionSearch2_Pal, 48, 32);
          v202EAC8 = 29356;
          LoadPalette((int)&gUnknownPalette_81E6692, 176, 32);
          LoadPalette((int)&unk_83E02B6, 177, 2);
          LoadPalette((int)&unk_83E02C4, 181, 2);
          v1 = &word_83E029E;
          v2 = 191;
        }
        LoadPalette((int)v1, v2, 2);
        goto _080F0618;
      case 8u:
        if ( v20087CA == 2 )
        {
          sub_8095C8C(100722688, 0, 4, (int)&gUnknown_08E9FE54, 0, 0, 12, 0xAu, 0xCu);
          sub_8095C8C(100722688, 0, 8, (int)&gUnknown_08E9FD64, 0, 0, 12, 0xAu, 0xCu);
        }
        else
        {
          sub_8095C8C(100722688, 0, 5, (int)&gUnknown_08E9FD1C, 0, 0, 9, 4u, 9u);
        }
        goto _080F0618;
      case 9u:
        LZ77UnCompVram(&gUnknown_083E0354, 100683776);
        goto _080F0618;
      case 0xAu:
        v4 = 0;
        v40000D4 = &v4;
        v40000D8 = 100726784;
        v40000DC = -2130705408;
        goto _080F0618;
      case 0xBu:
        sub_80F0900();
        goto _080F0618;
      case 0xCu:
        if ( sub_80F0944() << 24 )
          return 1;
        goto _080F0618;
      case 0xDu:
        if ( v20087CA == 2 )
        {
          sub_80F081C(0);
          sub_80F0FFC(v200876E);
        }
        else
        {
          ShowMapNamePopUpWindow(v20087CA);
        }
_080F0618:
        ++v2000306;
        return 1;
      case 0xEu:
        v400000C = 7434;
        v400000E = 7683;
        v4000008 = 7937;
        v400001E = 248;
        v2008776 = 248;
        v2008778 = 0;
        v4000050 = 0;
        ++v200D160;
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
