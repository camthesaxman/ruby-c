int sub_80EE294()
{
  int v0; // r0@5
  int v1; // r0@5
  int v2; // r0@5
  int v4; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 8u )
  {
    switch ( v2000304 )
    {
      case 0u:
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080EE3A8;
      case 1u:
        if ( v202F38F & 0x80 )
          return v4;
        v0 = SetVBlankCallback(0);
        v1 = sub_80EED0C(v0);
        v2 = sub_80F3C2C(v1);
        sub_80EEE08(v2);
        goto _080EE3A8;
      case 2u:
        sub_80F6134(v2000304);
        sub_80F0264(1);
        ++v2000304;
        goto _080EE33C;
      case 3u:
_080EE33C:
        if ( !(sub_80F02A0() << 24) )
          goto _080EE3A8;
        return v4;
      case 4u:
        sub_80EEFBC(4);
        sub_80F3008(1);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080EE3A8;
      case 5u:
        if ( !sub_8055870() )
          goto _080EE3A8;
        return v4;
      case 6u:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        goto _080EE3A8;
      case 7u:
        sub_80EED2C(4);
_080EE3A8:
        ++v2000304;
        break;
      case 8u:
        if ( !(v202F38F & 0x80) )
          sub_80EBDBC((int)sub_80EDDBC);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
