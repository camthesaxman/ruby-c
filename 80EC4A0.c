int sub_80EC4A0()
{
  signed int v0; // r1@5
  int v1; // r0@11
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0xEu )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F1E84();
        sub_80F2D04(0);
        goto _080EC64C;
      case 1u:
        if ( sub_80F1F10() << 24 )
          return v3;
        v0 = 8;
        if ( v2024EB9 & 8 )
          v0 = 7;
        sub_80EEFBC(v0);
        goto _080EC64C;
      case 2u:
        if ( sub_80EEF34() & 0xFF )
          return v3;
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080EC64C;
      case 3u:
        if ( v202F38F & 0x80 )
          return v3;
        v1 = SetVBlankCallback(0);
        sub_80EED0C(v1);
        goto _080EC64C;
      case 4u:
        sub_80F2620();
        goto _080EC64C;
      case 5u:
        sub_80EF814();
        goto _080EC64C;
      case 6u:
        sub_80EF840();
        ++v2000304;
        goto _080EC5C0;
      case 7u:
_080EC5C0:
        if ( !(sub_80EF874() << 24) )
          goto _080EC64C;
        return v3;
      case 8u:
        sub_80F2C80(4);
        ++v2000304;
        goto _080EC5E4;
      case 9u:
_080EC5E4:
        if ( !(sub_80F2CBC(4) << 24) )
          goto _080EC64C;
        return v3;
      case 0xAu:
        sub_80F2DD8();
        SetVBlankCallback((int)sub_80EBD30);
        goto _080EC64C;
      case 0xBu:
        if ( !sub_8055870() )
          goto _080EC64C;
        return v3;
      case 0xCu:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        goto _080EC64C;
      case 0xDu:
        sub_80EED2C(1);
_080EC64C:
        ++v2000304;
        break;
      case 0xEu:
        if ( !(v202F38F & 0x80) )
          sub_80EBDBC((int)sub_80EC67C);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
