signed int sub_80F8A28()
{
  unsigned __int16 v0; // r4@23
  char v1; // r0@26
  __int16 v3; // [sp+4h] [bp-10h]@4
  signed __int16 v4; // [sp+6h] [bp-Eh]@14

  if ( (unsigned __int8)byte_3001BAC <= 0x12u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        remove_some_task();
        v4000000 = 0;
        goto _080F8D30;
      case 1:
        v3 = 0;
        CpuSet(&v3, 117440512, 16777728);
        goto _080F8D30;
      case 2:
        ResetPaletteFade();
        goto _080F8D30;
      case 3:
        ResetTasks();
        goto _080F8D30;
      case 4:
        ResetSpriteData();
        goto _080F8D30;
      case 5:
        FreeAllSpritePalettes();
        v4000010 = 0;
        v4000012 = 0;
        v4000014 = 0;
        v4000016 = 0;
        v400001A = 0;
        v4000018 = 0;
        v400001C = 0;
        v400001E = 0;
        v4000050 = 0;
        v4000052 = 0;
        goto _080F8D30;
      case 6:
        SetUpWindowConfig((int)&gWindowConfig_81E6DFC);
        goto _080F8D30;
      case 7:
        MultistepInitMenuWindowBegin();
        goto _080F8D30;
      case 8:
        if ( !MultistepInitMenuWindowContinue() )
          return 0;
        goto _080F8D30;
      case 9:
        MenuZeroFillScreen();
        goto _080F8D30;
      case 0xA:
        v4 = 1;
        CpuSet(&v4, 100681728, 16778240);
        goto _080F8D30;
      case 0xB:
        LoadPalette((int)*(&gMailGraphicsTable + 5 * v20000FA), 0, 32);
        goto _080F8D30;
      case 0xC:
        LZ77UnCompVram(*(&off_83E563C + 5 * v20000FA), 100679680);
        goto _080F8D30;
      case 0xD:
        LZ77UnCompVram(*(&off_83E5638 + 5 * v20000FA), 100663296);
        v202ECAA = *((_WORD *)&gMailGraphicsTable + 10 * v20000FA + 8);
        v202ECB8 = *((_WORD *)&gMailGraphicsTable + 10 * v20000FA + 9);
        v202EADC = gUnknown_083E562C[2 * v2024EAC];
        v202EADE = gUnknown_083E562C[2 * v2024EAC + 1];
        goto _080F8D30;
      case 0xE:
        if ( v20000F8 )
          sub_80F8DA0();
        goto _080F8D30;
      case 0xF:
        if ( v20000F8 )
          sub_80F8E80();
        SetVBlankCallback((int)sub_80F8F18);
        v202F390 |= 0x80u;
        goto _080F8D30;
      case 0x10:
        v0 = sub_809D4A8(*(_WORD *)(v20000F4 + 30));
        if ( v20000FB == 1 )
        {
          sub_809D580(v0);
          v1 = sub_809D3A4(v0, (int)SpriteCallbackDummy, 96, 128, 0);
        }
        else
        {
          if ( v20000FB != 2 )
            goto _080F8D30;
          sub_809D580(v0);
          v1 = sub_809D3A4(v0, (int)SpriteCallbackDummy, 40, 128, 0);
        }
        v20000FC = v1;
_080F8D30:
        ++byte_3001BAC;
        break;
      case 0x11:
        if ( sub_8055870() == 1 )
          return 0;
        goto _080F8D30;
      case 0x12:
        v4000008 = -24824;
        v400000A = 2049;
        v400000C = 2306;
        v4000050 = 0;
        v4000000 = 5952;
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v202F390 &= 0x7Fu;
        v20000F0 = sub_80F8F58;
        return 1;
      default:
        return 0;
    }
  }
  return 0;
}
