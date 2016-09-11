int __fastcall sub_808F2B0(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r2@4
  int *v3; // r1@4
  char *v4; // r1@9
  unsigned __int16 v5; // r0@13
  int *v6; // r4@18
  char *v7; // r1@19
  signed int v8; // r3@20
  int *v9; // r1@20
  char v10; // r3@27
  unsigned __int16 v11; // r0@28
  int *v12; // r0@33
  int v14; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)byte_3001BAC > 0xAu )
  {
def_808F2CE:
    if ( !(v202F38F & 0x80) )
    {
      *(_BYTE *)(v202FFB4 + 1610) = 1;
      *(_BYTE *)(v202FFB4 + 1614) = 0;
      dword_3005CEC = dword_300177C;
      SetVBlankCallback(0);
      v2 = 0;
      v3 = &dword_3004B20[10 * v1];
      if ( *((_WORD *)v3 + 5) )
        v2 = 4096;
      if ( *((_WORD *)v3 + 6) )
        v2 |= 0x200u;
      sub_8091060(v2);
      byte_3001BAC = 1;
    }
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_808F2CE;
      case 1:
        LZ77UnCompVram(&gPokedexMenu_Gfx, 100663296);
        LZ77UnCompVram(&gUnknown_08E96BD4, 100694016);
        sub_8091738(*v202FFBC, 2, 1020);
        v4 = &byte_3001BAC;
        goto _0808F682;
      case 2:
        sub_80904FC(13);
        sub_8090584(*(_BYTE *)(v202FFB4 + 1613), 13);
        sub_808D640();
        goto _0808F67C;
      case 3:
        SetUpWindowConfig((int)&gWindowConfig_81E7064);
        InitMenuWindow();
        v4 = &byte_3001BAC;
        goto _0808F682;
      case 4:
        if ( *(_WORD *)(v202FFB4 + 1554) )
        {
          sub_8091154(*v202FFBC, 13, 3);
        }
        else
        {
          v5 = NationalToHoennOrder(*v202FFBC);
          sub_8091154(v5, 13, 3);
        }
        sub_80911C8(*v202FFBC, 16, 3);
        MenuPrint((int)&DexText_UnknownPoke, 11, 5u);
        MenuPrint((int)&gUnknown_0840E013, 16, 7u);
        MenuPrint((int)"¬¬¬¬­¬", 16, 9u);
        if ( *(_BYTE *)(v202FFBC + 2) & 2 )
        {
          sub_8091304(&gPokedexEntries[18 * *v202FFBC], 11, 5);
          sub_8091458(gPokedexEntries[18 * *v202FFBC + 6], 16, 7);
          sub_8091564(gPokedexEntries[18 * *v202FFBC + 7], 16, 9);
          MenuPrint(*(_DWORD *)&gPokedexEntries[18 * *v202FFBC + 8], 2, 0xDu);
          sub_80917CC(14, 1020);
        }
        else
        {
          MenuPrint((int)&gUnknown_083A05F8, 2, 0xDu);
          LoadPalette(33745610, 49, 30);
        }
        goto _0808F67C;
      case 5:
        v6 = &dword_3004B20[10 * a1];
        if ( !*((_WORD *)v6 + 5) )
        {
          *((_WORD *)v6 + 8) = sub_80918EC(*v202FFBC, 48, 56, 0);
          v7 = &gSprites[68 * *((_WORD *)v6 + 8)];
          v7[5] &= 0xF3u;
        }
        goto _0808F67C;
      case 6:
        v8 = 0;
        v9 = &dword_3004B20[10 * a1];
        if ( *((_WORD *)v9 + 6) )
          v8 = 20;
        if ( *((_WORD *)v9 + 5) )
          v8 |= 1 << (((unsigned __int8)gSprites[68 * *((_WORD *)v9 + 8) + 5] >> 4) + 16);
        BeginNormalPaletteFade(~v8, 0, 0x10u, 0, 0);
        SetVBlankCallback(dword_3005CEC);
        goto _0808F67C;
      case 7:
        v4000050 = 0;
        v4000052 = 0;
        v4000054 = 0;
        v400000E = 3843;
        v400000A = 3328;
        v4000000 = 7744;
        v4 = &byte_3001BAC;
        goto _0808F682;
      case 8:
        if ( !(v202F38F & 0x80) )
        {
          v10 = byte_3001BAC++ + 1;
          if ( HIWORD(dword_3004B20[10 * a1 + 3]) )
          {
            byte_3001BAC = v10 + 1;
          }
          else
          {
            sub_8075398();
            v11 = NationalPokedexNumToSpecies(*v202FFBC);
            sub_8075090(v11, 0, 125, 0xAu);
          }
        }
        break;
      case 9:
        if ( !(sub_80753C4() << 24) )
        {
_0808F67C:
          v4 = &byte_3001BAC;
_0808F682:
          ++*v4;
        }
        break;
      case 0xA:
        v12 = &dword_3004B20[10 * a1];
        *((_WORD *)v12 + 4) = 0;
        *((_WORD *)v12 + 5) = 0;
        *((_WORD *)v12 + 6) = 1;
        *((_WORD *)v12 + 7) = 1;
        *v12 = (int)sub_808F6CC;
        byte_3001BAC = 0;
        break;
    }
  }
  return v14;
}
