int sub_80EE658()
{
  int v0; // r0@3
  int v1; // r0@13
  int v2; // r0@22
  int v3; // r0@22
  int v4; // r0@25
  int v5; // r0@32
  int v7; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 0x11u )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F3294(1);
        v0 = sub_80EEFBC(10);
        sub_80F0B24(v0);
        goto _080EE8C6;
      case 1u:
        if ( !(sub_80F0B44() << 24) )
          goto _080EE8C6;
        return v7;
      case 2u:
        sub_80F0F64();
        goto _080EE8C6;
      case 3u:
        if ( sub_80F0FEC() << 24 )
          return v7;
        sub_80F6FB8(1);
        goto _080EE8C6;
      case 4u:
        sub_80F6DB8();
        goto _080EE8C6;
      case 5u:
        sub_80F700C(33589128, v200876E);
        sub_80F42C4(33589128);
        ++v2000304;
        return v7;
      case 6u:
        sub_80F0CD8();
        ++v2000304;
        goto _080EE76A;
      case 7u:
_080EE76A:
        if ( sub_80F6E9C() << 24 )
          return v7;
        v1 = sub_80F0D5C();
        goto _080EE8B8;
      case 8u:
        if ( word_300179C & 0x40 && v20087DC )
        {
          audio_play(5u);
          sub_80F708C(-1);
_080EE7E8:
          v2000304 = 16;
          return v7;
        }
        if ( word_300179C & 0x80 && v20087DC < v2008774 )
        {
          audio_play(5u);
          sub_80F708C(1);
          goto _080EE7E8;
        }
        if ( word_300179E & 2 )
        {
          v2 = audio_play(5u);
          v3 = sub_80F4394(v2);
          sub_80F0EC0(v3);
_080EE8C6:
          ++v2000304;
        }
        break;
      case 9u:
        if ( sub_80F6ED4() << 24 || sub_80F0EF4() << 24 )
          return v7;
        v4 = sub_80F6FB8(0);
        sub_80F2FB0(v4);
        goto _080EE8C6;
      case 0xAu:
        sub_80F6134(v2000304);
        goto _080EE8C6;
      case 0xBu:
        sub_80F0FA0();
        goto _080EE8C6;
      case 0xCu:
        v1 = sub_80F0FEC();
        goto _080EE8B8;
      case 0xDu:
        sub_80F0C28();
        goto _080EE8C6;
      case 0xEu:
        if ( !(sub_80F0C48() << 24) )
          goto _080EE8C6;
        return v7;
      case 0xFu:
        sub_80EEFBC(9);
        sub_80F3294(0);
        v5 = sub_80EBDBC((int)sub_80EE58C);
        sub_80EED9C(v5);
        return v7;
      case 0x10u:
        v1 = sub_80F70FC();
_080EE8B8:
        if ( !(v1 << 24) )
          goto _080EE8C6;
        return v7;
      case 0x11u:
        if ( !sub_8055870() )
          v2000304 = 8;
        return v7;
      default:
        return v7;
    }
  }
  return v7;
}
