int __fastcall sub_8083C50(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r5@1
  int *v3; // r0@1
  int v4; // r1@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 4) + 1;
  *((_WORD *)v3 + 4) = v4;
  if ( v4 << 16 > 19660800 )
  {
    CloseLink();
    SetMainCallback2((int)CB2_LinkError);
    DestroyTask(v1);
  }
  if ( gReceivedRemoteLinkPlayers )
    DestroyTask(v2);
  return v6;
}
