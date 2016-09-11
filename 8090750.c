int __fastcall sub_8090750(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r0@1
  int v3; // r6@1
  unsigned int v4; // r0@1
  unsigned int v5; // r2@5
  int *v6; // r4@7
  int *v7; // r0@8
  unsigned __int16 v8; // r0@10
  _WORD *v9; // r5@12
  unsigned __int8 v10; // r0@13
  __int16 v11; // r4@13
  unsigned __int16 v12; // r0@17
  int *v13; // r0@17
  __int16 v15; // [sp+4h] [bp-18h]@8
  int v16; // [sp+18h] [bp-4h]@18

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  v4 = *((_WORD *)v2 + 4);
  if ( v4 > 6 )
  {
def_8090776:
    if ( !(v202F38F & 0x80) )
    {
      dword_3005CEC = dword_300177C;
      SetVBlankCallback(0);
      sub_8091060(256);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 1;
    }
  }
  else
  {
    switch ( v4 )
    {
      default:
        goto def_8090776;
      case 1u:
        LZ77UnCompVram(&gPokedexMenu_Gfx, 100679680);
        LZ77UnCompVram(&gUnknown_08E96BD4, 100694016);
        v5 = 0;
        do
        {
          *(_WORD *)(2 * v5 + 0x6007800) += 0x2000;
          v5 = (v5 + 1) & 0xFFFF;
        }
        while ( v5 <= 0x27F );
        v6 = &dword_3004B20[10 * v1];
        sub_8091738(*((_WORD *)v6 + 5), 2, 1020);
        ResetPaletteFade();
        LoadPalette((int)&unk_8E87AF6, 33, 158);
        ++*((_WORD *)v6 + 4);
        return v16;
      case 2u:
        SetUpWindowConfig((int)&gWindowConfig_81E7064);
        InitMenuWindow();
        v15 = 0;
        v40000D4 = &v15;
        v40000D8 = 100712448;
        v40000DC = -2130706176;
        v7 = &dword_3004B20[10 * v1];
        goto _080909E0;
      case 3u:
        sub_8072BD8("ÊÉÅ\x1B¾¿Ò", 2, 0, 0xD0u);
        if ( sub_806912C() )
        {
          sub_8091154(v3, 13, 3);
        }
        else
        {
          v8 = NationalToHoennOrder(v3);
          sub_8091154(v8, 13, 3);
        }
        sub_80911C8(v3, 16, 3);
        MenuPrint((int)&DexText_UnknownPoke, 11, 5u);
        MenuPrint((int)&gUnknown_0840E013, 16, 7u);
        MenuPrint((int)"¬¬¬¬­¬", 16, 9u);
        v9 = &gPokedexEntries[18 * v3];
        sub_8091304(v9, 11, 5);
        sub_8091458(v9[6], 16, 7);
        sub_8091564(v9[7], 16, 9);
        MenuPrint(*(_DWORD *)&gPokedexEntries[18 * v3 + 8], 2, 0xDu);
        sub_80917CC(14, 1020);
        v7 = &dword_3004B20[10 * v1];
        goto _080909E0;
      case 4u:
        v10 = sub_80918EC(v3, 48, 56, 0);
        v11 = v10;
        gSprites[68 * v10 + 5] &= 0xF3u;
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        SetVBlankCallback(dword_3005CEC);
        v7 = &dword_3004B20[10 * v1];
        *((_WORD *)v7 + 7) = v11;
        goto _080909E0;
      case 5u:
        v4000050 = 0;
        v4000052 = 0;
        v4000054 = 0;
        v400000E = 3847;
        v4000000 = 7232;
        v7 = &dword_3004B20[10 * v1];
_080909E0:
        ++*((_WORD *)v7 + 4);
        break;
      case 6u:
        if ( !(v202F38F & 0x80) )
        {
          v12 = NationalPokedexNumToSpecies(v3);
          cry_related(v12, 0);
          v13 = &dword_3004B20[10 * v1];
          *((_WORD *)v13 + 6) = 0;
          *((_WORD *)v13 + 8) = 0;
          *v13 = (int)sub_8090A3C;
        }
        break;
    }
  }
  return v16;
}
