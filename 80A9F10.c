int __fastcall sub_80A9F10(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( gReceivedRemoteLinkPlayers )
  {
    v2038695 = GetMultiplayerId();
    if ( (unsigned __int8)GetLinkPlayerCount() == 4 )
    {
      v203869A = 1;
      SwitchTaskToFollowupFunc(v1);
    }
  }
  return v3;
}
