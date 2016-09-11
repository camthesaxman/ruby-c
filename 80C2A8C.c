int __fastcall sub_80C2A8C(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r0@1
  signed int v3; // r1@3
  signed int v4; // r1@6
  unsigned int v5; // r4@6
  unsigned int v6; // ST0C_4@6
  unsigned int v7; // ST04_4@6
  int v8; // r4@6
  int v9; // r0@6
  char *v10; // r3@6
  int *v11; // r4@7
  __int16 v12; // r0@7
  __int16 v13; // r0@8
  int v14; // r2@10
  int *v15; // r3@14
  __int16 v16; // r0@14
  unsigned int v17; // r2@17
  int *v18; // r0@22
  int v20; // [sp+2Ch] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        word_30042C4 = 240;
        word_3004240 = 20560;
        v3 = 0;
        if ( v2038690 )
        {
          do
            ++v3;
          while ( v3 <= 3 && *(_BYTE *)(v3 + 33785488) );
        }
        v4 = v3 << 6;
        v5 = *(_DWORD *)(v4 + 33785256);
        v6 = *(_DWORD *)(v4 + 33785260);
        v7 = *(_WORD *)(v4 + 33785200);
        sub_800D334((int)&gMonFrontPicTable[2 * v7], gMonFrontPicCoords[4 * v7], gMonFrontPicCoords[4 * v7 + 1]);
        v8 = sub_80409C8(v7, v6, v5);
        LoadCompressedObjectPalette((_DWORD *)v8);
        GetMonSpriteTemplate_803C56C(v7, 1u);
        v2024E8E = *(_WORD *)(v8 + 4);
        v9 = (unsigned __int8)CreateSprite(33705612, 272, 80);
        v10 = &gSprites[68 * v9];
        *((_WORD *)v10 + 24) = v7;
        v10[5] &= 0xF3u;
        dword_2020020[17 * v9] = (int)sub_80C3C44;
        v2018008 = v9;
        LoadCompressedObjectPic(&gUnknown_083D17CC);
        LoadCompressedObjectPalette(&gUnknown_083D17D4);
        CreateTask((int)sub_80C3D04, 10);
        ++LOWORD(dword_3004B20[10 * v1 + 2]);
        break;
      case 1u:
        v11 = &dword_3004B20[10 * v1];
        v12 = *((_WORD *)v11 + 7) + 1;
        *((_WORD *)v11 + 7) = v12;
        if ( v12 == 1 )
        {
          *((_WORD *)v11 + 7) = 0;
          v13 = *((_WORD *)v11 + 6) + 2;
          *((_WORD *)v11 + 6) = v13;
          if ( v13 > 32 )
            *((_WORD *)v11 + 6) = 32;
          v14 = *((_BYTE *)v11 + 12);
          word_3004240 = ((80 - (_WORD)v14) << 8) | (LOBYTE(dword_3004B20[10 * v1 + 3]) + 80);
          if ( v14 == 32 )
            ++*((_WORD *)v11 + 4);
        }
        break;
      case 2u:
        if ( v2018006 == 1 )
          goto _080C2CD0;
        break;
      case 3u:
        v15 = &dword_3004B20[10 * v1];
        v16 = *((_WORD *)v15 + 5) + 1;
        *((_WORD *)v15 + 5) = v16;
        if ( v16 == 121 )
        {
          *((_WORD *)v15 + 5) = 0;
          dword_2020020[17 * v2018008] = (int)sub_80C3CB8;
          ++*((_WORD *)v15 + 4);
        }
        break;
      case 4u:
        if ( v2018006 == 2 )
        {
          v17 = (((unsigned int)(unsigned __int16)word_3004240 >> 8) + 2) & 0xFF;
          if ( v17 > 0x50 )
            v17 = 80;
          word_3004240 = ((_WORD)v17 << 8) | (160 - v17);
          if ( v17 == 80 )
_080C2CD0:
            ++LOWORD(dword_3004B20[10 * v1 + 2]);
        }
        break;
      case 5u:
        if ( v2018006 == 2 )
        {
          v2018009 = 1;
          v18 = &dword_3004B20[10 * v1];
          *((_WORD *)v18 + 4) = 0;
          *v18 = (int)sub_80C2D1C;
        }
        break;
      default:
        return v20;
    }
  }
  return v20;
}
