signed int special_0x44()
{
  int v0; // r4@1
  int v1; // r0@4
  int v2; // r4@4
  int v3; // r8@4
  int v4; // r0@6

  v0 = 5;
  if ( v2027F20 )
  {
    do
      v0 = (v0 + 1) & 0xFF;
    while ( (unsigned int)v0 <= 0x17 && *(_BYTE *)(36 * v0 + 0x2027E6C) );
  }
  v1 = (unsigned __int16)Random() % v0;
  v2 = (unsigned __int8)v1;
  v3 = (unsigned __int8)v1;
  do
  {
    if ( (sub_80BFB54(*(_BYTE *)(36 * v2 + 0x2027E6C)) & 0xFF) == 4 )
    {
      if ( *(_WORD *)(36 * v2 + 0x2027E82) )
        goto _080BD898;
      v4 = *(_BYTE *)(36 * v2 + 0x2027E6D);
    }
    else
    {
      v4 = *(_BYTE *)(36 * v2 + 0x2027E6D);
    }
    if ( v4 == 1 )
      return v2;
_080BD898:
    if ( v2 )
      v2 = (v2 - 1) & 0xFF;
    else
      v2 = 23;
  }
  while ( v2 != v3 );
  return 255;
}
