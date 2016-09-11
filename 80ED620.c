int sub_80ED620()
{
  int v0; // r0@9
  int v1; // r0@9
  int v2; // r0@13
  int v3; // r0@16
  int v5; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0x10u )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F1E84();
        sub_80F2D04(1);
        goto _080ED814;
      case 1u:
        if ( sub_80F1F10() << 24 )
          return v5;
        sub_80EEFBC(1);
        goto _080ED814;
      case 2u:
        if ( sub_80EEF34() & 0xFF )
          return v5;
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080ED814;
      case 3u:
        if ( !(v202F38F & 0x80) )
        {
          v0 = SetVBlankCallback(0);
          v1 = sub_80EED0C(v0);
          sub_80EF814(v1);
          v20076AA = 0;
          ++v2000304;
        }
        return v5;
      case 4u:
        sub_80F2620();
        goto _080ED814;
      case 5u:
        v200D162 = 2;
        sub_80F4BD0();
        goto _080ED814;
      case 6u:
        sub_80EFF34();
        ++v2000304;
        goto _080ED762;
      case 7u:
_080ED762:
        v2 = sub_80EFF68();
        goto _080ED806;
      case 8u:
        if ( !sub_8055870() )
          goto _080ED814;
        return v5;
      case 9u:
        v3 = sub_8055870();
        goto _080ED808;
      case 0xAu:
        sub_80F33A8();
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD4C);
        goto _080ED814;
      case 0xBu:
        sub_80EED2C(2);
        goto _080ED814;
      case 0xCu:
        if ( !(v202F38F & 0x80) )
          goto _080ED814;
        return v5;
      case 0xDu:
        sub_80F2C80(1);
        ++v2000304;
        goto _080ED800;
      case 0xEu:
_080ED800:
        v2 = sub_80F2CBC(1);
_080ED806:
        v3 = v2 << 24;
_080ED808:
        if ( !v3 )
_080ED814:
          ++v2000304;
        return v5;
      case 0xFu:
        sub_80F2C80(6);
        ++v2000304;
        goto _080ED834;
      case 0x10u:
_080ED834:
        if ( !(sub_80F2CBC(6) << 24) )
          sub_80EBDBC((int)sub_80ED858);
        break;
      default:
        return v5;
    }
  }
  return v5;
}
