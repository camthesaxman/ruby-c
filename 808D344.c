signed int __fastcall sub_808D344(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r1@8
  char v3; // r0@8
  char *v4; // r1@11
  signed int result; // r0@20
  __int16 v6; // [sp+4h] [bp-14h]@4

  v1 = a1;
  if ( (unsigned __int8)byte_3001BAC > 6u )
  {
def_808D362:
    if ( !(v202F38F & 0x80) )
    {
      SetVBlankCallback(0);
      *(_BYTE *)(v202FFB4 + 1610) = v1;
      sub_8091060(0);
      v400001A = *(_BYTE *)(v202FFB4 + 1581);
      LZ77UnCompVram(&gPokedexMenu_Gfx, 100663296);
      LZ77UnCompVram(&gUnknown_08E96738, 100689920);
      LZ77UnCompVram(&gUnknown_08E9C6DC, 100694016);
      v6 = 0;
      v40000D4 = &v6;
      v40000D8 = 100687872;
      v40000DC = -2130705792;
      if ( v1 )
        LZ77UnCompVram(&gUnknown_08E96994, 100689152);
      else
        LZ77UnCompVram(&gUnknown_08E96888, 100689152);
      ResetPaletteFade();
      if ( v1 )
      {
        v2 = (_BYTE *)(v202FFB4 + 1612);
        v3 = *(_BYTE *)(v202FFB4 + 1612) | 1;
      }
      else
      {
        v2 = (_BYTE *)(v202FFB4 + 1612);
        v3 = *(_BYTE *)(v202FFB4 + 1612) & 0xFE;
      }
      *v2 = v3;
      sub_808D640();
      byte_3001BAC = 1;
    }
_0808D634:
    result = 0;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_808D362;
      case 1:
        ResetSpriteData();
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 8;
        LoadCompressedObjectPic((_DWORD *)"Ètè\b");
        LoadSpritePalettes((int)&gUnknown_083A05DC);
        sub_808E978(v1);
        v4 = &byte_3001BAC;
        goto _0808D5E4;
      case 2:
        SetUpWindowConfig((int)&gWindowConfig_81E7048);
        InitMenuWindow();
        LZ77UnCompVram(&gUnknown_0839FA7C, 100728704);
        v4 = &byte_3001BAC;
        goto _0808D5E4;
      case 3:
        if ( !a1 )
          sub_808D690(*(_BYTE *)(v202FFB4 + 1554), *(_BYTE *)(v202FFB4 + 1558));
        sub_808E0CC(*(_WORD *)(v202FFB4 + 1550), 14);
        *(_BYTE *)(v202FFB4 + 1616) = 0;
        *(_WORD *)(v202FFB4 + 1620) = 0;
        v4 = &byte_3001BAC;
        goto _0808D5E4;
      case 4:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_808C0B8);
        v4 = &byte_3001BAC;
        goto _0808D5E4;
      case 5:
        v4000048 = 16191;
        v400004A = 7487;
        v4000040 = 0;
        v4000044 = 0;
        v4000042 = 0;
        v4000046 = 0;
        v4000050 = 0;
        v4000052 = 0;
        v4000054 = 0;
        v400000E = 3843;
        v400000A = 3329;
        v4000008 = 3072;
        v4000000 = -24768;
        v4 = &byte_3001BAC;
_0808D5E4:
        ++*v4;
        goto _0808D634;
      case 6:
        if ( v202F38F & 0x80 )
          goto _0808D634;
        byte_3001BAC = 0;
        result = 1;
        break;
    }
  }
  return result;
}
