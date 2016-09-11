signed int sub_806AFD0()
{
  signed int result; // r0@17

  if ( (unsigned int)v201B264 > 9 )
  {
def_806AFEE:
    result = 0;
  }
  else
  {
    switch ( v201B264 )
    {
      case 0:
        if ( v201B266 >= (signed int)(unsigned __int8)byte_3004350 )
        {
          v201B266 = 0;
_0806B0E0:
          ++v201B264;
        }
        else
        {
          sub_806D90C(v201B260, v201B266, &dword_3004360[25 * v201B266]);
_0806B114:
          ++v201B266;
        }
        goto def_806AFEE;
      case 1:
        sub_806DA98();
        goto _0806B0E0;
      case 2:
        sub_806DC34(v201B260);
        goto _0806B0E0;
      case 3:
        if ( (sub_806BD58(v201B260, v201B266) & 0xFF) != 1 )
          goto _0806B114;
        v201B266 = 0;
        goto _0806B0E0;
      case 4:
        sub_806E334();
        goto _0806B0E0;
      case 5:
        sub_806E0C4();
        goto _0806B0E0;
      case 6:
        sub_806E53C();
        goto _0806B0E0;
      case 7:
        nullsub_13();
        goto _0806B0E0;
      case 8:
        sub_806E6C8();
        goto _0806B0E0;
      case 9:
        if ( (sub_806B58C(v201B266) & 0xFF) != 1 )
          goto _0806B114;
        v201B266 = 0;
        v201B264 = 0;
        result = 1;
        break;
      default:
        goto def_806AFEE;
    }
  }
  return result;
}
