signed int __fastcall sub_80EF284(unsigned __int8 a1)
{
  signed int v1; // r1@8
  int v2; // r0@15

  if ( v200D160 <= 0xBu )
  {
    switch ( v200D160 )
    {
      case 0u:
        sub_80EEDE8();
        goto _080EF40C;
      case 1u:
        SetUpWindowConfig((int)&gWindowConfig_81E7224);
        goto _080EF40C;
      case 2u:
        MultistepInitMenuWindowBegin();
        goto _080EF40C;
      case 3u:
        if ( !MultistepInitMenuWindowContinue() )
          return 1;
        goto _080EF40C;
      case 4u:
        v40000D4 = &gUnknown_083DFEEC;
        v40000D8 = 100683776;
        v1 = -2147483568;
        goto _080EF350;
      case 5u:
        LZ77UnCompVram(&gUnknown_083DFF8C, 100726784);
        goto _080EF40C;
      case 6u:
        v40000D4 = &gUnknown_083E005C;
        v40000D8 = 100696064;
        v1 = -2147483632;
_080EF350:
        v40000DC = v1;
        goto _080EF40C;
      case 7u:
        LZ77UnCompVram(&gUnknown_083E007C, 100720640);
        goto _080EF40C;
      case 8u:
        LZ77UnCompVram(&gPokenavOutlineTilemap, 100722688);
        goto _080EF40C;
      case 9u:
        LZ77UnCompVram(&gPokenavOutlineTiles, 100696096);
        goto _080EF40C;
      case 0xAu:
        sub_80EF54C(a1);
        LoadPalette((int)&gUnknown_083DFECC, 240, 32);
        v2 = LoadPalette((int)&gPokenavOutlinePalette, 64, 32);
        sub_80EF7D4(v2);
_080EF40C:
        ++v200D160;
        return 1;
      case 0xBu:
        v4000008 = 7937;
        v400000C = 7434;
        v400000E = 7179;
        v4000050 = 0;
        ++v200D160;
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
