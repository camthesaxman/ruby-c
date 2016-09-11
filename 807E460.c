signed int sub_807E460()
{
  signed int result; // r0@3

  if ( v202FEB6 )
  {
    if ( v202FEB6 != 1 )
      return 0;
  }
  else
  {
    if ( v202FEB9 == 3 || v202FEB9 == 5 || v202FEB9 == 13 )
    {
      v202FEB6 = 255;
      return 0;
    }
    v202FEC1 = v202FEB6;
    ++v202FEB6;
  }
  if ( sub_807E8E8() << 24 )
  {
    result = 1;
  }
  else
  {
    sub_807E974();
    ++v202FEB6;
    result = 0;
  }
  return result;
}
