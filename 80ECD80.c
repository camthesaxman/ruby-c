int sub_80ECD80()
{
  int v0; // r0@8
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0x14u )
  {
    switch ( v2000304 )
    {
      case 0u:
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080ECFDC;
      case 1u:
        if ( !(v202F38F & 0x80) )
          goto _080ECFDC;
        return v2;
      case 2u:
        if ( sub_80EEF78() << 24 )
          return v2;
        SetVBlankCallback((int)sub_80EBD80);
        goto _080ECFDC;
      case 3u:
        v0 = sub_80EED1C(v2000304);
        sub_80F3130(v0);
        goto _080ECFDC;
      case 4u:
        sub_80F2D6C(1);
        goto _080ECFDC;
      case 5u:
        sub_80F2D6C(5);
        goto _080ECFDC;
      case 6u:
        v2006DAD = v2006DFC;
        v2006DAE = 6;
        sub_80EEE08();
        goto _080ECFDC;
      case 7u:
        sub_80EF248(2);
        ++v2000304;
        goto _080ECEC0;
      case 8u:
_080ECEC0:
        if ( !(sub_80EF284(2) << 24) )
          goto _080ECFDC;
        return v2;
      case 9u:
        sub_80F1B8C(2);
        ++v2000304;
        goto _080ECEE8;
      case 0xAu:
_080ECEE8:
        if ( !(sub_80F1BC8(2) << 24) )
          goto _080ECFDC;
        return v2;
      case 0xBu:
        if ( !sub_8055870() )
          goto _080ECFDC;
        return v2;
      case 0xCu:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080ECFDC;
      case 0xDu:
        sub_80EED2C(0);
        goto _080ECFDC;
      case 0xEu:
        sub_80F2598();
        goto _080ECFDC;
      case 0xFu:
        if ( !(v202F38F & 0x80) )
          goto _080ECFDC;
        return v2;
      case 0x10u:
        sub_80F2C80(1);
        ++v2000304;
        goto _080ECF84;
      case 0x11u:
_080ECF84:
        if ( !(unsigned __int8)sub_80F2CBC(1) )
        {
          v2000306 = 0;
          ++v2000304;
        }
        return v2;
      case 0x12u:
        sub_80F2C80(5);
        ++v2000304;
        goto _080ECFC4;
      case 0x13u:
_080ECFC4:
        if ( !(sub_80F2CBC(5) << 24) )
        {
          sub_80F1DF0();
_080ECFDC:
          ++v2000304;
        }
        break;
      case 0x14u:
        if ( !(sub_80F1E50() << 24) )
        {
          sub_80EF428(2, v2006DAD);
          sub_80EBDBC((int)sub_80ECC08);
        }
        break;
      default:
        return v2;
    }
  }
  return v2;
}
