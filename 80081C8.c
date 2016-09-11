int __fastcall sub_80081C8(char a1)
{
  void *v1; // r4@1
  void *v2; // r3@1
  signed int v3; // r2@1
  int v4; // r6@2
  int v5; // r7@2
  int v6; // r0@2
  int v7; // r6@2
  int v8; // r7@2
  int v10; // [sp+10h] [bp-4h]@0

  gSavedLinkPlayerCount = a1;
  gSavedMultiplayerId = GetMultiplayerId();
  v1 = &gLinkPlayers;
  v2 = &gSavedLinkPlayers;
  v3 = 3;
  do
  {
    v4 = *((_DWORD *)v1 + 1);
    v5 = *((_DWORD *)v1 + 2);
    *(_DWORD *)v2 = *(_DWORD *)v1;
    *((_DWORD *)v2 + 1) = v4;
    *((_DWORD *)v2 + 2) = v5;
    v6 = (int)v2 + 12;
    v7 = *((_DWORD *)v1 + 4);
    v8 = *((_DWORD *)v1 + 5);
    *(_DWORD *)v6 = *((_DWORD *)v1 + 3);
    *(_DWORD *)(v6 + 4) = v7;
    *(_DWORD *)(v6 + 8) = v8;
    *((_DWORD *)v2 + 6) = *((_DWORD *)v1 + 6);
    v1 = (char *)v1 + 28;
    v2 = (char *)v2 + 28;
    --v3;
  }
  while ( v3 >= 0 );
  return v10;
}
