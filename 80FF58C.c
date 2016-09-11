signed int sub_80FF58C()
{
  unsigned int v0; // r1@1
  signed int result; // r0@3

  v0 = 0;
  if ( v201F008 <= 0u )
  {
_080FF5B6:
    result = 0;
  }
  else
  {
    while ( *(_BYTE *)(v201F000 + v0) )
    {
      v0 = (v0 + 1) & 0xFFFF;
      if ( v0 >= v201F008 )
        goto _080FF5B6;
    }
    result = 1;
  }
  return result;
}
