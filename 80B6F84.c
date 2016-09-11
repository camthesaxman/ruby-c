unsigned int sub_80B6F84()
{
  int v0; // r1@1
  unsigned int result; // r0@3

  v0 = (*(_BYTE *)(v2000034 + 1) - 1) << 24;
  if ( v0 <= 0 )
  {
_080B6FB4:
    result = 0;
  }
  else
  {
    while ( *(_BYTE *)((v0 >> 24) + 0x2000011) == 255 )
    {
      v0 = ((v0 >> 24) - 1) << 24;
      if ( v0 <= 0 )
        goto _080B6FB4;
    }
    result = (unsigned int)v0 >> 24;
  }
  return result;
}
