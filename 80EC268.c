int sub_80EC268()
{
  int v0; // r0@18
  signed int v1; // r1@34
  char v2; // r0@15
  int v4; // [sp+Ch] [bp-4h]@0

  if ( v2000304 == 3 )
  {
_080EC3BE:
    if ( !(sub_80F6250() << 24) )
      ++v2000304;
    return v4;
  }
  if ( (signed int)v2000304 > 3 )
  {
    if ( v2000304 == 6 )
    {
      sub_80F6C20();
      if ( v200D158 )
      {
        audio_play(5u);
        sub_80EBDBC((int)sub_80EE3D8);
        return v4;
      }
      audio_play(0x20u);
      v1 = 6;
    }
    else
    {
      if ( (signed int)v2000304 > 6 )
      {
        if ( v2000304 == 255 )
        {
          v2 = sub_80EEC10();
          if ( v2 )
          {
            audio_play(5u);
            sub_80EF428(0, v2006DAD);
            v2000304 = 0;
            ((void (*)(void))sub_80EED9C)();
          }
          else if ( word_300179E & 3 )
          {
            sub_80EF428(0, v2006DAD);
            v2000304 = 0;
          }
        }
        return v4;
      }
      if ( v2000304 != 4 || sub_8055870() )
        return v4;
      if ( v2008FE8 )
      {
        audio_play(5u);
        sub_80EBDBC((int)sub_80EDB88);
        return v4;
      }
      audio_play(0x20u);
      v1 = 5;
    }
    sub_80EF428(0, v1);
    v2000304 = 255;
    return v4;
  }
  if ( v2000304 == 1 )
  {
    sub_80F208C();
    sub_80EBDBC((int)sub_80EE96C);
    return v4;
  }
  if ( (signed int)v2000304 > 1 )
  {
    sub_80F6208();
    ++v2000304;
    goto _080EC3BE;
  }
  if ( !v2000304 )
  {
    if ( sub_80EEC10() << 24 )
    {
      audio_play(5u);
      v0 = sub_80EF428(0, v2006DAD);
      sub_80EED9C(v0);
    }
    else if ( word_300179E & 1 )
    {
      v2006DDC = v2006DAD;
      if ( (unsigned int)*(_BYTE *)(v2006DAD + 0x2006DB2) - 1 <= 4 )
      {
        switch ( *(_BYTE *)(v2006DDC + 0x2006DB2) )
        {
          case 1:
            audio_play(5u);
            sub_80EBDBC((int)sub_80EC4A0);
            break;
          case 2:
            audio_play(5u);
            sub_80EBDBC((int)sub_80EC81C);
            break;
          case 5:
            v2000304 = 1;
            break;
          case 4:
            v2000304 = 2;
            break;
          case 3:
            v2000304 = 6;
            break;
          default:
            return v4;
        }
      }
    }
    else if ( word_300179E & 2 )
    {
      v2000304 = 1;
    }
  }
  return v4;
}
