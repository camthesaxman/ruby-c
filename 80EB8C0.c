int sub_80EB8C0()
{
  unsigned int v0; // r4@1
  int v1; // r5@1

  v0 = 0;
  v1 = 0;
  do
  {
    if ( sub_80EB868(v0) << 24 )
      v1 = (v1 + 1) & 0xFF;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x20 );
  return v1;
}
