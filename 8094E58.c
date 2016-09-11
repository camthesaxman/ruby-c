signed int sub_8094E58()
{
  unsigned __int8 v0; // r2@4

  if ( (unsigned int)v201B264 <= 0xA )
  {
    switch ( v201B264 )
    {
      case 0:
        if ( (unsigned __int8)sub_806B528() == 1 )
        {
          v0 = v201B266;
          if ( v201B266 == 6 )
          {
            v201B266 = 0;
            goto _08094FEC;
          }
          goto _08094EEC;
        }
        v0 = v201B266;
        if ( v201B266 <= 5 )
        {
_08094EEC:
          sub_806D90C(v201B260, v0, (int)&dword_3004360[25 * v201B266]);
          ++v201B266;
          return 0;
        }
        v201B266 = 0;
_08094FEC:
        ++v201B264;
        break;
      case 1:
        sub_806DA98();
        goto _08094FEC;
      case 2:
        sub_806DC34(v201B260, 608, 612);
        goto _08094FEC;
      case 3:
        if ( (unsigned __int8)sub_806BD58(v201B260) != 1 )
          goto _08094FF8;
        goto _08094FE2;
      case 4:
        sub_806E334(v201B264, 33665024, 612);
        goto _08094FEC;
      case 5:
        sub_806E0C4(v201B264, 33665024, 612);
        goto _08094FEC;
      case 6:
        sub_806E53C(v201B264, 33665024, 612);
        goto _08094FEC;
      case 7:
        nullsub_13();
        goto _08094FEC;
      case 8:
        sub_806E6C8(v201B264, 33665024, 612);
        goto _08094FEC;
      case 9:
        if ( (unsigned __int8)sub_806B58C(v201B266) == 1 )
        {
_08094FE2:
          v201B266 = 0;
          goto _08094FEC;
        }
_08094FF8:
        ++v201B266;
        return 0;
      case 10:
        if ( v2038473 == 3 )
        {
          if ( (unsigned __int8)sub_8070E48(v203855E) == 10 )
            v201B259 = -1;
          else
            v201B259 = 3;
        }
        return 1;
      default:
        return 0;
    }
  }
  return 0;
}
