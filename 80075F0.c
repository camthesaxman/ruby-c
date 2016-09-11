int __fastcall LinkMain2(__int16 *a1)
{
  int result; // r0@2
  unsigned int v2; // r1@3
  int v3; // r0@6

  if ( gLinkOpen )
  {
    v2 = 0;
    do
    {
      gSendCmd[v2] = 0;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 7 );
    gLinkHeldKeys = *a1;
    if ( gLinkStatus & 0x40 )
    {
      ProcessRecvCmds(v4000128 << 26 >> 30);
      v3 = gLinkCallback;
      if ( gLinkCallback )
        v3 = call_via_r0(gLinkCallback);
      CheckErrorStatus(v3);
    }
    result = (unsigned __int16)gLinkStatus;
  }
  else
  {
    result = 0;
  }
  return result;
}
