signed int sub_8098830()
{
  if ( v20008AE == 1 )
  {
    if ( !(sub_809AC00() << 24) )
    {
      if ( v20011F6 )
        BoxSetMosaic();
_0809887E:
      ++v20008AE;
      return 1;
    }
  }
  else
  {
    if ( (signed int)v20008AE <= 1 )
    {
      if ( v20008AE || sub_8098520() << 24 )
        return 1;
      sub_809B068();
      goto _0809887E;
    }
    if ( v20008AE == 2 )
      return 0;
  }
  return 1;
}
