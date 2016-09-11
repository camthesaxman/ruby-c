int __fastcall sub_80A9CF8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !gReceivedRemoteLinkPlayers )
  {
    DestroyTask(dword_3004B20[10 * a1 + 7]);
    DestroyTask(v1);
    sub_8071C20();
  }
  return v3;
}
