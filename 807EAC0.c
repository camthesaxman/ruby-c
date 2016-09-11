signed int sub_807EAC0()
{
  signed int result; // r0@3

  if ( v202FEB6 )
  {
    if ( v202FEB6 != 1 )
      return 0;
  }
  else
  {
    v202FECD = v202FEB6;
    v202FEC8 = v202FEB6++;
  }
  if ( snowflakes_progress() << 24 )
  {
    result = 1;
  }
  else
  {
    ++v202FEB6;
    result = 0;
  }
  return result;
}
