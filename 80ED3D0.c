int sub_80ED3D0()
{
  int v0; // r0@4
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 8u )
  {
    switch ( v2000304 )
    {
      case 0u:
        SetVBlankCallback(0);
        goto _080ED4A6;
      case 1u:
        v0 = sub_80EED0C(v2000304);
        sub_80F6134(v0);
        goto _080ED4A6;
      case 2u:
        sub_80EEFBC(0);
        goto _080ED4A6;
      case 3u:
        sub_80F0264(0);
        ++v2000304;
        goto _080ED446;
      case 4u:
_080ED446:
        if ( !(sub_80F02A0() << 24) )
          goto _080ED4A6;
        return v2;
      case 5u:
        if ( !sub_8055870() )
          goto _080ED4A6;
        return v2;
      case 6u:
        sub_80F3008(0);
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080ED4A6;
      case 7u:
        sub_80EED2C(4);
_080ED4A6:
        ++v2000304;
        break;
      case 8u:
        if ( !(v202F38F & 0x80) )
          sub_80EBDBC((int)sub_80ED31C);
        break;
      default:
        return v2;
    }
  }
  return v2;
}
