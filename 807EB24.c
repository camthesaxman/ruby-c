unsigned int snowflakes_progress()
{
  unsigned int result; // r0@2

  if ( v202FECC == v202FECD )
  {
    result = 0;
  }
  else
  {
    ++v202FEC8;
    if ( v202FEC8 > 0x24u )
    {
      v202FEC8 = 0;
      if ( v202FECC >= (unsigned int)v202FECD )
        snowflake_remove();
      else
        snowflake_add();
    }
    result = (-(v202FECC ^ v202FECD) | v202FECC ^ (unsigned int)v202FECD) >> 31;
  }
  return result;
}
