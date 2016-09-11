signed int sub_80EF874()
{
  int v0; // r0@13
  int v1; // r0@16
  signed int result; // r0@21

  if ( v200D160 > 0xBu )
  {
def_80EF88E:
    result = 0;
  }
  else
  {
    switch ( v200D160 )
    {
      case 0u:
        sub_80EEDE8();
        break;
      case 1u:
        SetUpWindowConfig((int)&gWindowConfig_81E7224);
        break;
      case 2u:
        MultistepInitMenuWindowBegin();
        break;
      case 3u:
        if ( !MultistepInitMenuWindowContinue() )
          goto _080EF9EA;
        break;
      case 4u:
        MenuZeroFillScreen();
        break;
      case 5u:
        sub_80FA904(33582616, ((unsigned int)v2024EB9 >> 3) & 1);
        break;
      case 6u:
        if ( sub_80FA940() << 24 )
          goto _080EF9EA;
        break;
      case 7u:
        LZ77UnCompVram(&gPokenavHoennMapSquares_Gfx, 100683776);
        break;
      case 8u:
        v0 = LoadPalette((int)&gPokenavHoennMapSquares_Pal, 48, 32);
        sub_80EFC3C(v0);
        break;
      case 9u:
        if ( sub_80EFC64() << 24 )
          goto _080EF9EA;
        break;
      case 0xAu:
        v1 = MenuDrawTextWindow(0xDu, 3u);
        sub_80EF9F8(v1);
        break;
      case 0xBu:
        if ( v2006E90 )
        {
          v2007698 = 256;
          v4000012 = 0;
        }
        else
        {
          v2007698 = 160;
          v4000012 = 160;
        }
        v4000008 |= 1u;
        v4000050 = 0;
        break;
      default:
        goto def_80EF88E;
    }
    ++v200D160;
_080EF9EA:
    result = 1;
  }
  return result;
}
