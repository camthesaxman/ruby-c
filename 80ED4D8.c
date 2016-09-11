int sub_80ED4D8()
{
  int v0; // r0@5
  int v1; // r0@5
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 8u )
  {
    switch ( v2000304 )
    {
      case 0u:
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080ED5EE;
      case 1u:
        if ( v202F38F & 0x80 )
          return v3;
        v0 = SetVBlankCallback(0);
        v1 = sub_80EED0C(v0);
        sub_80F3130(v1);
        goto _080ED5EE;
      case 2u:
        if ( !sub_8055870() )
          goto _080ED5EE;
        return v3;
      case 3u:
        sub_80F4CF0();
        goto _080ED5EE;
      case 4u:
        sub_80EFF34();
        ++v2000304;
        goto _080ED594;
      case 5u:
_080ED594:
        if ( !(sub_80EFF68() << 24) )
          goto _080ED5EE;
        return v3;
      case 6u:
        sub_80F35B4();
        sub_80EEFBC(2);
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD4C);
        goto _080ED5EE;
      case 7u:
        sub_80EED2C(2);
_080ED5EE:
        ++v2000304;
        break;
      case 8u:
        if ( !(v202F38F & 0x80) )
          sub_80EBDBC((int)sub_80ED858);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
