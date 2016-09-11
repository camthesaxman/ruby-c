int sub_8008350()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !gLastRecvQueueCount )
  {
    BuildSendCmd(0x5FFFu);
    gLinkCallback = (int)sub_800837C;
  }
  return v1;
}
