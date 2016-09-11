int __fastcall sub_80C255C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( gReceivedRemoteLinkPlayers && (unsigned __int8)GetLinkPlayerCount() == 4 )
  {
    CreateTask((int)sub_80C25A4, 0);
    dword_3004B20[10 * v1] = (int)TaskDummy;
  }
  return v3;
}
