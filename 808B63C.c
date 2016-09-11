int CB2_InitOptionMenu()
{
  signed int v0; // r3@3
  unsigned int v1; // r4@3
  char *v2; // r1@5
  int *v3; // r4@14
  __int16 v5; // [sp+4h] [bp-20h]@4
  int v6; // [sp+8h] [bp-1Ch]@5
  int v7; // [sp+20h] [bp-4h]@18

  if ( (unsigned __int8)byte_3001BAC > 9u )
  {
def_808B658:
    SetVBlankCallback(0);
    v4000000 = 0;
    v400000C = 0;
    v400000A = 0;
    v4000008 = 0;
    v4000018 = 0;
    v400001A = 0;
    v4000014 = 0;
    v4000016 = 0;
    v4000010 = 0;
    v4000012 = 0;
    v0 = 100663296;
    v1 = 98304;
    do
    {
      v5 = 0;
      v40000D4 = &v5;
      v40000D8 = v0;
      v40000DC = -2130704384;
      v0 += 4096;
      v1 -= 4096;
    }
    while ( v1 > 0x1000 );
    v6 = 0;
    v5 = 0;
    v40000D4 = &v5;
    v40000D8 = 83886080;
    v40000DC = -2130705920;
    v2 = &byte_3001BAC;
_0808B962:
    ++*v2;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_808B658;
      case 1:
        ResetPaletteFade();
        remove_some_task();
        ResetTasks();
        ResetSpriteData();
        goto _0808B95C;
      case 2:
        SetUpWindowConfig((int)&gWindowConfig_81E71B4);
        v2 = &byte_3001BAC;
        goto _0808B962;
      case 3:
        MultistepInitMenuWindowBegin();
        goto _0808B95C;
      case 4:
        if ( !MultistepInitMenuWindowContinue() )
          return v7;
        v2 = &byte_3001BAC;
        goto _0808B962;
      case 5:
        LoadPalette((int)&gUnknown_0839F5FC, 128, 64);
        CpuSet(&gUnknown_0839F63C, 100712160, 32);
        goto _0808B95C;
      case 6:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v2 = &byte_3001BAC;
        goto _0808B962;
      case 7:
        v4000040 = 0;
        v4000044 = 0;
        v4000042 = 0;
        v4000046 = 0;
        v4000048 = 4369;
        v400004A = 49;
        v4000050 = 225;
        v4000052 = 0;
        v4000054 = 7;
        v4000200 |= 1u;
        v4000004 |= 8u;
        SetVBlankCallback((int)sub_808B628);
        v4000000 = 28992;
        goto _0808B95C;
      case 8:
        v3 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_808B9C4, 0)];
        *((_WORD *)v3 + 4) = 0;
        *((_WORD *)v3 + 5) = v2024EB8 & 7;
        *((_WORD *)v3 + 6) = (unsigned int)v2024EB9 << 29 >> 31;
        *((_WORD *)v3 + 7) = (unsigned int)v2024EB9 << 30 >> 31;
        *((_WORD *)v3 + 8) = v2024EB9 & 1;
        *((_WORD *)v3 + 9) = v2024EB7;
        *((_WORD *)v3 + 10) = (unsigned int)v2024EB8 >> 3;
        MenuDrawTextWindow(2u, 0);
        MenuDrawTextWindow(2u, 4u);
        MenuPrint((int)&gUnknown_0842C3A6, 4, 1u);
        MenuPrint((int)&gUnknown_0842C3B0, 4, 5u);
        MenuPrint((int)&gUnknown_0842C3BE, 4, 7u);
        MenuPrint((int)&gUnknown_0842C3CE, 4, 9u);
        MenuPrint((int)&gUnknown_0842C3DE, 4, 0xBu);
        MenuPrint((int)&gUnknown_0842C3FA, 4, 0xDu);
        MenuPrint((int)&gUnknown_0842C3E7, 4, 0xFu);
        MenuPrint((int)&gUnknown_0842C3F0, 4, 0x11u);
        sub_808BCF8(*((_BYTE *)v3 + 10));
        sub_808BD6C(*((_BYTE *)v3 + 12));
        sub_808BDCC(*((_BYTE *)v3 + 14));
        sub_808BE34(*((_BYTE *)v3 + 16));
        sub_808BFD8(*((_BYTE *)v3 + 18));
        sub_808BECC(*((_BYTE *)v3 + 20));
        v4000040 = 4575;
        v4000044 = 287;
        sub_808BC3C(*((_BYTE *)v3 + 8));
_0808B95C:
        v2 = &byte_3001BAC;
        goto _0808B962;
      case 9:
        SetMainCallback2((int)sub_808B610);
        break;
    }
  }
  return v7;
}
