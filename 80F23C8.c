signed int sub_80F23C8()
{
  unsigned int v0; // r2@1

  v0 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v0 + 16 * v2006DAD + 0x2000320) )
      return 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  return 1;
}
