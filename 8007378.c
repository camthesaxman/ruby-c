int OpenLink()
{
  signed int v0; // r1@1
  int v2; // [sp+Ch] [bp-4h]@0

  ResetSerial();
  InitLink();
  gLinkCallback = (int)LinkCB_RequestPlayerDataExchange;
  gLinkVSyncDisabled = 0;
  gLinkErrorOccurred = 0;
  gSuppressLinkErrorMessage = 0;
  ResetBlockReceivedFlags();
  v0 = 0;
  sDummy1 = 0;
  byte_3002A68 = 0;
  gLinkDummyBool = 0;
  gReceivedRemoteLinkPlayers = 0;
  do
  {
    gLinkPlayerPending[v0] = 1;
    u8_array_3002B78[v0] = 0;
    u8_array_3002B70[v0++] = 0;
  }
  while ( v0 <= 3 );
  CreateTask(Task_TriggerHandshake, 2);
  return v2;
}
