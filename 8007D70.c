int LinkCB_BlockSendBegin()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (unsigned int)++sBlockSendDelayCounter > 2 )
    gLinkCallback = (int)LinkCB_BlockSend;
  return v1;
}
