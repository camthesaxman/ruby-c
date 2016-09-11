int __fastcall sub_8106C40(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r0@2
  void *v5; // r0@4
  unsigned int v6; // r1@10
  unsigned int v7; // r3@11
  int v8; // r1@14
  unsigned int v9; // r3@15
  unsigned __int8 v10; // r6@15
  unsigned int v11; // r3@18
  void *v12; // r0@22
  unsigned int v13; // r0@23
  int v15; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  LoadPalette((int)&gPictureFramePalettes, 0, 256);
  if ( v3 == 1 )
  {
    v4 = *(_BYTE *)(dword_3005E8C + 10) / 3u;
    if ( v4 <= 4 )
    {
      switch ( v4 )
      {
        case 0u:
          RLUnCompVram(&gPictureFrameTiles_0, 100663296);
          v5 = &gPictureFrameTilemap_0;
          goto _08106CF0;
        case 1u:
          RLUnCompVram(&gPictureFrameTiles_1, 100663296);
          v5 = &gPictureFrameTilemap_1;
          goto _08106CF0;
        case 2u:
          RLUnCompVram(&gPictureFrameTiles_2, 100663296);
          v5 = &gPictureFrameTilemap_2;
          goto _08106CF0;
        case 3u:
          RLUnCompVram(&gPictureFrameTiles_3, 100663296);
          v5 = &gPictureFrameTilemap_3;
_08106CF0:
          RLUnCompWram(v5, dword_3005E10);
          break;
        case 4u:
          RLUnCompVram(&gPictureFrameTiles_4, 100663296);
          RLUnCompWram(&gPictureFrameTilemap_4, dword_3005E10);
          break;
        default:
          break;
      }
    }
    v6 = 0;
    do
    {
      v7 = 0;
      do
      {
        *(_WORD *)(2 * (32 * v6 + v7) + 0x6006000) = 4117;
        v7 = (v7 + 1) & 0xFF;
      }
      while ( v7 <= 0x1F );
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 0x13 );
    v8 = 0;
    do
    {
      v9 = 0;
      v10 = v8 + 1;
      do
      {
        *(_WORD *)(2 * (32 * v8 + v9) + 0x600608C) = *(_WORD *)((v8 << 6) + dword_3005E10 + 2 * v9 + 140);
        v9 = (v9 + 1) & 0xFF;
      }
      while ( v9 <= 0x11 );
      v8 = (unsigned __int8)(v8 + 1);
    }
    while ( v10 <= 9u );
    v11 = 0;
    do
    {
      *(_WORD *)(2 * v11 + 0x600608E) = *(_WORD *)(dword_3005E10 + 142);
      v11 = (v11 + 1) & 0xFF;
    }
    while ( v11 <= 0xF );
  }
  else if ( v2 > 7 )
  {
    v13 = *(_BYTE *)(dword_3005E8C + 10) / 3u;
    if ( v13 <= 4 )
    {
      switch ( v13 )
      {
        case 0u:
          RLUnCompVram(&gPictureFrameTiles_0, 100663296);
          v12 = &gPictureFrameTilemap_0;
          goto _08106E60;
        case 1u:
          RLUnCompVram(&gPictureFrameTiles_1, 100663296);
          v12 = &gPictureFrameTilemap_1;
          goto _08106E60;
        case 2u:
          RLUnCompVram(&gPictureFrameTiles_2, 100663296);
          v12 = &gPictureFrameTilemap_2;
          goto _08106E60;
        case 3u:
          RLUnCompVram(&gPictureFrameTiles_3, 100663296);
          v12 = &gPictureFrameTilemap_3;
          goto _08106E60;
        case 4u:
          RLUnCompVram(&gPictureFrameTiles_4, 100663296);
          RLUnCompVram(&gPictureFrameTilemap_4, 100687872);
          break;
        default:
          return v15;
      }
    }
  }
  else
  {
    RLUnCompVram(&gPictureFrameTiles_5, 100663296);
    v12 = &gPictureFrameTilemap_5;
_08106E60:
    RLUnCompVram(v12, 100687872);
  }
  return v15;
}
