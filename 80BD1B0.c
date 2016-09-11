int sub_80BD1B0()
{
  unsigned int v0; // r3@1
  unsigned int v1; // r2@2
  unsigned int v2; // r1@2

  v0 = 1;
  do
  {
    v1 = v0 << 16;
    v2 = *(_BYTE *)(160 * (signed __int16)v0 + 0x202713D);
    if ( !(v2 >> 6) && !(*(_BYTE *)(160 * (signed __int16)v0 + 0x202713D) << 28) )
      return (unsigned __int8)v0;
    v0 = ((v0 << 16) + 0x10000) >> 16;
  }
  while ( (signed int)(v1 + 0x10000) >> 16 <= 19 );
  return 0;
}
