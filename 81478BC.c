signed int sub_81478BC()
{
  int v0; // r0@3
  char *v1; // r1@3
  signed int result; // r0@20

  if ( (unsigned __int8)byte_3001BAC > 0xDu )
  {
def_81478D6:
    result = 0;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        sub_80F9438();
        v0 = sub_80F9368();
        sub_8147B04(v0);
        v1 = &byte_3001BAC;
        goto _08147A4A;
      case 1:
        ResetPaletteFade();
        v202F390 |= 0x80u;
        goto _08147A44;
      case 2:
        ResetSpriteData();
        v1 = &byte_3001BAC;
        goto _08147A4A;
      case 3:
        FreeAllSpritePalettes();
        goto _08147A44;
      case 4:
        SetUpWindowConfig((int)&gWindowConfig_81E6E50);
        v1 = &byte_3001BAC;
        goto _08147A4A;
      case 5:
        MultistepInitMenuWindowBegin();
        goto _08147A44;
      case 6:
        if ( !MultistepInitMenuWindowContinue() )
          goto def_81478D6;
        v201FFFF = 0;
        v1 = &byte_3001BAC;
        goto _08147A4A;
      case 7:
        if ( !(sub_8147B20(&dword_3004360[25 * v2039310]) << 24) )
          goto def_81478D6;
        goto _08147A44;
      case 8:
        v201FFFD = sub_81480B4();
        goto _08147A44;
      case 9:
        v201FFFE = sub_8147F84(&dword_3004360[25 * v2039310]);
        goto _08147A44;
      case 0xA:
        MenuDrawTextWindow(0, 0xEu);
        v1 = &byte_3001BAC;
        goto _08147A4A;
      case 0xB:
        if ( sub_8055870() == 1 )
          goto def_81478D6;
_08147A44:
        v1 = &byte_3001BAC;
_08147A4A:
        ++*v1;
        goto def_81478D6;
      case 0xC:
        v4000200 |= 1u;
        v4000004 |= 8u;
        SetVBlankCallback((int)sub_81478A8);
        ++byte_3001BAC;
        break;
      case 0xD:
        break;
      default:
        goto def_81478D6;
    }
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
    v202F390 &= 0x7Fu;
    SetMainCallback2((int)sub_8147890);
    result = 1;
  }
  return result;
}
