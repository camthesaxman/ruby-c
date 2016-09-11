int sub_80A96E4()
{
  int v0; // r2@1
  unsigned int v1; // r1@1

  v0 = 0;
  v1 = 0;
  do
  {
    if ( *(_WORD *)(4 * v1 + 0x2025BCC) )
      v0 = (v0 + 1) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0x31 );
  return v0;
}
