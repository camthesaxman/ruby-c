int sub_8123244()
{
  signed int v0; // r3@3
  unsigned int v1; // r4@3
  signed int v2; // r3@5
  unsigned int v3; // r5@5
  char *v4; // r1@7
  char v5; // r0@7
  unsigned int v6; // r4@8
  unsigned int v7; // r4@11
  unsigned int v8; // r4@18
  int v9; // r2@19
  int (*v10)(); // r0@27
  __int16 v12; // [sp+8h] [bp-24h]@4
  int v13; // [sp+Ch] [bp-20h]@5
  int v14; // [sp+28h] [bp-4h]@31

  if ( (unsigned __int8)byte_3001BAC > 8u )
  {
def_8123264:
    SetVBlankCallback(0);
    remove_some_task();
    v0 = 100663296;
    v1 = 98304;
    do
    {
      v12 = 0;
      v40000D4 = &v12;
      v40000D8 = v0;
      v40000DC = -2130704384;
      v0 += 4096;
      v1 -= 4096;
    }
    while ( v1 > 0x1000 );
    v13 = 0;
    v12 = 0;
    v40000D4 = &v12;
    v40000D8 = 83886080;
    v40000DC = -2130705920;
    v2039274 = 33648640;
    v2 = 33648640;
    v3 = 4348;
    do
    {
      v12 = 0;
      v40000D4 = &v12;
      v40000D8 = v2;
      v40000DC = -2130704384;
      v2 += 4096;
      v3 -= 4096;
    }
    while ( v3 > 0x1000 );
    v12 = 0;
    v40000D4 = &v12;
    v40000D8 = v2;
    v40000DC = (v3 >> 1) | 0x81000000;
    v4 = &byte_3001BAC;
    v5 = byte_3001BAC + 1;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_8123264;
      case 1:
        ResetSpriteData();
        ResetTasks();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        sub_807C828();
        v6 = 0;
        do
        {
          *(_DWORD *)(4 * v6 + 0x202F8D8) = 0;
          v6 = (v6 + 1) & 0xFF;
        }
        while ( v6 <= 0x13 );
        sound_sources_off();
        map_music_set_to_zero();
        gSpriteCoordOffsetY = 0;
        gSpriteCoordOffsetX = 0;
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 2:
        v7 = 0;
        do
        {
          LoadCompressedObjectPic(&gUnknown_08401CF8 + 2 * v7);
          v7 = (v7 + 1) & 0xFF;
        }
        while ( v7 <= 2 );
        LoadSpritePalettes((int)&gUnknown_08401D18);
        sub_800D238();
        sub_800D238();
        sub_800D238();
        sub_800D238();
        LoadPalette((int)&gCableCarBG_Pal, 0, 128);
        LZ77UnCompVram(&gCableCarBG_Gfx, 100663296);
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 3:
        sub_8124118();
        RunTasks();
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 4:
        if ( *(_BYTE *)(v2039274 + 2) == 7 )
        {
          v4 = &byte_3001BAC;
          v5 = byte_3001BAC + 1;
          break;
        }
        if ( !v202F8D8 )
          return v14;
        v8 = 0;
        do
        {
          v9 = *(_DWORD *)(4 * v8 + 0x202F8D8);
          if ( v9 )
            *(_BYTE *)(v9 + 5) &= 0xF3u;
          v8 = (v8 + 1) & 0xFF;
        }
        while ( v8 <= 0x13 );
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 5:
        sub_8124F08(100722688, 33657192, 0, 17);
        sub_8124F08(100724736, 33658152, 0, 0);
        sub_8124F08(v2039274 + 2300, &gCableCarPylonHookTilemapEntries, 0, 0);
        sub_8124F08(v2039274 + 2300, 33659352, 0, 2);
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 6:
        sub_81248AC(v202E8CC);
        sub_8124F08(v2039274 + 252, 33656976, 0, 14);
        sub_8124F08(v2039274 + 252, 33657048, 12, 17);
        sub_8124F08(v2039274 + 252, 33657120, 24, 20);
        sub_8124F08(v2039274 + 252, 33656832, 0, 17);
        sub_8124F08(v2039274 + 252, 33656904, 0, 20);
        sub_8124F08(v2039274 + 252, 33656832, 12, 20);
        sub_8124F08(v2039274 + 252, 33656904, 12, 23);
        sub_8124F08(v2039274 + 252, 33656832, 24, 23);
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 7:
        BeginNormalPaletteFade(-1, 3, 0x10u, 0, 0);
        sub_8074F6C(0x1A9u, 1u);
        sub_8123FBC(1);
        v4 = &byte_3001BAC;
        v5 = byte_3001BAC + 1;
        break;
      case 8:
        v4000200 |= 1u;
        SetVBlankCallback((int)sub_8123C40);
        SetMainCallback2((int)mainloop);
        CreateTask((int)sub_8123878, 0);
        if ( v202E8CC )
          v10 = sub_8123AF8;
        else
          v10 = sub_81239E4;
        v5 = CreateTask((int)v10, 1);
        v4 = (char *)v2039274;
        break;
    }
  }
  *v4 = v5;
  return v14;
}
