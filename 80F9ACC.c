signed int sub_80F9ACC()
{
  signed int result; // r0@15

  if ( (unsigned int)v201B264 > 7 )
  {
def_80F9AEA:
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
_080F9BBC:
          ++v201B264;
        }
        else
        {
          sub_806D90C(v201B260, v201B266, (int)&dword_3004360[25 * v201B266]);
_080F9BF0:
          ++v201B266;
        }
        goto def_80F9AEA;
      case 1:
        sub_806DA98();
        goto _080F9BBC;
      case 2:
        sub_806DC34(v201B260, 608, 0);
        goto _080F9BBC;
      case 3:
        if ( (unsigned __int8)sub_806BD58(v201B260) != 1 )
          goto _080F9BF0;
        v201B266 = 0;
        goto _080F9BBC;
      case 4:
        sub_806E334(v201B264, 33665024, 0);
        goto _080F9BBC;
      case 5:
        sub_806E0C4(v201B264, 33665024, 0);
        goto _080F9BBC;
      case 6:
        sub_80F9C00();
        goto _080F9BBC;
      case 7:
        if ( (unsigned __int8)sub_806B58C(v201B266) != 1 )
          goto _080F9BF0;
        v201B266 = 0;
        v201B264 = 0;
        result = 1;
        break;
      default:
        goto def_80F9AEA;
    }
  }
  return result;
}
