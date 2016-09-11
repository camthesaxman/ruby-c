int sub_80084C8()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !gLastRecvQueueCount )
  {
    BuildSendCmd(0x2FFEu);
    gLinkCallback = (int)sub_80084F4;
  }
  return v1;
}
