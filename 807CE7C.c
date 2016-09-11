signed int sub_807CE7C()
{
  int v0; // r1@2
  signed int result; // r0@2

  if ( v202FEAF == 16 )
  {
    result = 0;
  }
  else
  {
    v0 = v202FEAF + 1;
    ++v202FEAF;
    sub_807D424((16 - v0) & 0xFF, v202FEAC);
    result = 1;
  }
  return result;
}
