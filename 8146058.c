signed int sub_8146058()
{
  int v0; // r0@3
  char *v1; // r1@4
  signed int result; // r0@19

  if ( (unsigned __int8)byte_3001BAC > 0xCu )
  {
def_8146072:
    result = 0;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        sub_80F9438();
        v0 = sub_80F9368();
        sub_8146288(v0);
        v4000050 = 0;
        goto _0814620C;
      case 1:
        ResetPaletteFade();
        v202F390 |= 0x80u;
        v1 = &byte_3001BAC;
        goto _08146212;
      case 2:
        ResetSpriteData();
        goto _0814620C;
      case 3:
        SetUpWindowConfig((int)&gWindowConfig_81E6E18);
        v1 = &byte_3001BAC;
        goto _08146212;
      case 4:
        MultistepInitMenuWindowBegin();
        goto _0814620C;
      case 5:
        if ( !MultistepInitMenuWindowContinue() )
          goto def_8146072;
        v201FFFF = 0;
        goto _0814620C;
      case 6:
        if ( !(sub_81462B8() << 24) )
          goto def_8146072;
        v201FFFF = 0;
        goto _0814620C;
      case 7:
        sub_81464E4();
        v1 = &byte_3001BAC;
        goto _08146212;
      case 8:
        v203932C = sub_80A7D8C(v203855E + 123, 56, 64);
        goto _0814620C;
      case 9:
        sub_8146600((v203855E + 123) & 0xFF);
        v1 = &byte_3001BAC;
        goto _08146212;
      case 0xA:
        v4000200 |= 1u;
        v4000004 |= 8u;
        SetVBlankCallback((int)sub_814602C);
        v4000000 = 8000;
        v1 = &byte_3001BAC;
        goto _08146212;
      case 0xB:
        if ( sub_8055870() == 1 )
          goto def_8146072;
_0814620C:
        v1 = &byte_3001BAC;
_08146212:
        ++*v1;
        goto def_8146072;
      case 0xC:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v202F390 &= 0x7Fu;
        SetMainCallback2((int)sub_8146014);
        result = 1;
        break;
      default:
        goto def_8146072;
    }
  }
  return result;
}
