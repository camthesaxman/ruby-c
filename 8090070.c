int __fastcall sub_8090070(unsigned __int8 a1)
{
  char *v1; // r1@5
  char *v2; // r4@9
  _WORD *v3; // r2@9
  char *v4; // r4@10
  _WORD *v5; // r2@10
  char v7; // [sp+4h] [bp-34h]@7
  int v8; // [sp+34h] [bp-4h]@16

  if ( (unsigned __int8)byte_3001BAC > 9u )
  {
def_809008E:
    if ( !(v202F38F & 0x80) )
    {
      *(_BYTE *)(v202FFB4 + 1610) = 7;
      dword_3005CEC = dword_300177C;
      SetVBlankCallback(0);
      sub_8091060(512);
      *(_BYTE *)(v202FFB4 + 1613) = 3;
      byte_3001BAC = 1;
    }
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_809008E;
      case 1:
        LZ77UnCompVram(&gPokedexMenu_Gfx, 100663296);
        LZ77UnCompVram(&gUnknown_0839F988, 100691968);
        v1 = &byte_3001BAC;
        goto _08090368;
      case 2:
        sub_8090540(13);
        sub_8090644(3, 13);
        sub_808D640();
        v1 = &byte_3001BAC;
        goto _08090368;
      case 3:
        SetUpWindowConfig((int)&gWindowConfig_81E702C);
        InitMenuWindow();
        v7 = -1;
        StringAppend(&v7, "ÍÃÔ¿");
        StringAppend(&v7, (_BYTE *)0x2024EA4);
        sub_8072BD8(&v7, 3, 0xFu, 0xC0u);
        v1 = &byte_3001BAC;
        goto _08090368;
      case 4:
        ResetPaletteFade();
        v1 = &byte_3001BAC;
        goto _08090368;
      case 5:
        v2 = &gSprites[68 * (unsigned __int8)sub_8091A4C(v2024EAC, 152, 56, 0)];
        v2[1] = v2[1] & 0xFC | 1;
        v2[3] = v2[3] & 0xC1 | 2;
        v2[5] &= 0xF3u;
        v3 = (_WORD *)v202FFBC;
        *((_WORD *)v2 + 19) = gPokedexEntries[18 * *v202FFBC + 16];
        SetOamMatrix(1, gPokedexEntries[18 * *v3 + 15], 0, 0, gPokedexEntries[18 * *v3 + 15]);
        LoadPalette((int)&gUnknown_083B4EC4, 16 * (((unsigned int)(unsigned __int8)v2[5] >> 4) + 16), 32);
        v1 = &byte_3001BAC;
        goto _08090368;
      case 6:
        v4 = &gSprites[68 * (unsigned __int8)sub_80918EC(*v202FFBC, 88, 56, 1)];
        v4[1] = v4[1] & 0xFC | 1;
        v4[3] = v4[3] & 0xC1 | 4;
        v4[5] &= 0xF3u;
        v5 = (_WORD *)v202FFBC;
        *((_WORD *)v4 + 19) = gPokedexEntries[18 * *v202FFBC + 14];
        SetOamMatrix(2, gPokedexEntries[18 * *v5 + 13], 0, 0, gPokedexEntries[18 * *v5 + 13]);
        LoadPalette((int)&gUnknown_083B4EC4, 16 * (((unsigned int)(unsigned __int8)v4[5] >> 4) + 16), 32);
        v1 = &byte_3001BAC;
        goto _08090368;
      case 7:
        BeginNormalPaletteFade(-21, 0, 0x10u, 0, 0);
        SetVBlankCallback(dword_3005CEC);
        v1 = &byte_3001BAC;
        goto _08090368;
      case 8:
        v4000050 = 0;
        v4000052 = 0;
        v4000054 = 0;
        v400000C = 3587;
        v4000000 = 7744;
        v1 = &byte_3001BAC;
_08090368:
        ++*v1;
        break;
      case 9:
        if ( !(v202F38F & 0x80) )
        {
          *(_BYTE *)(v202FFB4 + 1615) = 0;
          byte_3001BAC = 0;
          dword_3004B20[10 * a1] = (int)sub_80903D0;
        }
        break;
    }
  }
  return v8;
}
