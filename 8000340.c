int UpdateLinkAndCallCallbacks()
{
  int v1; // [sp+4h] [bp-4h]@0

  gLinkStatus = LinkMain1(&gShouldAdvanceLinkState, &gSendCmd, &gRecvCmds);
  LinkMain2(&word_300179C);
  if ( !(gLinkStatus & 0x100) || sub_8055940() != 1 )
    CallCallbacks();
  return v1;
}
