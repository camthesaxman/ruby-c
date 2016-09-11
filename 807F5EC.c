signed int sub_807F5EC()
{
  v202FED6 = (gSpriteCoordOffsetX - v202FEDA) & 0xFF;
  ++v202FED8;
  if ( v202FED8 > 3u )
  {
    v202FED8 = 0;
    ++v202FEDA;
  }
  if ( v202FEB6 != 1 )
  {
    if ( (signed int)v202FEB6 > 1 )
    {
      if ( v202FEB6 != 2 )
        return 0;
      sub_807F7A4();
    }
    else
    {
      if ( v202FEB6 )
        return 0;
      sub_807DBA4(0, 0x10u, 3);
    }
    goto _0807F672;
  }
  if ( sub_807DBE8() << 24 )
_0807F672:
    ++v202FEB6;
  return 1;
}
