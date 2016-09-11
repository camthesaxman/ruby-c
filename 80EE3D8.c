int sub_80EE3D8()
{
  int v0; // r0@9
  int v1; // r0@9
  int v2; // r0@9
  int v4; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0xDu )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F1E84();
        sub_80F2D04(0);
        goto _080EE55A;
      case 1u:
        if ( sub_80F1F10() << 24 )
          return v4;
        sub_80EEFBC(9);
        goto _080EE55A;
      case 2u:
        if ( sub_80EEF34() & 0xFF )
          return v4;
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080EE55A;
      case 3u:
        if ( v202F38F & 0x80 )
          return v4;
        v0 = SetVBlankCallback(0);
        v1 = sub_80EED0C(v0);
        v2 = sub_80EF814(v1);
        sub_80EEE08(v2);
        goto _080EE55A;
      case 4u:
        sub_80F2620();
        goto _080EE55A;
      case 5u:
        sub_80F0264(2);
        ++v2000304;
        goto _080EE4CA;
      case 6u:
_080EE4CA:
        if ( !(sub_80F02A0() << 24) )
          goto _080EE55A;
        return v4;
      case 7u:
        sub_80F2C80(3);
        ++v2000304;
        goto _080EE4F0;
      case 8u:
_080EE4F0:
        if ( !(sub_80F2CBC(3) << 24) )
          goto _080EE55A;
        return v4;
      case 9u:
        sub_80F3008(2);
        goto _080EE55A;
      case 0xAu:
        if ( !sub_8055870() )
          goto _080EE55A;
        return v4;
      case 0xBu:
        sub_80F6F10();
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD68);
        goto _080EE55A;
      case 0xCu:
        sub_80EED2C(5);
_080EE55A:
        ++v2000304;
        break;
      case 0xDu:
        if ( !(v202F38F & 0x80) )
          sub_80EBDBC((int)sub_80EE58C);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
