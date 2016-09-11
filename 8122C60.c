signed int unref_sub_8122C60()
{
  signed int result; // r0@15

  if ( (unsigned int)v201B264 > 7 )
  {
def_8122C7E:
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
_08122D50:
          ++v201B264;
        }
        else
        {
          sub_806D90C(v201B260, v201B266, (int)&dword_3004360[25 * v201B266]);
_08122D84:
          ++v201B266;
        }
        goto def_8122C7E;
      case 1:
        sub_806DA98();
        goto _08122D50;
      case 2:
        sub_806DC34(v201B260, 608, 0);
        goto _08122D50;
      case 3:
        if ( (unsigned __int8)sub_806BD58(v201B260) != 1 )
          goto _08122D84;
        v201B266 = 0;
        goto _08122D50;
      case 4:
        sub_806E334(v201B264, 33665024, 0);
        goto _08122D50;
      case 5:
        sub_806E0C4(v201B264, 33665024, 0);
        goto _08122D50;
      case 6:
        sub_806BCE8(v201B264, 33665024, 0);
        goto _08122D50;
      case 7:
        if ( (unsigned __int8)sub_806B58C(v201B266) != 1 )
          goto _08122D84;
        v201B266 = 0;
        v201B264 = 0;
        result = 1;
        break;
      default:
        goto def_8122C7E;
    }
  }
  return result;
}
