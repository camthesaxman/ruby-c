int sub_80EC67C()
{
  signed int v0; // r0@3
  __int16 v1; // r4@19
  char v2; // r2@27
  int v4; // [sp+Ch] [bp-4h]@0

  if ( v2000304 <= 5u )
  {
    switch ( v2000304 )
    {
      case 0u:
        v0 = (unsigned __int8)sub_80FAB60();
        if ( v0 == 3 )
        {
          sub_80EF9F8();
        }
        else if ( v0 > 3 )
        {
          if ( v0 == 4 )
          {
            audio_play(5u);
            v2000304 = 1;
          }
          else if ( v0 == 5 )
          {
            audio_play(5u);
            v2000304 = 4;
          }
        }
        else if ( v0 == 1 )
        {
          sub_80EED9C(1);
        }
        break;
      case 1u:
        if ( !v2006E90 )
        {
          sub_80FAEC4();
          goto _080EC7BC;
        }
        if ( !(sub_80EFBDC(1) << 24) )
        {
          sub_80FAEC4();
          goto _080EC7BC;
        }
        break;
      case 2u:
        if ( !(sub_80FAFC0() << 24) )
        {
          v1 = v2006E90;
          if ( v2006E90 )
            goto _080EC7BC;
          sub_80EFBB0();
          v2000304 = v1;
        }
        break;
      case 3u:
        if ( !(sub_80EFBDC(0) & 0xFF) )
        {
          sub_80EFBB0();
          v2000304 = 0;
        }
        break;
      case 4u:
        BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
_080EC7BC:
        ++v2000304;
        break;
      case 5u:
        if ( !(v202F38F & 0x80) )
        {
          sub_80F2DF4();
          sub_80F2D04(4);
          v2 = 0;
          if ( v2006E90 == 1 )
            v2 = 1;
          v2024EB9 = v2024EB9 & 0xF7 | 8 * v2;
          sub_80EBDBC((int)sub_80EC00C);
        }
        break;
      default:
        return v4;
    }
  }
  return v4;
}
