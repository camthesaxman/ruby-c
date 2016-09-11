unsigned int sub_805AB54()
{
  unsigned int v0; // r1@1
  int i; // r0@1

  v0 = 0;
  for ( i = LOBYTE(dword_30048A0[0]); i << 31; i = LOBYTE(dword_30048A0[9 * v0]) )
  {
    v0 = (v0 + 1) & 0xFF;
    if ( v0 > 0xF )
      break;
  }
  return v0;
}
