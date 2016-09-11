int __fastcall sub_8081050(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _WORD *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *v2;
  if ( v3 == 1 )
  {
    if ( !sub_8080E64() && sub_8054034() << 24 )
    {
      sub_800832C();
_080810AC:
      ++*v2;
      return v5;
    }
  }
  else
  {
    if ( v3 <= 1 )
    {
      if ( *v2 )
        return v5;
      ClearLinkCallback_2();
      fade_screen(1, 0);
      sub_8053FF8();
      audio_play(9u);
      goto _080810AC;
    }
    if ( v3 == 2 && !gReceivedRemoteLinkPlayers )
    {
      warp_in();
      SetMainCallback2((int)c2_load_new_map);
      DestroyTask(v1);
    }
  }
  return v5;
}
