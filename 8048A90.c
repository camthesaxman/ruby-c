int sub_8048A90()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !gReceivedRemoteLinkPlayers )
  {
    gMain[0] = (unsigned __int8)gReceivedRemoteLinkPlayers;
    SetMainCallback2((int)sub_804B41C);
  }
  return v1;
}
