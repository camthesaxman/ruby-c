int sub_8008454()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !gLastRecvQueueCount )
  {
    BuildSendCmd(0x5FFFu);
    gLinkCallback = (int)sub_80083E0;
  }
  return v1;
}
