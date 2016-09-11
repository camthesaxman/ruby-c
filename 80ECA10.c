int sub_80ECA10()
{
  int v0; // r0@4
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0xDu )
  {
    switch ( v2000304 )
    {
      case 0u:
        if ( !(sub_80EEF78() << 24) )
        {
          v0 = SetVBlankCallback((int)sub_80EBD80);
          sub_80EED1C(v0);
          v2006DAD = v2006DF0;
          v2006DAE = 3;
          sub_80EEE08();
          ++v2000304;
        }
        return v2;
      case 1u:
        sub_80EF248(1);
        ++v2000304;
        goto _080ECAD8;
      case 2u:
_080ECAD8:
        if ( !(sub_80EF284(1) << 24) )
          goto _080ECBC8;
        return v2;
      case 3u:
        sub_80F1B8C(1);
        ++v2000304;
        goto _080ECB08;
      case 4u:
_080ECB08:
        if ( !(sub_80F1BC8(1) << 24) )
          goto _080ECBC8;
        return v2;
      case 5u:
        if ( !sub_8055870() )
          goto _080ECBC8;
        return v2;
      case 6u:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080ECBC8;
      case 7u:
        sub_80EED2C(0);
        goto _080ECBC8;
      case 8u:
        sub_80F2598();
        goto _080ECBC8;
      case 9u:
        if ( !(v202F38F & 0x80) )
          goto _080ECBC8;
        return v2;
      case 0xAu:
        sub_80F2C80(1);
        ++v2000304;
        goto _080ECBA0;
      case 0xBu:
_080ECBA0:
        if ( !(sub_80F2CBC(1) << 24) )
          goto _080ECBC8;
        break;
      case 0xCu:
        sub_80F1DF0();
_080ECBC8:
        ++v2000304;
        break;
      case 0xDu:
        if ( !(sub_80F1E50() << 24) )
        {
          sub_80EF428(1, v2006DAD);
          sub_80EBDBC((int)sub_80EC86C);
        }
        break;
      default:
        return v2;
    }
  }
  return v2;
}
