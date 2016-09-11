int sub_80EDEE4()
{
  int v0; // r0@5
  int v1; // r0@5
  int v2; // r0@6
  int v3; // r0@9
  int v5; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0xAu )
  {
    switch ( v2000304 )
    {
      case 0u:
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080EE042;
      case 1u:
        if ( v202F38F & 0x80 )
          return v5;
        v0 = SetVBlankCallback(0);
        v1 = sub_80EED0C(v0);
        sub_80F3130(v1);
        goto _080EE042;
      case 2u:
        v2 = sub_80F66E0();
        sub_80EEE08(v2);
        goto _080EE042;
      case 3u:
        if ( !(sub_80F1080() << 24) )
          goto _080EE042;
        return v5;
      case 4u:
        v3 = sub_80EEFBC(5);
        sub_80F38B8(v3);
        ++v2000304;
        goto _080EDFC8;
      case 5u:
_080EDFC8:
        if ( !(sub_80F38EC() << 24) )
          goto _080EE042;
        return v5;
      case 6u:
        if ( !sub_8055870() )
          goto _080EE042;
        return v5;
      case 7u:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080EE042;
      case 8u:
        sub_80EED2C(3);
        goto _080EE042;
      case 9u:
        if ( !(v202F38F & 0x80) )
_080EE042:
          ++v2000304;
        break;
      case 0xAu:
        if ( !(sub_80F170C() << 24) )
          sub_80EBDBC((int)sub_80EE06C);
        break;
      default:
        return v5;
    }
  }
  return v5;
}
