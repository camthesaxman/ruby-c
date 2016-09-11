int sub_804B2B0()
{
  int result; // r0@2

  if ( gReceivedRemoteLinkPlayers )
    result = (unsigned __int8)GetMultiplayerId();
  else
    result = 0;
  return result;
}
