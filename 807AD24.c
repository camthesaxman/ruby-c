int GetTaskCount()
{
  int v0; // r2@1
  unsigned int v1; // r1@1

  v0 = 0;
  v1 = 0;
  do
  {
    if ( LOBYTE(dword_3004B20[10 * v1 + 1]) == 1 )
      v0 = (v0 + 1) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return v0;
}
