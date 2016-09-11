int sub_800837C()
{
  int v0; // r2@1
  int v1; // r3@1
  int i; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)GetLinkPlayerCount();
  v1 = 0;
  for ( i = 0; i < v0; ++i )
  {
    if ( u8_array_3002B78[i] )
      ++v1;
  }
  if ( v1 == v0 )
  {
    v20239F8 &= 0xFFDFu;
    gLinkVSyncDisabled = 1;
    CloseLink();
    gLinkCallback = 0;
    gLinkDummyBool = 1;
  }
  return v4;
}
