int CB2_InitTitleScreen()
{
  int v0; // r0@4
  int v1; // r0@5
  int *v2; // r1@5
  __int16 v4; // [sp+Ch] [bp-14h]@3
  int v5; // [sp+10h] [bp-10h]@3
  int v6; // [sp+1Ch] [bp-4h]@10

  if ( (unsigned __int8)byte_3001BAC > 5u )
  {
def_807C108:
    SetVBlankCallback(0);
    v4000050 = 0;
    v4000052 = 0;
    v4000054 = 0;
    v5000000 = 0x7FFF;
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
    v5 = 0;
    v4 = 0;
    v40000D4 = &v4;
    v40000D8 = 83886082;
    v40000DC = -2130705921;
    ResetPaletteFade();
    byte_3001BAC = 1;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_807C108;
      case 1:
        LZ77UnCompVram(&gUnknown_08E9D8CC, 100663296);
        LZ77UnCompVram(&gUnknown_08E9F7E4, 100681728);
        LoadPalette((int)&gUnknown_08E9F624, 0, 448);
        LZ77UnCompVram(&gUnknown_08393250, 100696064);
        LZ77UnCompVram(&gUnknown_083939EC, 100712448);
        LZ77UnCompVram(&gUnknown_08393BF8, 100714496);
        v0 = LoadPalette((int)&gUnknown_08393210, 224, 64);
        remove_some_task(v0);
        ResetTasks();
        ResetSpriteData();
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 14;
        LoadCompressedObjectPic((_DWORD *)"аящ\b");
        LoadCompressedObjectPic(&gUnknown_08393F8C);
        LoadCompressedObjectPic(&gUnknown_08393FD8);
        LoadPalette((int)&gUnknown_08E9F624, 256, 448);
        LoadSpritePalette((int)&gUnknown_08393F9C);
        byte_3001BAC = 2;
        break;
      case 2:
        v1 = (unsigned __int8)CreateTask((int)sub_807C46C, 0);
        v2 = &dword_3004B20[10 * v1];
        *((_WORD *)v2 + 4) = 256;
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 6) = -16;
        *((_WORD *)v2 + 7) = -32;
        v202F7E4 = v1;
        byte_3001BAC = 3;
        break;
      case 3:
        BeginNormalPaletteFade(-1, 1, 0x10u, 0, -1);
        SetVBlankCallback((int)sub_807C0C8);
        byte_3001BAC = 4;
        break;
      case 4:
        sub_813CE30(120, 80, 256, 0);
        v4000028 = -7424;
        v400002C = -8448;
        v4000040 = 0;
        v4000044 = 0;
        v4000042 = 0;
        v4000046 = 0;
        v4000048 = 7967;
        v400004A = 16159;
        v4000050 = 132;
        v4000052 = 0;
        v4000054 = 8;
        v4000008 = 6155;
        v400000A = 6410;
        v400000C = 18817;
        v4000200 |= 1u;
        v4000004 |= 8u;
        v4000000 = -19391;
        m4aSongNumStart(413);
        byte_3001BAC = 5;
        break;
      case 5:
        if ( !(unsigned __int8)UpdatePaletteFade() )
        {
          sub_807C088(0);
          sub_8089944(0, 160, 4, 4);
          SetMainCallback2((int)sub_807C454);
        }
        break;
    }
  }
  return v6;
}
