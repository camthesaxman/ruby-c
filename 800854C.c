int CheckErrorStatus()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( gLinkOpen && gLinkStatus & 0x7F000 )
  {
    if ( !gSuppressLinkErrorMessage )
    {
      sErrorLinkStatus = gLinkStatus;
      sErrorLastRecvQueueCount = (unsigned __int8)gLastRecvQueueCount;
      sErrorLastSendQueueCount = (unsigned __int8)gLastSendQueueCount;
      SetMainCallback2((int)CB2_LinkError);
    }
    gLinkErrorOccurred = 1;
    CloseLink();
  }
  return v1;
}
