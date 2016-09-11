int __fastcall sub_808FA64(unsigned __int8 a1)
{
  int v1; // r4@1
  char *v2; // r1@5
  __int16 v3; // r0@9
  int *v4; // r1@9
  char *v5; // r1@9
  __int16 v7; // [sp+4h] [bp-20h]@6
  unsigned int v8; // [sp+8h] [bp-1Ch]@10
  unsigned int v9; // [sp+Ch] [bp-18h]@10
  unsigned int v10; // [sp+10h] [bp-14h]@12
  unsigned int v11; // [sp+14h] [bp-10h]@12
  int v12; // [sp+20h] [bp-4h]@18

  v1 = a1;
  if ( (unsigned __int8)byte_3001BAC > 0xAu )
  {
def_808FA82:
    if ( !(v202F38F & 0x80) )
    {
      m4aMPlayStop(&unk_3007380);
      *(_BYTE *)(v202FFB4 + 1610) = 6;
      dword_3005CEC = dword_300177C;
      SetVBlankCallback(0);
      sub_8091060(512);
      *(_BYTE *)(v202FFB4 + 1613) = 2;
      byte_3001BAC = 1;
    }
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_808FA82;
      case 1:
        LZ77UnCompVram(&gPokedexMenu_Gfx, 100663296);
        LZ77UnCompVram(&gUnknown_0839F8A0, 100691968);
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 2:
        sub_8090540(13);
        sub_8090644(2, 13);
        sub_808D640();
        v7 = 0;
        v40000D4 = &v7;
        v40000D8 = 100726784;
        v40000DC = -2130705792;
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 3:
        SetUpWindowConfig((int)&gWindowConfig_81E702C);
        InitMenuWindow();
        ResetPaletteFade();
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 4:
        MenuPrint((int)&gUnknown_0840E02A, 10, 4u);
        sub_8091260(*v202FFBC, 10, 6, 2);
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 5:
        v3 = sub_80918EC(*v202FFBC, 48, 56, 0);
        v4 = &dword_3004B20[10 * v1];
        *((_WORD *)v4 + 8) = v3;
        v5 = &gSprites[68 * *((_WORD *)v4 + 8)];
        v5[5] &= 0xF3u;
        byte_3005E98 = 0;
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 6:
        v8 = ((v8 & 0xFFFF0000 | 0x4020) & 0xFF00FFFF | 0x1F0000) & 0xFFFFFF | 0x8000000;
        v9 = (v9 & 0xFFFF00FF | 0x1E00) & 0xFFFFFF00 | 0xC;
        if ( sub_8119E3C() << 24 )
        {
          ++byte_3001BAC;
          byte_3005E98 = 0;
        }
        return v12;
      case 7:
        v10 = ((v10 & 0xFFFF0000 | 0x3000) & 0xFF00FFFF | 0xE0000) & 0xFFFFFF | 0x9000000;
        v11 = (v11 & 0xFFFFFF00 | 0x12) & 0xFFFF00FF | 0x300;
        if ( !(sub_811A3CC() << 24) )
          return v12;
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 8:
        BeginNormalPaletteFade(-21, 0, 0x10u, 0, 0);
        SetVBlankCallback(dword_3005CEC);
        v2 = &byte_3001BAC;
        goto _0808FDA0;
      case 9:
        v4000050 = 0;
        v4000052 = 0;
        v4000054 = 0;
        v400000C = 3586;
        v4000008 = 7943;
        v400000A = 3328;
        v4000000 = 8000;
        v2 = &byte_3001BAC;
_0808FDA0:
        ++*v2;
        break;
      case 0xA:
        *(_BYTE *)(v202FFB4 + 1615) = 0;
        byte_3001BAC = 0;
        dword_3004B20[10 * a1] = (int)sub_808FDF8;
        break;
    }
  }
  return v12;
}
