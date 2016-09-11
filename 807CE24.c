signed int sub_807CE24()
{
  int v0; // r0@1
  int v1; // r3@2

  v0 = v202FEAF;
  if ( v202FEAF != 16 )
  {
    v1 = v202FEAF + 1;
    ++v202FEAF;
    if ( ((v0 + 1) & 0xFFu) <= 0xF )
    {
      sub_807D304(-6, (16 - v1) & 0xFF, v202FEAC);
      return 1;
    }
    sub_807CEBC(0, 32, -6);
    v202FEAF = 16;
  }
  return 0;
}
