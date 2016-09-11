signed int sub_80E9FD4()
{
  if ( v20010BE )
  {
    if ( v20010BE != 1 )
      return 0;
  }
  else
  {
    nullsub_23();
    sub_80EA5A0();
    ++v20010BE;
  }
  if ( sub_80EA1E0() << 24 )
    return 1;
  return 0;
}
