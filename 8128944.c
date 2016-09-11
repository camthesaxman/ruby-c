unsigned int sub_8128944()
{
  unsigned int v0; // r4@5
  unsigned int v1; // r2@5
  signed int v2; // r1@5

  for ( ; v20192F8; v20192E8 = 0 )
  {
    if ( v20192F8 & 1 )
    {
      v20192E4 = 0;
      sub_81289AC();
    }
    v20192F8 >>= 1;
    ++v20192F4;
  }
  do
  {
    v0 = Random() & 3;
    v1 = *(_BYTE *)(v0 + 0x20192E9);
    v2 = 0;
    if ( v1 >= v20192E9 )
    {
      do
        ++v2;
      while ( v2 <= 3 && v1 >= *(_BYTE *)(v2 + 33657577) );
    }
  }
  while ( v2 != 4 );
  return v0;
}
