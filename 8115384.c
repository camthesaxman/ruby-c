int sub_8115384()
{
  char *v0; // r1@3
  int v1; // r0@7
  int v2; // r0@7
  int v3; // r0@7
  int v4; // r0@7
  int v5; // r0@7
  int v6; // r0@7
  int *v7; // r1@11
  int v9; // [sp+8h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 7u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        remove_some_task();
        sub_80F9438();
        sub_80F9368();
        v400000C = 18054;
        v400000A = 17409;
        v4000050 = 9216;
        v4000052 = 1546;
        LZ77UnCompVram(&gUnknown_08E8096C, 100663296);
        LZ77UnCompVram(&gUnknown_08E81098, 100679680);
        v0 = &byte_3001BAC;
        goto _0811557A;
      case 1:
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        v0 = &byte_3001BAC;
        goto _0811557A;
      case 2:
        SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
        InitMenuWindow();
        LoadPalette((int)&gUnknown_083F86BC, 0, 448);
        v0 = &byte_3001BAC;
        goto _0811557A;
      case 3:
        sub_8115238();
        sub_80F9020();
        LZ77UnCompWram(&gUnknown_083F88BC, 33654784);
        LZ77UnCompVram(&gUnknown_083F8A60, 100675584);
        v0 = &byte_3001BAC;
        goto _0811557A;
      case 4:
        v1 = sub_8117838(0);
        v2 = sub_811857C(v1);
        v3 = sub_81184D8(v2);
        v4 = sub_8117F2C(v3);
        v5 = sub_8117900(v4);
        v6 = sub_8117BBC(v5);
        sub_8117DF4(v6);
        v0 = &byte_3001BAC;
        goto _0811557A;
      case 5:
        AnimateSprites();
        BuildOamBuffer();
        sub_81180F4(v2025BC8);
        sub_81182F8(6);
        sub_811829C(0);
        sub_8117158(0);
        MenuDrawTextWindow(0, 0xEu);
        MenuPrint((int)gUnknown_081C4157, 1, 0xFu);
        gSpriteCoordOffsetX = -60;
        gSpriteCoordOffsetY = 0;
        v0 = &byte_3001BAC;
        goto _0811557A;
      case 6:
        v4000000 = 5953;
        v0 = &byte_3001BAC;
_0811557A:
        ++*v0;
        break;
      case 7:
        v4000200 |= 1u;
        v4000004 |= 8u;
        SetVBlankCallback((int)sub_8115124);
        BeginHardwarePaletteFade(0xFFu, 0, 0x10u, 0, 1);
        v20190A4 = CreateTask((int)sub_81156BC, 0);
        v7 = &dword_3004B20[10 * v20190A4];
        *((_WORD *)v7 + 10) = 6;
        *((_WORD *)v7 + 17) = v2025BC8;
        v20190A5 = CreateTask((int)sub_8115634, 1);
        SetMainCallback2((int)sub_81150FC);
        break;
      default:
        return v9;
    }
  }
  return v9;
}
