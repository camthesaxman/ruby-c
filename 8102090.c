signed int sub_8102090()
{
  signed int result; // r0@4

  if ( sub_8102E40(v2000018) << 24 )
  {
    result = 0;
  }
  else
  {
    ++v2000018;
    v2000000 = 12;
    if ( v2000018 > 2 )
      v2000000 = 14;
    result = 1;
  }
  return result;
}
