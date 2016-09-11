signed int sub_80EA1E0()
{
  unsigned int i; // r4@2
  signed int result; // r0@4

  if ( v20010C4 )
  {
    for ( i = 0; i < v20010C2; i = (i + 1) & 0xFFFF )
    {
      sub_80EAC0C(16 * i + 33558728);
      sub_80EAC48(12 * i + 33558856);
    }
    v20010BC = 1;
    --v20010C4;
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
