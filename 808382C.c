int __fastcall sub_808382C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@4
  __int16 v5; // r0@5
  signed __int16 v6; // r0@20
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        fade_screen(1, 0);
        gLinkType = 8721;
        ClearLinkCallback_2();
        goto _080838BE;
      case 1u:
        v4 = v202F38F & 0x80;
        goto _080838BA;
      case 2u:
        v5 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v5;
        if ( v5 > 20 )
          goto _080838BE;
        return v8;
      case 3u:
        sub_800832C();
        goto _080838BE;
      case 4u:
        v4 = (unsigned __int8)gReceivedRemoteLinkPlayers;
_080838BA:
        if ( !v4 )
_080838BE:
          ++*((_WORD *)v2 + 4);
        return v8;
      case 5u:
        if ( dword_3002974[0] & 1 )
          current_map_music_set__default_for_battle(0x1CCu);
        else
          current_map_music_set__default_for_battle(0x1CBu);
        if ( v202E8CC == 2 )
        {
          v6 = 11;
        }
        else if ( (signed int)v202E8CC > 2 )
        {
          if ( v202E8CC != 5 )
            goto _0808392E;
          sub_80C5604();
          v6 = 75;
        }
        else
        {
          if ( v202E8CC != 1 )
            goto _0808392E;
          v6 = 10;
        }
        v20239F8 = v6;
_0808392E:
        SetMainCallback2((int)sub_800E7C4);
        dword_3001778 = (int)sub_8083958;
        DestroyTask(v1);
        break;
      default:
        return v8;
    }
  }
  return v8;
}
