int sub_813AF3C()
{
  int v0; // r2@1
  unsigned int v1; // r1@1

  v0 = 0;
  v1 = 6;
  do
  {
    if ( *(_WORD *)(36 * v1 + 0x20282A0) )
      v0 = (v0 + 1) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return v0;
}
