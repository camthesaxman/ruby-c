signed int sub_807FC3C()
{
  sub_807FC9C();
  if ( v202FEB6 != 1 )
  {
    if ( (signed int)v202FEB6 > 1 )
    {
      if ( v202FEB6 != 2 )
        return 0;
      sub_807FDE8();
    }
    else
    {
      if ( v202FEB6 )
        return 0;
      sub_807DBA4(0, 0x10u, 1);
    }
    goto _0807FC86;
  }
  if ( sub_807DBE8() << 24 )
_0807FC86:
    ++v202FEB6;
  return 1;
}
