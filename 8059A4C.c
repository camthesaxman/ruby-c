int GetPlayerAvatarGraphicsIdByCurrentState()
{
  unsigned int v0; // r2@1
  int v1; // r1@2

  v0 = 0;
  do
  {
    v1 = 2 * v0 + 10 * v202E85F;
    if ( gUnknown_0830FC64[v1 + 1] & v202E858 )
      return gUnknown_0830FC64[v1];
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return 0;
}
