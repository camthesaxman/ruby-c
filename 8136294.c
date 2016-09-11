int sub_8136294()
{
  unsigned int v0; // r0@1
  int v1; // r1@4
  int v3; // [sp+0h] [bp-10h]@25
  int v4; // [sp+Ch] [bp-4h]@35

  v0 = *(_BYTE *)(v2039304 + 80);
  if ( v0 <= 0x16 )
  {
    switch ( v0 )
    {
      case 0u:
        v2006DAC = is_c1_link_related_active();
        if ( !v2006DAC )
        {
          *(_BYTE *)(v2039304 + 85) = 0;
          launch_c3_walk_stairs_and_run_once((int)sub_81365A0);
          v1 = v2039304;
          goto _08136528;
        }
        return v4;
      case 1u:
        ResetSpriteData();
        FreeAllSpritePalettes();
        goto _08136524;
      case 2u:
        SetVBlankCallback(0);
        goto _08136524;
      case 3u:
        SetUpWindowConfig((int)&gWindowConfig_81E7080);
        goto _08136524;
      case 4u:
        MultistepInitMenuWindowBegin();
        goto _08136524;
      case 5u:
        if ( MultistepInitMenuWindowContinue() )
          goto _08136524;
        return v4;
      case 6u:
        v20076AA = 0;
        v20087E0 = 0;
        v200030C = 32;
        v1 = v2039304;
        goto _08136528;
      case 7u:
        sub_80F2688();
        ++*(_BYTE *)(v2039304 + 80);
        goto _081363C8;
      case 8u:
_081363C8:
        if ( !(sub_80F26BC() << 24) )
          goto _08136524;
        return v4;
      case 9u:
        sub_80F2C80(1u);
        ++*(_BYTE *)(v2039304 + 80);
        goto _081363EE;
      case 0xAu:
_081363EE:
        if ( !(sub_80F2CBC(1u) << 24) )
          goto _08136524;
        return v4;
      case 0xBu:
        gKeyRepeatStartDelay = 20;
        v2008828 = calc_player_party_count();
        v2009344 = 0;
        v2008768 = 0;
        sub_80F4BD0();
        v200D160 = 0;
        goto _08136524;
      case 0xCu:
        if ( sub_80F1778() << 24 )
          return v4;
        v400001A = 6;
        v400001E = 6;
        goto _08136524;
      case 0xDu:
        sub_80F2E18(0);
        *(_WORD *)(v2008768 + 38) = -40;
        goto _08136524;
      case 0xEu:
        if ( !(sub_80F170C() << 24) )
          goto _08136524;
        return v4;
      case 0xFu:
        sub_80F33A8();
        goto _08136524;
      case 0x10u:
        v3 = 0;
        v40000D4 = &v3;
        v40000D8 = 100726784;
        v40000DC = -2063597056;
        v4000016 = 0;
        v4000014 = 0;
        v400000A = 7936;
        v1 = v2039304;
        goto _08136528;
      case 0x11u:
        sub_80F567C((_BYTE *)0x2008FF0, 33591300);
        sub_80F5B38();
        goto _08136524;
      case 0x12u:
        if ( !(sub_80F5B50() << 24) )
          goto _08136524;
        return v4;
      case 0x13u:
        sub_80F556C(33591300);
        goto _08136524;
      case 0x14u:
        sub_80F1934();
_08136524:
        v1 = v2039304;
_08136528:
        ++*(_BYTE *)(v1 + 80);
        return v4;
      case 0x15u:
        v4000040 = 240;
        v4000042 = 155;
        v4000044 = 12915;
        v4000046 = 12915;
        v4000048 = 16191;
        v400004A = 27;
        v4000012 = 40;
        v4000000 = 32576;
        goto _0813656C;
      case 0x16u:
_0813656C:
        *(_BYTE *)(v2039304 + 85) = 1;
        launch_c3_walk_stairs_and_run_once((int)sub_81365C8);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
