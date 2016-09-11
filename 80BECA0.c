signed int sub_80BECA0()
{
  unsigned int v0; // r2@1

  v0 = 0;
  do
  {
    if ( *(_BYTE *)(4 * v0 + 0x20281F0)
      && *(_BYTE *)(4 * v0 + 0x20281F1) == 1
      && (unsigned int)*(_WORD *)(4 * v0 + 0x20281F2) <= 2 )
    {
      return v0;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return 255;
}
