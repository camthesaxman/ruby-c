int __fastcall HandleReceiveRemoteLinkPlayer(unsigned __int8 a1)
{
  int v1; // r5@1
  int i; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  gLinkPlayerPending[a1] = 0;
  for ( i = 0; i < (GetLinkPlayerCount_2() & 0xFF); ++i )
    v1 += (unsigned __int8)gLinkPlayerPending[i];
  if ( !v1 && !gReceivedRemoteLinkPlayers )
    gReceivedRemoteLinkPlayers = 1;
  return v4;
}
