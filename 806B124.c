signed int sub_806B124()
{
  signed int v0; // r3@3
  unsigned int v1; // r4@3
  char *v2; // r1@5
  signed int result; // r0@32
  __int16 v4; // [sp+4h] [bp-20h]@4
  int v5; // [sp+8h] [bp-1Ch]@5

  if ( (unsigned __int8)byte_3001BAC > 0x11u )
  {
def_806B142:
    result = 0;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        v0 = 100663296;
        v1 = 98304;
        do
        {
          v4 = 0;
          v40000D4 = &v4;
          v40000D8 = v0;
          v40000DC = -2130704384;
          v0 += 4096;
          v1 -= 4096;
        }
        while ( v1 > 0x1000 );
        v5 = 0;
        v4 = 0;
        v40000D4 = &v4;
        v40000D8 = 83886080;
        v40000DC = -2130705920;
        v202F390 |= 0x80u;
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 1:
        remove_some_task((unsigned __int8)byte_3001BAC);
        goto _0806B426;
      case 2:
        sub_806B4A8();
        v201B264 = 0;
        v201B266 = 0;
        v201B268 = 0;
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 3:
        ResetSpriteData();
        goto _0806B426;
      case 4:
        if ( v201B258 != 1 && v201B258 != 5 )
          ResetTasks(v201B258);
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 5:
        FreeAllSpritePalettes();
        goto _0806B426;
      case 6:
        v201B260 = CreateTask(v201B25C, 0);
        goto _0806B426;
      case 7:
        SetUpWindowConfig((int)&gWindowConfig_81E6C90);
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 8:
        InitWindowFromConfig((int)&unk_3004210, (int)&gWindowConfig_81E6C90);
        MultistepInitWindowTileData((int)&unk_3004210, 1);
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 9:
        if ( !MultistepLoadFont() )
          goto def_806B142;
        v201B264 = 1;
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 0xA:
        if ( (sub_806D718(v201B264) & 0xFF) == 1 )
        {
          v201B264 = 0;
          v2 = &byte_3001BAC;
_0806B42C:
          ++*v2;
        }
        else
        {
          ++v201B264;
        }
        goto def_806B142;
      case 0xB:
        sub_809D51C((unsigned __int8)byte_3001BAC);
        goto _0806B426;
      case 0xC:
        if ( (unsigned __int8)call_via_r0(*(&off_8376C78 + 3 * v201B258)) != 1 )
          goto def_806B142;
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 0xD:
        MultistepInitMenuWindowBegin(&gWindowConfig_81E6CC8);
        goto _0806B426;
      case 0xE:
        if ( !MultistepInitMenuWindowContinue() )
          goto def_806B142;
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 0xF:
        sub_806D538(v201B259, 0);
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 0x10:
        BeginNormalPaletteFade(-1, 0, 16, 0);
        v202F390 &= 0x7Fu;
_0806B426:
        v2 = &byte_3001BAC;
        goto _0806B42C;
      case 0x11:
        SetVBlankCallback((int)sub_806AF34);
        result = 1;
        break;
      default:
        goto def_806B142;
    }
  }
  return result;
}
