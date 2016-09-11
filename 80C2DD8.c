int __fastcall sub_80C2DD8(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !gReceivedRemoteLinkPlayers )
  {
    v203869A = gReceivedRemoteLinkPlayers;
    sub_80C3764();
    dword_3004B20[10 * v1] = (int)sub_80C2E14;
  }
  return v3;
}
