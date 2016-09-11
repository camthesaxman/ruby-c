int __fastcall sub_8083AAC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( v202F38F & 0x80 )
      return v5;
_08083B14:
    ++*((_WORD *)v2 + 4);
    return v5;
  }
  if ( v3 <= 1 )
  {
    if ( *((_WORD *)v2 + 4) )
      return v5;
    script_env_2_enable();
    fade_screen(1, 0);
    ClearLinkCallback_2();
    goto _08083B14;
  }
  if ( v3 == 2 )
  {
    v20297D8 = 0;
    v20297D9 = 0;
    m4aMPlayAllStop(0);
    sub_800832C();
    goto _08083B14;
  }
  if ( v3 == 3 && !gReceivedRemoteLinkPlayers )
  {
    SetMainCallback2((int)sub_8047CD8);
    DestroyTask(v1);
  }
  return v5;
}
