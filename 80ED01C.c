int sub_80ED01C()
{
  int v0; // r0@9
  int v1; // r0@9
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0x13u )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F1E84();
        sub_80F2D04(1);
        sub_80F2D04(5);
        goto _080ED27C;
      case 1u:
        if ( sub_80F1F10() << 24 )
          return v3;
        sub_80EEFBC(0);
        goto _080ED27C;
      case 2u:
        if ( sub_80EEF34() & 0xFF )
          return v3;
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
        goto _080ED27C;
      case 3u:
        if ( v202F38F & 0x80 )
          return v3;
        v0 = SetVBlankCallback(0);
        v1 = sub_80EED0C(v0);
        sub_80EF814(v1);
        goto _080ED27C;
      case 4u:
        sub_80F2620();
        goto _080ED27C;
      case 5u:
        sub_80F4D44();
        ++v2000304;
        goto _080ED15E;
      case 6u:
_080ED15E:
        if ( sub_80F4D88() << 24 )
          goto _080ED27C;
        v2000304 += 2;
        return v3;
      case 7u:
        if ( !sub_8055870() )
          --v2000304;
        return v3;
      case 8u:
        if ( !sub_8055870() )
          goto _080ED27C;
        return v3;
      case 9u:
        sub_80F0264(0);
        ++v2000304;
        goto _080ED1D8;
      case 0xAu:
_080ED1D8:
        if ( !(sub_80F02A0() << 24) )
          goto _080ED27C;
        return v3;
      case 0xBu:
        sub_80F3008(0);
        goto _080ED27C;
      case 0xCu:
        if ( !sub_8055870() )
          goto _080ED27C;
        return v3;
      case 0xDu:
        BeginNormalPaletteFade(v2000308, -1, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_80EBD18);
        goto _080ED27C;
      case 0xEu:
        sub_80EED2C(4);
        goto _080ED27C;
      case 0xFu:
        if ( !(v202F38F & 0x80) )
        {
          v2000306 = 0;
_080ED27C:
          ++v2000304;
        }
        return v3;
      case 0x10u:
        sub_80F2C80(1);
        ++v2000304;
        goto _080ED2A0;
      case 0x11u:
_080ED2A0:
        if ( !(unsigned __int8)sub_80F2CBC(1) )
        {
          v2000306 = 0;
          ++v2000304;
        }
        return v3;
      case 0x12u:
        sub_80F2C80((v2006DFC + 7) & 0xFF);
        ++v2000304;
        goto _080ED2EA;
      case 0x13u:
_080ED2EA:
        if ( !(sub_80F2CBC((v2006DFC + 7) & 0xFF) << 24) )
          sub_80EBDBC((int)sub_80ED31C);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
