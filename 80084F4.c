int sub_80084F4()
{
  unsigned int v0; // r2@1
  unsigned int v1; // r1@1
  unsigned int v2; // r1@6
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)GetLinkPlayerCount();
  v1 = 0;
  if ( v0 > 0 && u8_array_3002B70[0] )
  {
    do
      v1 = (v1 + 1) & 0xFF;
    while ( v1 < v0 && u8_array_3002B70[v1] );
  }
  if ( v1 == v0 )
  {
    v2 = 0;
    do
    {
      u8_array_3002B70[v2] = 0;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 3 );
    gLinkCallback = 0;
  }
  return v4;
}
