int sub_80EE06C()
{
  int v0; // r0@21
  int v1; // r0@22
  int v2; // r0@24
  int v3; // r0@26
  int v5; // [sp+8h] [bp-4h]@0

  if ( v2000304 <= 8u )
  {
    switch ( v2000304 )
    {
      case 0u:
        sub_80F15A8();
        goto _080EE1C4;
      case 1u:
        if ( word_30017A0 & 0x40 && v20087DC )
        {
          audio_play(5u);
          sub_80F6A4C(-1);
_080EE1C4:
          ++v2000304;
          return v5;
        }
        if ( word_30017A0 & 0x80 && v20087DC < v2008774 )
        {
          audio_play(5u);
          sub_80F6A4C(1);
          goto _080EE1C4;
        }
        if ( word_300179E & 1 )
        {
          audio_play(5u);
          sub_80EEFBC(11);
_080EE262:
          v2000304 = 4;
        }
        else if ( word_300179E & 2 )
        {
          audio_play(5u);
          sub_80EBDBC((int)sub_80EE294);
        }
        break;
      case 2u:
        if ( !(sub_80F6AF0() << 24) )
          goto _080EE1C4;
        return v5;
      case 3u:
        if ( !sub_8055870() )
          v2000304 = 0;
        return v5;
      case 4u:
        sub_80F3B00();
        goto _080EE1C4;
      case 5u:
        if ( !(sub_80F3B58() << 24) )
        {
          sub_80F1494();
          v0 = v2000304 + 1;
          ++v2000304;
          sub_80EED9C(v0);
        }
        return v5;
      case 6u:
        v1 = (unsigned __int8)sub_80F68E8();
        if ( v1 && v1 == 1 )
        {
          v2 = audio_play(5u);
          sub_80F3B94(v2);
          v2000304 = 7;
        }
        else if ( word_300179E & 2 )
        {
          v3 = audio_play(5u);
          sub_80F3B94(v3);
          v2000304 = 8;
        }
        return v5;
      case 7u:
        if ( !(sub_80F3BD4() << 24) )
          goto _080EE262;
        return v5;
      case 8u:
        if ( !(unsigned __int8)sub_80F3BD4() )
        {
          sub_80EEFBC(5);
          v2000304 = 0;
        }
        return v5;
      default:
        return v5;
    }
  }
  return v5;
}
