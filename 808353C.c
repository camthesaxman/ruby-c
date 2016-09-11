int __fastcall sub_808353C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r0@5
  int v4; // r1@5
  void *v5; // r2@6
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 )
  {
    if ( v2 == 1 && !gReceivedRemoteLinkPlayers )
    {
      script_env_2_enable_and_set_ctx_running();
      DestroyTask(v1);
    }
  }
  else if ( v202E8DC != 1 || (v3 = (unsigned __int8)GetLinkPlayerCount(), v4 = 0, v3 <= 0) )
  {
_08083586:
    script_env_2_enable_and_set_ctx_running();
    DestroyTask(v1);
  }
  else
  {
    v5 = &gLinkPlayers;
    while ( *((_WORD *)v5 + 13) != 1 )
    {
      v5 = (char *)v5 + 28;
      if ( ++v4 >= v3 )
        goto _08083586;
    }
    v202E8DC = 7;
    sub_8008480();
    LOWORD(dword_3004B20[10 * v1 + 2]) = 1;
  }
  return v7;
}
