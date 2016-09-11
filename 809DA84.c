signed int sub_809DA84()
{
  char *v0; // r1@4
  signed int v1; // r2@6
  unsigned int v2; // r3@6
  int v3; // r0@27
  int v4; // r0@33
  int v5; // r0@37
  signed int result; // r0@43
  int v7; // [sp+4h] [bp-18h]@7

  if ( (unsigned __int8)byte_3001BAC > 0x16u )
  {
def_809DAA0:
    SetVBlankCallback((int)sub_809D85C);
    BeginHardwarePaletteFade(0xFFu, 0, 0x10u, 0, 1);
    SetMainCallback2((int)sub_809D844);
    v202F390 &= 0x7Fu;
    result = 1;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        ResetSpriteData();
        goto _0809DDE8;
      case 1:
        remove_some_task();
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 2:
        FreeAllSpritePalettes();
        goto _0809DDE8;
      case 3:
        v1 = 100663296;
        v2 = 0x10000;
        do
        {
          v7 = 0;
          v40000D4 = &v7;
          v40000D8 = v1;
          v40000DC = -2063596544;
          v1 += 4096;
          v2 -= 4096;
        }
        while ( v2 > 0x1000 );
        v7 = 0;
        v40000D4 = &v7;
        v40000D8 = v1;
        v40000DC = (v2 >> 2) | 0x85000000;
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 4:
        sub_809DE64();
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 5:
        SetUpWindowConfig((int)&gWindowConfig_81E6E6C);
        goto _0809DDE8;
      case 6:
        MultistepInitMenuWindowBegin();
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 7:
        if ( MultistepInitMenuWindowContinue() )
          goto _0809DDE8;
        goto _0809DE38;
      case 8:
        sub_809DA1C();
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 9:
        v40000D4 = &gSummaryScreenButtonTiles;
        v40000D8 = 100716864;
        v40000DC = -2147483520;
        v2018074 = 0;
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0xA:
        if ( !(sub_809DF00() << 24) )
          goto _0809DE38;
        v2018074 = 0;
        goto _0809DDE8;
      case 0xB:
        sub_80A18C4();
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0xC:
        sub_809F678(33652752);
        if ( sub_80A1CD8(33652752) << 24 )
          sub_80A12D0(10);
        else
          sub_80A12D0(0);
        sub_80A0EA4(33652752);
        goto _0809DDE8;
      case 0xD:
        sub_80A1950();
        sub_80A1D84(33652752);
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0xE:
        sub_80A1DE8(33652752);
        v2018074 = 0;
        goto _0809DDE8;
      case 0xF:
        v201800C = sub_809F6B4(33652752, 33652852);
        if ( v201800C == 255 )
          goto _0809DE38;
        v2018074 = 0;
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0x10:
        v3 = sub_809E044();
        sub_80A0EE8(v3);
        goto _0809DDE8;
      case 0x11:
        if ( v201800B <= 1u )
          call_via_r0(*(&gUnknown_083C1580 + v201800B));
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0x12:
        sub_809FAC8(33652752);
        goto _0809DDE8;
      case 0x13:
        call_via_r1(33652752, *(&gUnknown_083C1598 + v201800B));
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0x14:
        v4 = GetMonData(33652752, 45, 1084);
        if ( v4 )
          word_30041B0 = 256;
        else
          word_30041B0 = v4;
        goto _0809DDE8;
      case 0x15:
        sub_809EBC4();
        if ( v2018079 )
        {
          sub_80A1488(0, 0);
          v5 = sub_80A1654(0, 0);
        }
        else
        {
          sub_80A1488(10, 0);
          v5 = sub_80A1654(10, 0);
        }
        sub_80A0DD0(v5);
        v0 = &byte_3001BAC;
        goto _0809DDEE;
      case 0x16:
        if ( sub_8055870() != 1 )
        {
_0809DDE8:
          v0 = &byte_3001BAC;
_0809DDEE:
          ++*v0;
        }
_0809DE38:
        result = 0;
        break;
      default:
        goto def_809DAA0;
    }
  }
  return result;
}
