int ResetLinkPlayers()
{
  void *v0; // r5@1
  signed int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = &gLinkPlayers;
  v1 = 3;
  do
  {
    memset(v0, 0, 28);
    v0 = (char *)v0 + 28;
    --v1;
  }
  while ( v1 >= 0 );
  return v3;
}
