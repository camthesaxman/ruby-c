int GetBadgeCount()
{
  int v0; // r5@1
  signed int v1; // r4@1

  v0 = 0;
  v1 = 2055;
  do
  {
    if ( FlagGet(v1) << 24 )
      v0 = (v0 + 1) & 0xFF;
    ++v1;
  }
  while ( v1 <= 2062 );
  return v0;
}
