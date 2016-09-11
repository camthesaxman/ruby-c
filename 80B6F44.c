int sub_80B6F44()
{
  unsigned int v0; // r2@1
  int result; // r0@3

  v0 = 0;
  if ( (unsigned int)*(_BYTE *)(v2000034 + 1) <= 0 )
  {
_080B6F72:
    result = (*(_BYTE *)(v2000034 + 1) - 1) & 0xFF;
  }
  else
  {
    while ( *(_BYTE *)(v0 + 33554449) != 255 )
    {
      v0 = (v0 + 1) & 0xFF;
      if ( v0 >= *(_BYTE *)(v2000034 + 1) )
        goto _080B6F72;
    }
    result = v0;
  }
  return result;
}
