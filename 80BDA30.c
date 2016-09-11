signed int sub_80BDA30()
{
  unsigned int v0; // r2@1

  v0 = 0;
  do
  {
    if ( *(_BYTE *)(36 * v0 + 0x2027E6C)
      && *(_BYTE *)(36 * v0 + 0x2027E6C) != 41
      && *(_BYTE *)(36 * v0 + 0x2027E6D) == 1 )
    {
      return v0;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x17 );
  return 255;
}
