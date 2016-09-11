signed int sub_8052228()
{
  unsigned int v0; // r0@1
  _BYTE *v1; // r1@4
  _DWORD *v2; // r2@4
  int v3; // r0@4
  _DWORD *v4; // r2@6
  int v5; // r0@6
  char v6; // r0@8
  _BYTE *v7; // r2@8
  char v8; // r0@8
  char v9; // r0@8
  _BYTE *v10; // r2@8
  unsigned int i; // r8@8
  int v12; // r5@9
  int v13; // r2@9
  _BYTE *v14; // r0@9
  _BYTE *v15; // r0@9
  int v16; // r0@9
  int v17; // r0@9
  _BYTE *v18; // r2@12
  int v19; // r0@12

  v0 = *(_BYTE *)dword_3004854;
  if ( v0 <= 6 )
  {
    switch ( v0 )
    {
      case 0u:
        ++*(_BYTE *)dword_3004854;
        *(_DWORD *)(dword_3004854 + 304) = 255;
        return 0;
      case 1u:
        v1 = (_BYTE *)dword_3004854;
        v2 = (_DWORD *)(dword_3004854 + 304);
        v3 = *(_DWORD *)(dword_3004854 + 304) - 10;
        *(_DWORD *)(dword_3004854 + 304) = v3;
        if ( v3 >= 0 )
          return 0;
        *v2 = 0;
        goto _08052494;
      case 2u:
        v1 = (_BYTE *)dword_3004854;
        v4 = (_DWORD *)(dword_3004854 + 304);
        v5 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v5;
        if ( v5 <= 20 )
          return 0;
        *v4 = 0;
        goto _08052494;
      case 3u:
        MenuDrawTextWindow(4, 2, 25, 17);
        sub_8072BD8(&gUnknown_0842D4CB, 5, 3, 160);
        v6 = CreateSprite((int)&gSpriteTemplate_821645C, 140, 52);
        *(_BYTE *)(dword_3004854 + 80) = v6;
        v7 = (_BYTE *)(dword_3004854 + 80);
        dword_2020020[17 * *(_BYTE *)(dword_3004854 + 80)] = (int)SpriteCallbackDummy;
        StartSpriteAnim((int)&gSprites[68 * *v7], 3);
        v8 = CreateSprite((int)&gSpriteTemplate_821645C, 164, 52);
        *(_BYTE *)(dword_3004854 + 81) = v8;
        dword_2020020[17 * *(_BYTE *)(dword_3004854 + 81)] = (int)SpriteCallbackDummy;
        v9 = CreateSprite((int)&gSpriteTemplate_821645C, 188, 52);
        *(_BYTE *)(dword_3004854 + 82) = v9;
        v10 = (_BYTE *)(dword_3004854 + 82);
        dword_2020020[17 * *v10] = (int)SpriteCallbackDummy;
        StartSpriteAnim((int)&gSprites[68 * *v10], 1);
        sub_8052124();
        for ( i = 0; i < *(_BYTE *)(dword_3004854 + 136); i = (i + 1) & 0xFFFF )
        {
          v12 = *(_BYTE *)(dword_3004854 + 356 + i);
          v13 = dword_3004854 + 171;
          *(_BYTE *)v13 = -4;
          *(_BYTE *)(v13 + 1) = 19;
          *(_BYTE *)(v13 + 2) = 4;
          v14 = ConvertIntToDecimalString((_BYTE *)(v13 + 3), i + 1);
          *v14 = 0;
          v14[1] = -83;
          v14[2] = 0;
          v15 = StringCopy(v14 + 3, (_BYTE *)&unk_3002978 + 28 * v12);
          v16 = sub_8072C14(v15, *(_WORD *)(dword_3004854 + 332 + 6 * v12), 108, 1);
          v17 = sub_8072C14(v16, *(_WORD *)(dword_3004854 + 334 + 6 * v12), 132, 1);
          sub_8072C14(v17, *(_WORD *)(dword_3004854 + 336 + 6 * v12), 156, 1);
          MenuPrint(dword_3004854 + 171, 5, (i * gUnknown_082165F3[*(_BYTE *)(dword_3004854 + 136)] + 8) & 0xFF);
        }
        v1 = (_BYTE *)dword_3004854;
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto _08052494;
      case 4u:
        v18 = (_BYTE *)dword_3004854;
        v19 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v19;
        if ( v19 > 20 )
          ++*v18;
        return 0;
      case 5u:
        if ( word_300179E & 1 )
        {
          audio_play(5);
          v1 = (_BYTE *)dword_3004854;
_08052494:
          ++*v1;
        }
        return 0;
      case 6u:
        *(_BYTE *)dword_3004854 = 0;
        return 1;
      default:
        return 0;
    }
  }
  return 0;
}
