int sub_80083E0()
{
  int v0; // r3@1
  int v1; // r1@1
  int v2; // r2@1
  void *v3; // r4@2
  int v5; // [sp+8h] [bp-4h]@0

  v0 = (unsigned __int8)GetLinkPlayerCount();
  v1 = 0;
  v2 = 0;
  if ( v0 > 0 )
  {
    v3 = &gLinkPlayers;
    do
    {
      if ( *((_WORD *)v3 + 13) == 1 || u8_array_3002B78[v2] )
        ++v1;
      v3 = (char *)v3 + 28;
      ++v2;
    }
    while ( v2 < v0 );
  }
  if ( v1 == v0 )
  {
    v20239F8 &= 0xFFDFu;
    gLinkVSyncDisabled = 1;
    CloseLink();
    gLinkCallback = 0;
    gLinkDummyBool = 1;
  }
  return v5;
}
