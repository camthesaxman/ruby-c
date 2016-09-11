signed int sub_80F26BC()
{
  void *v0; // r0@3
  signed int v1; // r2@3
  signed int result; // r0@12

  if ( v2000306 > 7u )
  {
def_80F26D6:
    result = 0;
  }
  else
  {
    switch ( v2000306 )
    {
      case 0u:
        v0 = &gPokenavMainMenu_Gfx;
        v1 = 15256;
        goto _080F279C;
      case 1u:
        v0 = &gPokenavConditionMenuHeader_Gfx;
        v1 = 16792;
        goto _080F279C;
      case 2u:
        v0 = &gPokenavRibbonsHeader_Gfx;
        v1 = 19864;
        goto _080F279C;
      case 3u:
        v0 = &gPokenavHoennMapHeader_Gfx;
        v1 = 21400;
        goto _080F279C;
      case 4u:
        v0 = &gPokenavConditionMenuOptions_Gfx;
        v1 = 24472;
        goto _080F279C;
      case 5u:
        v0 = &gPokenavConditionMenuOptions2_Gfx;
        v1 = 26520;
        goto _080F279C;
      case 6u:
        v0 = &gPokenavTrainersEyesHeader_Gfx;
        v1 = 18328;
_080F279C:
        LZ77UnCompWram(v0, v1 + 0x2000000);
        break;
      case 7u:
        LoadSpritePalettes((int)&gUnknown_083E449C);
        break;
      default:
        goto def_80F26D6;
    }
    ++v2000306;
    result = 1;
  }
  return result;
}
