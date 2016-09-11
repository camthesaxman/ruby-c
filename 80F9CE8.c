signed int sub_80F9CE8()
{
  signed int result; // r0@15

  if ( (unsigned int)v201B264 > 7 )
  {
def_80F9D06:
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
_080F9DD8:
          ++v201B264;
        }
        else
        {
          sub_806D90C(v201B260, v201B266, (int)&dword_3004360[25 * v201B266]);
_080F9E0C:
          ++v201B266;
        }
        goto def_80F9D06;
      case 1:
        sub_806DA98();
        goto _080F9DD8;
      case 2:
        sub_806DC34(v201B260, 608, 0);
        goto _080F9DD8;
      case 3:
        if ( (unsigned __int8)sub_806BD58(v201B260) != 1 )
          goto _080F9E0C;
        v201B266 = 0;
        goto _080F9DD8;
      case 4:
        sub_806E334(v201B264, 33665024, 0);
        goto _080F9DD8;
      case 5:
        sub_806E0C4(v201B264, 33665024, 0);
        goto _080F9DD8;
      case 6:
        sub_80F9E1C();
        goto _080F9DD8;
      case 7:
        if ( (unsigned __int8)sub_806B58C(v201B266) != 1 )
          goto _080F9E0C;
        v201B266 = 0;
        v201B264 = 0;
        result = 1;
        break;
      default:
        goto def_80F9D06;
    }
  }
  return result;
}
