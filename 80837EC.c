int __fastcall sub_80837EC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( gReceivedRemoteLinkPlayers == 1 && (unsigned __int8)IsLinkPlayerDataExchangeComplete() == 1 )
  {
    sub_800826C();
    sub_8007B14();
    DestroyTask(v1);
  }
  return v3;
}
