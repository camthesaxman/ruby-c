signed int sub_80EEA0C()
{
  char *v0; // r1@16
  char v1; // r0@16
  signed int result; // r0@31

  if ( v2006E16 > 8u )
  {
def_80EEA26:
    result = 0;
  }
  else
  {
    switch ( v2006E16 )
    {
      case 0u:
        if ( !(sub_80F1F10() << 24) )
        {
          if ( v2006E17 == 12 )
            v2006E16 = 3;
          else
            v2006E16 = 1;
        }
        goto _080EEC08;
      case 1u:
        sub_80F2C80(v2006E17);
        ++v2006E16;
        goto _080EEAAE;
      case 2u:
_080EEAAE:
        if ( !(sub_80F2CBC(v2006E17) << 24) )
          goto _080EEB76;
        goto _080EEC08;
      case 3u:
        v2006DAD = v2006E15;
        if ( v2006E14 == 1 )
        {
          v0 = (char *)33582510;
          v1 = 3;
        }
        else if ( (signed int)v2006E14 > 1 )
        {
          if ( v2006E14 != 2 )
            goto _080EEB28;
          v0 = (char *)33582510;
          v1 = 6;
        }
        else
        {
          if ( v2006E14 )
            goto _080EEB28;
          v0 = (char *)33582510;
          v1 = 5;
        }
        *v0 = v1;
_080EEB28:
        sub_80F1B8C(v2006E14);
        ++v2006E16;
_080EEB3E:
        if ( !(sub_80F1BC8(v2006E14) << 24) )
_080EEB76:
          ++v2006E16;
_080EEC08:
        result = 1;
        break;
      case 4u:
        goto _080EEB3E;
      case 5u:
        if ( !sub_8055870() )
          goto _080EEB76;
        goto _080EEC08;
      case 6u:
        sub_80F1DF0();
        sub_80EF490(v2006E14);
        goto _080EEBCC;
      case 7u:
        if ( !(sub_80F1E50() << 24) )
        {
          sub_80EF428(v2006E14, v2006DAD);
_080EEBCC:
          ++v2006E16;
        }
        goto _080EEC08;
      case 8u:
        if ( sub_80EF4F8() << 24 )
          goto _080EEC08;
        ++v2006E16;
        goto def_80EEA26;
      default:
        goto def_80EEA26;
    }
  }
  return result;
}
