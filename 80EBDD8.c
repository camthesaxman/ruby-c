int sub_80EBDD8()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2000304 <= 0x11u )
  {
    switch ( v2000304 )
    {
      case 0u:
        SetVBlankCallback(0);
        v4000000 = 0;
        v2006DAD = v2006DDC;
        v2006DAE = 5;
        goto _080EBFDC;
      case 1u:
        sub_80F3FF0();
        ++v2000304;
        goto _080EBE92;
      case 2u:
_080EBE92:
        if ( !(sub_80F4024() << 24) )
          goto _080EBFDC;
        return v1;
      case 3u:
        sub_80F2598();
        goto _080EBFDC;
      case 4u:
        sub_80EEE20();
        ++v2000304;
        goto _080EBED2;
      case 5u:
_080EBED2:
        if ( sub_80EEE54() << 24 )
          return v1;
        sub_80EEE08();
        goto _080EBFDC;
      case 6u:
        sub_80EF248(0);
        ++v2000304;
        goto _080EBF04;
      case 7u:
_080EBF04:
        if ( !(sub_80EF284(0) << 24) )
          goto _080EBFDC;
        return v1;
      case 8u:
        sub_80F1B8C(0);
        ++v2000304;
        goto _080EBF2C;
      case 9u:
_080EBF2C:
        if ( !(sub_80F1BC8(0) << 24) )
          goto _080EBFDC;
        return v1;
      case 0xAu:
        SetVBlankCallback((int)sub_80EBD18);
        goto _080EBFDC;
      case 0xBu:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        goto _080EBFDC;
      case 0xCu:
        sub_80EED2C(0);
        goto _080EBFDC;
      case 0xDu:
        if ( !(v202F38F & 0x80) )
          goto _080EBFDC;
        return v1;
      case 0xEu:
        sub_80F2C80(0);
        ++v2000304;
        goto _080EBFB4;
      case 0xFu:
_080EBFB4:
        if ( !(sub_80F2CBC(0) << 24) )
          goto _080EBFDC;
        break;
      case 0x10u:
        sub_80F1DF0();
_080EBFDC:
        ++v2000304;
        break;
      case 0x11u:
        if ( !(sub_80F1E50() << 24) )
        {
          sub_80EF428(0, 0);
          sub_80EBDBC((int)sub_80EC268);
        }
        break;
      default:
        return v1;
    }
  }
  return v1;
}
