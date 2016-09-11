signed int __fastcall sub_80FB758(int a1)
{
  signed int result; // r0@3
  unsigned __int16 v2; // r0@4
  _BOOL4 v3; // r0@20
  signed int v4; // r1@20
  unsigned __int8 v5; // r0@23
  unsigned __int8 v6; // r0@24

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 > 0x58u )
  {
def_80FB76C:
    result = 1;
  }
  else
  {
    switch ( a1 )
    {
      case 88:
        return 0;
      case 0:
        v2 = 2063;
        goto _080FB956;
      case 1:
        v2 = 2064;
        goto _080FB956;
      case 2:
        v2 = 2065;
        goto _080FB956;
      case 3:
        v2 = 2066;
        goto _080FB956;
      case 4:
        v2 = 2067;
        goto _080FB956;
      case 5:
        v2 = 2068;
        goto _080FB956;
      case 6:
        v2 = 2069;
        goto _080FB956;
      case 7:
        v2 = 2070;
        goto _080FB956;
      case 8:
        v2 = 2071;
        goto _080FB956;
      case 9:
        v2 = 2072;
        goto _080FB956;
      case 10:
        v2 = 2073;
        goto _080FB956;
      case 11:
        v2 = 2074;
        goto _080FB956;
      case 12:
        v2 = 2075;
        goto _080FB956;
      case 13:
        v2 = 2076;
        goto _080FB956;
      case 14:
        v2 = 2077;
        goto _080FB956;
      case 15:
        v2 = 2078;
_080FB956:
        v3 = FlagGet(v2);
        v4 = 3;
        if ( v3 << 24 )
          v4 = 2;
        result = v4;
        break;
      case 58:
        v5 = FlagGet(0x848u);
        result = ((-v5 | v5) >> 31) & 4;
        break;
      case 73:
        v6 = FlagGet(0x849u);
        result = (-v6 | (unsigned int)v6) >> 31;
        break;
      default:
        goto def_80FB76C;
    }
  }
  return result;
}
