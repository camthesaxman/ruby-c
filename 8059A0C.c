signed int __fastcall GetPlayerAvatarStateTransitionByGraphicsId(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r2@1
  int v3; // r4@1
  int v4; // r1@2

  v2 = 0;
  v3 = 10 * a2;
  do
  {
    v4 = 2 * v2 + v3;
    if ( gUnknown_0830FC64[v4] == a1 )
      return gUnknown_0830FC64[v4 + 1];
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 4 );
  return 1;
}
