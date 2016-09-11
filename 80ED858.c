int sub_80ED858()
{
  int v0; // r0@3
  int v1; // r0@8
  int v2; // r0@13
  int v3; // r0@18
  int v4; // r0@21
  int v5; // r0@21
  int v6; // r0@32
  int v7; // r0@34
  int v8; // r0@37
  int v9; // r0@39
  int v11; // [sp+Ch] [bp-4h]@0

  if ( v2000304 <= 0xBu )
  {
    switch ( v2000304 )
    {
      case 0u:
        v0 = sub_80F4F78();
        sub_80F5B38(v0);
        v2000304 = 1;
        return v11;
      case 1u:
        if ( !(sub_80F5B50() << 24) )
          v2000304 = 2;
        return v11;
      case 2u:
        sub_80F0174(1);
        v2000304 = 3;
        return v11;
      case 3u:
        if ( !(sub_80F4FB4() << 24) )
        {
          v1 = sub_80F3C94();
          sub_80F3D00(v1);
          goto _080EDADC;
        }
        return v11;
      case 4u:
        if ( word_300179C & 0x40 && v20087CB && (!v20076AA || v20087DC) )
        {
          audio_play(5u);
          v2 = sub_80F5060(1);
          move_anim_execute(v2);
_080ED9B8:
          v2000304 = 5;
          return v11;
        }
        if ( word_300179C & 0x80 && v20087CB && (!v20076AA || v20087DC < v2008774) )
        {
          audio_play(5u);
          v3 = sub_80F5060(0);
          move_anim_execute(v3);
          goto _080ED9B8;
        }
        if ( word_300179E & 2 )
        {
          v4 = audio_play(5u);
          v5 = sub_80F4FDC(v4);
          move_anim_execute(v5);
          v2000304 = 9;
        }
        else if ( word_300179E & 1 )
        {
          if ( v20076AA )
          {
            if ( !v2006DAC )
            {
              audio_play(5u);
              v2000304 = 7;
            }
          }
          else if ( v20087DC == v20087DA - 1 )
          {
            audio_play(5u);
            v2000304 = 9;
          }
        }
        break;
      case 5u:
        if ( !(gpu_sync_bg_show() << 24) )
        {
          ((void (*)(void))sub_80F3D00)();
          v2000304 = 6;
        }
        return v11;
      case 6u:
        if ( !sub_8055870() )
          goto _080EDADC;
        return v11;
      case 7u:
        v6 = sub_80EEFBC(3);
        sub_80F3668(v6);
        v2000304 = 8;
        return v11;
      case 8u:
        if ( !(sub_80F7500() << 24) )
        {
          v7 = sub_80EEFBC(2);
          sub_80F3698(v7);
_080EDADC:
          v2000304 = 4;
        }
        return v11;
      case 9u:
        if ( !(unsigned __int8)sub_80F5038() )
        {
          v8 = sub_80F0174(0);
          sub_80F2F48(v8);
          BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
          v2000304 = 11;
        }
        return v11;
      case 0xBu:
        if ( !(v202F38F & 0x80) )
        {
          v9 = sub_80F3CE8();
          sub_80F5BDC(v9);
          if ( v20076AA )
          {
            sub_80F3614();
            sub_80EBDBC((int)sub_80ED3D0);
          }
          else
          {
            sub_80F357C();
            sub_80F2D6C(1);
            sub_80F2D6C(6);
            sub_80EBDBC((int)sub_80ECA10);
          }
        }
        return v11;
      default:
        return v11;
    }
  }
  return v11;
}
