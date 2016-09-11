signed int sub_80E8054()
{
  unsigned int v0; // r1@1
  signed int result; // r0@3

  v0 = 0;
  if ( v200100A <= 0u )
  {
_080E808A:
    result = 1;
  }
  else
  {
    while ( *(_WORD *)(2 * v0 + 0x200100C) == 0xFFFF )
    {
      v0 = (v0 + 1) & 0xFFFF;
      if ( v0 >= v200100A )
        goto _080E808A;
    }
    result = 0;
  }
  return result;
}
