int sub_807ADA8()
{
  signed int v0; // r0@13
  unsigned __int8 v1; // r0@27
  unsigned __int8 v2; // r4@27
  int v3; // r2@27
  unsigned __int16 v4; // r0@27
  unsigned __int8 v5; // r0@28
  unsigned __int8 v6; // r4@28
  int v7; // r2@28
  unsigned __int16 v8; // r0@28
  int v9; // r0@30
  int v11; // [sp+4h] [bp-18h]@4
  int v12; // [sp+18h] [bp-4h]@31

  if ( v201FFFF > 0x13u )
  {
def_807ADC2:
    SetHBlankCallback((int)sub_800FCD4);
    v9 = SetVBlankCallback((int)sub_800FCFC);
    sub_807B06C(v9);
    BeginHardwarePaletteFade(0xFFu, 0, 0x10u, 0, 1);
    v202F390 &= 0x7Fu;
    SetMainCallback2((int)sub_800F808);
  }
  else
  {
    switch ( v201FFFF )
    {
      case 0u:
        dp12_8087EA4(v201FFFF);
        SetUpWindowConfig((int)&gWindowConfig_81E6C58);
        ResetPaletteFade();
        InitWindowFromConfig((int)&unk_3004210, (int)&gWindowConfig_81E6C58);
        word_30042A4 = 0;
        word_30042A0 = 0;
        word_30042C0 = 0;
        word_30041B4 = 0;
        word_3004288 = 0;
        word_3004280 = 0;
        word_30041B0 = 0;
        word_30041B8 = 0;
        break;
      case 1u:
        v11 = 0;
        CpuFastSet(&v11, 100663296, 16801792);
        break;
      case 2u:
        if ( sub_800E414(v201FFFE) << 24 )
          goto _0807AEF8;
        ++v201FFFE;
        goto _0807AF38;
      case 3u:
        ResetSpriteData();
        break;
      case 4u:
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 4;
        break;
      case 5u:
        sub_8031EE8();
        break;
      case 6u:
        if ( sub_8031C30(v201FFFE) << 24 )
        {
_0807AEF8:
          v201FFFE = 0;
        }
        else
        {
          ++v201FFFE;
_0807AF38:
          --v201FFFF;
        }
        break;
      case 7u:
        v0 = 0;
        goto _0807AF26;
      case 8u:
        v0 = 1;
        goto _0807AF26;
      case 9u:
        v0 = 2;
        goto _0807AF26;
      case 0xAu:
        v0 = 3;
_0807AF26:
        if ( !(sub_807B094(v0) << 24) )
          goto _0807AF38;
        break;
      case 0xBu:
        sub_807B184(0);
        break;
      case 0xCu:
        sub_807B184(1);
        break;
      case 0xDu:
        sub_807B184(2);
        break;
      case 0xEu:
        sub_807B184(3);
        break;
      case 0xFu:
        sub_807B508(0);
        break;
      case 0x10u:
        sub_807B508(1);
        break;
      case 0x11u:
        sub_807B508(2);
        break;
      case 0x12u:
        sub_807B508(3);
        break;
      case 0x13u:
        sub_80327CC();
        v1 = battle_get_side_with_given_state(1u);
        v2 = v1;
        v4 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), 11, v3);
        sub_8032984(v2, v4);
        if ( battle_type_is_double() << 24 )
        {
          v5 = battle_get_side_with_given_state(3u);
          v6 = v5;
          v8 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v5 + 0x2024A6A), 11, v7);
          sub_8032984(v6, v8);
        }
        sub_802E3E4(*(_BYTE *)(v2024E6C + 0x2024E60));
        break;
      default:
        goto def_807ADC2;
    }
  }
  ++v201FFFF;
  return v12;
}
