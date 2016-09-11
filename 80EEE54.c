signed int sub_80EEE54()
{
  if ( v200D160 <= 4u )
  {
    switch ( v200D160 )
    {
      case 0u:
        LZ77UnCompVram(&gPokenavHoennMapMisc_Gfx, 100712448);
        goto _080EEF18;
      case 1u:
        LZ77UnCompVram(&gUnknown_08E99FB0, 100718592);
        goto _080EEF18;
      case 2u:
        LoadPalette((int)&gPokenavHoennMap1_Pal, 16, 32);
        goto _080EEF18;
      case 3u:
        sub_80EF58C(0);
        sub_80EF58C(1);
        sub_80EF58C(2);
_080EEF18:
        ++v200D160;
        return 1;
      case 4u:
        v200030C = 0;
        v4000014 = 0;
        v4000016 = 0;
        v400000A = 6924;
        ++v200D160;
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
