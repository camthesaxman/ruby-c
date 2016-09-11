int CloseLink()
{
  int v1; // [sp+0h] [bp-4h]@0

  gReceivedRemoteLinkPlayers = 0;
  gLinkOpen = 0;
  DisableSerial();
  return v1;
}
