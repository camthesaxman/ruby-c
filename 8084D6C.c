signed int sub_8084D6C()
{
  int v0; // r3@1
  char *v1; // r2@2
  signed int result; // r0@4

  v0 = 0;
  if ( (unsigned __int8)gWildMonHeaders[0] == 255 )
  {
_08084DB8:
    result = 0xFFFF;
  }
  else
  {
    while ( 1 )
    {
      v1 = &gWildMonHeaders[20 * v0];
      if ( (unsigned __int8)*v1 == v2025738 && (unsigned __int8)v1[1] == v2025739 )
        break;
      v0 = (v0 + 1) & 0xFFFF;
      if ( (unsigned __int8)gWildMonHeaders[20 * v0] == 255 )
        goto _08084DB8;
    }
    result = v0;
  }
  return result;
}
