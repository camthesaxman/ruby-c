signed int sub_80A96AC()
{
  int v0; // r1@1
  signed int v2; // r0@4

  LOBYTE(v0) = 0;
  do
  {
    v0 = (char)v0;
    if ( !*(_WORD *)(4 * (char)v0 + 0x2025BCC) )
      return v0;
    v2 = (v0 + 1) << 24;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v2 >> 24 <= 49 );
  return -1;
}
