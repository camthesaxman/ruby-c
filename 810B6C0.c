signed int sub_810B6C0()
{
  char *v0; // r1@3
  int v1; // r0@22
  int v2; // r0@23
  signed int result; // r0@28

  if ( (unsigned __int8)byte_3001BAC > 0x12u )
  {
def_810B6DA:
    result = 0;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        sub_80F9438();
        sub_80F9368();
        v400000C = 3850;
        v4000050 = 0;
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 1:
        remove_some_task();
        goto _0810B91C;
      case 2:
        ResetPaletteFade();
        v202F390 |= 0x80u;
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 3:
        ResetSpriteData();
        goto _0810B91C;
      case 4:
        if ( v2039244 != 2 )
          ResetTasks();
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 5:
        SetUpWindowConfig((int)&gWindowConfig_81E6E34);
        goto _0810B91C;
      case 6:
        SetUpWindowConfig((int)&gWindowConfig_81E6E50);
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 7:
        MultistepInitMenuWindowBegin();
        goto _0810B91C;
      case 8:
        if ( !MultistepInitMenuWindowContinue() )
          goto def_810B6DA;
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 9:
        MultistepInitMenuWindowBegin();
        goto _0810B91C;
      case 0xA:
        if ( !MultistepInitMenuWindowContinue() )
          goto def_810B6DA;
        v201FFFF = 0;
        goto _0810B91C;
      case 0xB:
        if ( !(sub_810B998() << 24) )
          goto def_810B6DA;
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 0xC:
        sub_80F944C();
        InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
        sub_80F953C(0, 176, 8);
        sub_80F953C(1u, 176, 152);
        goto _0810B91C;
      case 0xD:
        v201FFFE = sub_810BA50(56, 64, 0);
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 0xE:
        v1 = sub_810BC98();
        sub_810BD08(v1);
        goto _0810B91C;
      case 0xF:
        v2 = sub_810BB0C();
        sub_810BB30(v2);
        sub_810BC84(v2039249);
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 0x10:
        v4000200 |= 1u;
        v4000004 |= 8u;
        SetVBlankCallback((int)sub_810B68C);
        v4000000 = 5952;
        v0 = &byte_3001BAC;
        goto _0810B922;
      case 0x11:
        if ( sub_8055870() == 1 )
          goto def_810B6DA;
_0810B91C:
        v0 = &byte_3001BAC;
_0810B922:
        ++*v0;
        goto def_810B6DA;
      case 0x12:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v202F390 &= 0x7Fu;
        SetMainCallback2((int)sub_810B674);
        result = 1;
        break;
      default:
        goto def_810B6DA;
    }
  }
  return result;
}
