int LinkCB_RequestPlayerDataExchange()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( gLinkStatus & 0x20 )
    BuildSendCmd(0x2222u);
  gLinkCallback = 0;
  return v1;
}
