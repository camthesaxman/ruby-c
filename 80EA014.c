signed int sub_80EA014()
{
  if ( v20010BE )
  {
    if ( v20010BE != 1 )
      return 0;
  }
  else
  {
    sub_80EA4A4();
    ++v20010BE;
  }
  if ( sub_80EA1E0() << 24 )
    return 1;
  return 0;
}
