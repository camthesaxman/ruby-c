int sub_80EDB88()
{
  int v0; // r0@9
  int v1; // r0@9
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0x11u )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F1E84();
        sub_80F2D04(0);
        goto _080EDD8A;
      case 1u:
        if ( sub_80F1F10() << 24 )
          return v3;
        sub_80EEFBC(4);
        goto _080EDD8A;
      case 2u:
        if ( sub_80EEF34() & 0xFF )
          return v3;
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080EDD8A;
      case 3u:
        if ( v202F38F & 0x80 )
          return v3;
        v0 = SetVBlankCallback(0);
        v1 = sub_80EED0C(v0);
        sub_80EF814(v1);
        goto _080EDD8A;
      case 4u:
        sub_80F2620();
        goto _080EDD8A;
      case 5u:
        sub_80F638C();
        ++v2000304;
        goto _080EDCA2;
      case 6u:
_080EDCA2:
        if ( sub_80F63D0() << 24 )
          goto _080EDD8A;
        v2000304 += 2;
        return v3;
      case 7u:
        if ( !sub_8055870() )
          --v2000304;
        return v3;
      case 8u:
        if ( !sub_8055870() )
          goto _080EDD8A;
        return v3;
      case 9u:
        sub_80F0264(1);
        ++v2000304;
        goto _080EDCFA;
      case 0xAu:
_080EDCFA:
        if ( !(sub_80F02A0() << 24) )
          goto _080EDD8A;
        return v3;
      case 0xBu:
        sub_80F2C80(2);
        ++v2000304;
        goto _080EDD20;
      case 0xCu:
_080EDD20:
        if ( !(sub_80F2CBC(2) << 24) )
          goto _080EDD8A;
        return v3;
      case 0xDu:
        sub_80F3008(1);
        goto _080EDD8A;
      case 0xEu:
        if ( !sub_8055870() )
          goto _080EDD8A;
        return v3;
      case 0xFu:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080EDD8A;
      case 0x10u:
        sub_80EED2C(4);
_080EDD8A:
        ++v2000304;
        break;
      case 0x11u:
        if ( !(v202F38F & 0x80) )
          sub_80EBDBC((int)sub_80EDDBC);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
