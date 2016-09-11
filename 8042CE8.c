int sub_8042CE8()
{
  char v0; // r0@4
  char *v1; // r1@5
  char v2; // r0@7
  int v3; // r1@7
  void *v4; // r3@10
  signed int v5; // r4@10
  unsigned int v6; // r5@10
  int v8; // [sp+10h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 8u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v4000000 = 0;
        dword_300481C = 33652736;
        v2018004 = v202E8CC;
        v201803A = 0;
        ResetTasks(33652794);
        ResetSpriteData();
        FreeAllSpritePalettes();
        SetVBlankCallback((int)sub_8042C6C);
        ++byte_3001BAC;
        v202E8CE = current_map_music_get();
        return v8;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E6F84);
        InitWindowFromConfig(dword_300481C + 8, (int)&gWindowConfig_81E6F84);
        v0 = SetTextWindowBaseTileNum(20);
        *(_BYTE *)(dword_300481C + 56) = v0;
        LoadTextWindowGraphics(dword_300481C + 8);
        goto _08042F04;
      case 2:
        LZDecompressVram((int)&gUnknown_08D00000, 100663296);
        CpuSet(&gUnknown_08D00524, 0x2000000, 2048);
        v40000D4 = 0x2000000;
        v40000D8 = 100673536;
        v40000DC = -2147483008;
        LoadCompressedPalette(&gUnknown_08D004E0, 0, 32);
        v1 = &byte_3001BAC;
        goto _08042F0A;
      case 3:
        LoadSpriteSheet((int)&gUnknown_0820A3B0);
        LoadSpriteSheet((int)&gUnknown_0820A3B8);
        LoadSpritePalette((int)"Øš \b1Ô");
        goto _08042F04;
      case 4:
        v2 = CreateSprite((int)"901Ôx£ \b £ \b", 120, 75);
        v3 = dword_300481C;
        *(_BYTE *)dword_300481C = v2;
        sub_80429EC(*(_BYTE *)(dword_300481C + 4), v3, (int)&dword_300481C);
        v1 = &byte_3001BAC;
        goto _08042F0A;
      case 5:
        sub_8042B68(0, 0, *(_BYTE *)(dword_300481C + 4));
        goto _08042F04;
      case 6:
        *(_BYTE *)(dword_300481C + 1) = sub_8042B68(0, 1, *(_BYTE *)(dword_300481C + 4));
        v1 = &byte_3001BAC;
        goto _08042F0A;
      case 7:
        v400000C = 19462;
        LoadPalette(&gUnknown_0820C9F8, 16, 160);
        v4 = &gUnknown_0820CA98;
        v5 = 100679680;
        v6 = 4864;
        do
        {
          v40000D4 = v4;
          v40000D8 = v5;
          v40000DC = -2147481600;
          v4 = (char *)v4 + 4096;
          v5 += 4096;
          v6 -= 4096;
        }
        while ( v6 > 0x1000 );
        v40000D4 = &gUnknown_0820F798;
        v40000D8 = 100687872;
        v40000DC = -2147481600;
_08042F04:
        v1 = &byte_3001BAC;
_08042F0A:
        ++*v1;
        break;
      case 8:
        v400000A = 1281;
        v4000010 = 0;
        v4000012 = 0;
        v4000014 = 0;
        v4000016 = 0;
        v4000018 = 0;
        v400001A = 0;
        SetMainCallback2((int)sub_804300C);
        *(_BYTE *)(dword_300481C + 2) = 0;
        break;
      default:
        return v8;
    }
  }
  return v8;
}
