signed int sub_810F6EC()
{
  unsigned int v0; // r5@1
  unsigned int v1; // r4@2

  v0 = 0;
  do
  {
    v1 = 0;
    do
    {
      if ( !GetBoxMonData((unsigned int *)(2400 * v0 + 80 * v1 + 33751204), 11, 0) )
        return 1;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0x1D );
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xD );
  return 0;
}
