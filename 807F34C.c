signed int sub_807F34C()
{
  if ( v202FEB6 == 1 )
  {
_0807F382:
    sub_807EFC0();
    if ( v202FED2 )
    {
      if ( v202FEB9 == 3 || v202FEB9 == 5 || v202FEB9 == 13 )
        return 0;
      v202FEC1 = 0;
      ++v202FEB6;
    }
    return 1;
  }
  if ( (signed int)v202FEB6 <= 1 )
  {
    if ( v202FEB6 )
      return 0;
    v202FED2 = 0;
    ++v202FEB6;
    goto _0807F382;
  }
  if ( v202FEB6 != 2 )
    return 0;
  if ( !(unsigned __int8)sub_807E8E8() )
  {
    sub_807E974();
    v202FED5 = 0;
    ++v202FEB6;
    return 0;
  }
  return 1;
}
