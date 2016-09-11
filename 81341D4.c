int sub_81341D4()
{
  int v0; // r5@1
  unsigned int v1; // r4@1

  v0 = 0;
  v1 = 0;
  do
  {
    v0 = (v0 + sub_8134194(v1)) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 7 );
  return v0;
}
