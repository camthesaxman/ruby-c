signed int sub_80BF974()
{
  unsigned int v0; // r1@1

  v0 = 0;
  do
  {
    if ( *(_BYTE *)(36 * v0 + 0x2027E6C) == v202E8CC )
      return 1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return 0;
}
