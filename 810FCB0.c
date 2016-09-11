int sub_810FCB0()
{
  int v0; // r3@1
  unsigned int v1; // r2@1

  v0 = 0;
  v1 = 0;
  do
  {
    if ( ((signed int)v2026AF6 >> (v1 + 8)) & 1 )
      v0 = (v0 + 1) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 7 );
  return v0;
}
