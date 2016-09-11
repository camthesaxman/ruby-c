signed int sub_807F934()
{
  if ( v202FEB6 != 1 )
  {
    if ( (signed int)v202FEB6 > 1 )
    {
      if ( v202FEB6 == 2 )
      {
        v4000052 = 0;
        ++v202FEB6;
      }
      return 0;
    }
    if ( v202FEB6 )
      return 0;
    sub_807DBA4(0, 0x10u, 1);
    goto _0807F978;
  }
  if ( sub_807DBE8() << 24 )
  {
    sub_807FA54();
_0807F978:
    ++v202FEB6;
  }
  return 1;
}
