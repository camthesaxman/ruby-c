signed int sub_80EA184()
{
  int v0; // r0@1

  v0 = v20010BE;
  if ( v20010BE == 1 )
    goto _080EA1B4;
  if ( (signed int)v20010BE <= 1 )
  {
    if ( v20010BE )
      return 0;
    sub_80EAAD4();
    v0 = v20010BE + 1;
    ++v20010BE;
_080EA1B4:
    if ( sub_80EA1E0(v0) << 24 )
      ++v20010BE;
    return 0;
  }
  if ( v20010BE == 2 )
  {
    sub_80E9178();
    return 1;
  }
  return 0;
}
