int sub_804D63C()
{
  char v0; // r5@1
  int v2; // [sp+Ch] [bp-4h]@0

  sub_804B2B0();
  v0 = GetBlockRecievedStatus();
  if ( v0 & 1 )
  {
    if ( LOWORD(gBlockRecvBuffer[0]) == 56506 )
      SetMainCallback2((int)sub_804D588);
    if ( LOWORD(gBlockRecvBuffer[0]) == 43981 )
      *(_BYTE *)(dword_3004828 + 156) = 1;
    ResetBlockReceivedFlag(0);
  }
  if ( v0 & 2 )
  {
    if ( (unsigned __int16)word_3002C80 == 43981 )
      *(_BYTE *)(dword_3004828 + 157) = 1;
    ResetBlockReceivedFlag(1u);
  }
  return v2;
}
