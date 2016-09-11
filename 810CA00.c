signed int sub_810CA00()
{
  unsigned int v0; // r1@1

  v0 = 0;
  do
  {
    if ( !*(_BYTE *)(8 * v0 + 0x2025F2C) )
      return (char)v0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x27 );
  return -1;
}
