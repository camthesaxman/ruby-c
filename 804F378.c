int sub_804F378()
{
  int v0; // r0@1
  int v1; // r4@3
  int v2; // r3@4
  int v3; // r1@4
  signed int v4; // r2@4
  int v5; // r3@7
  int v6; // r0@9
  signed int v7; // r4@10
  char *v8; // r5@10
  char v9; // r0@11
  _BYTE *v10; // r1@12
  int v11; // r0@14
  int v12; // r4@20
  int v13; // r1@20
  _BYTE *v14; // r0@20
  _BYTE *v15; // r1@23
  int v16; // r3@24
  char v17; // r0@26
  int v18; // r0@29
  int v19; // r2@30
  unsigned __int16 v20; // r0@30
  int v21; // r3@31
  int v22; // r4@42
  signed int v23; // r4@42
  int v24; // r0@42
  unsigned int v25; // r5@43
  void **v26; // r6@43
  void *v27; // r0@44
  int v28; // r0@45
  int v29; // r0@48
  int v31; // [sp+18h] [bp-4h]@0

  v0 = *(_BYTE *)dword_3004854;
  if ( (unsigned int)v0 <= 0x15 )
  {
    switch ( v0 )
    {
      case 0:
        sub_804F0F4();
        sub_80516C4(0, v203855E);
        sub_804E844(dword_3004854 + 380, v203855E);
        sub_804F1BC(v203855E, *(_BYTE *)(dword_3004854 + 136), dword_3004854 + 380);
        v1 = 0;
        do
        {
          *(_WORD *)(dword_3004854 + 112 + 2 * v1) = 0;
          v2 = v1 + 1;
          v3 = 6 * v1;
          v4 = 2;
          do
          {
            *(_WORD *)(dword_3004854 + 332 + v3) = 0;
            v3 += 2;
            --v4;
          }
          while ( v4 >= 0 );
          ++v1;
        }
        while ( v2 <= 3 );
        v5 = dword_3004854;
        v0 = 0;
        *(_WORD *)(dword_3004854 + 124) = 0;
        *(_BYTE *)(v5 + 1) = 0;
        goto def_804F396;
      case 1:
        v0 = sub_804E2EC() << 24;
        if ( v0 )
        {
          v6 = *(_BYTE *)dword_3004854 + 1;
          *(_BYTE *)dword_3004854 = v6;
          v0 = sub_8051474(v6);
        }
        goto def_804F396;
      case 2:
        v7 = 0;
        v8 = &gUnknown_082162E4;
        do
        {
          v9 = CreateSprite((int)&gSpriteTemplate_82163F4, (unsigned __int8)*v8, (unsigned __int8)v8[1]);
          *(_BYTE *)(dword_3004854 + 96 + v7) = v9;
          StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004854 + 96 + v7)], v7 + 8);
          v8 += 2;
          ++v7;
        }
        while ( v7 <= 3 );
        v10 = (_BYTE *)dword_3004854;
        goto _0804F74C;
      case 3:
        BeginNormalPaletteFade(-1, 0, 16, 0);
        ++*(_BYTE *)dword_3004854;
        v0 = dword_3004854 + 304;
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto def_804F396;
      case 4:
        v11 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v11;
        if ( v11 == 2 )
          sub_804E4FC();
        v0 = v202F38F & 0x80;
        if ( !(v202F38F & 0x80) )
        {
          v0 = 8;
          *(_BYTE *)dword_3004854 = 8;
        }
        goto def_804F396;
      case 8:
        *(_BYTE *)dword_3004854 = 11;
        v0 = dword_3004854 + 316;
        *(_BYTE *)(dword_3004854 + 316) = 0;
        goto def_804F396;
      case 11:
        v12 = 0;
        v13 = *(_BYTE *)(dword_3004854 + 316);
        v14 = &gUnknown_082162EC[4 * (*(_BYTE *)(dword_3004854 + 136) - 2)];
        break;
      case 12:
        v16 = dword_3004854;
        v0 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v0;
        if ( v0 > 60 )
        {
          if ( *(_BYTE *)(v16 + 316) < (unsigned int)*(_BYTE *)(v16 + 136) )
          {
            v17 = *(_BYTE *)v16 - 1;
          }
          else
          {
            *(_WORD *)(v16 + 84) = gUnknown_082162F8[gUnknown_08216300[*(_BYTE *)(v16 + 136) - 2]] - 22528;
            v17 = *(_BYTE *)v16 + 1;
          }
          *(_BYTE *)v16 = v17;
          v0 = dword_3004854 + 304;
          *(_DWORD *)(dword_3004854 + 304) = 0;
        }
        goto def_804F396;
      case 13:
        ++*(_BYTE *)dword_3004854;
        sub_804F238();
        audio_play(43);
        v18 = dword_3004854;
        goto _0804F710;
      case 14:
        v4000000 |= 0x400u;
        v19 = dword_3004854;
        *(_WORD *)(dword_3004854 + 84) += 512;
        v20 = *(_WORD *)(v19 + 322) + 4;
        *(_WORD *)(v19 + 322) = v20;
        if ( v20 > 0xFFu )
        {
          ++*(_BYTE *)v19;
          v21 = dword_3004854;
          *(_WORD *)(dword_3004854 + 322) = 256;
          *(_WORD *)(v21 + 84) = gUnknown_082162F8[gUnknown_08216300[*(_BYTE *)(v21 + 136) - 2]];
          v400000C = 18562;
          *(_DWORD *)(v21 + 304) = 0;
          audio_play(52);
          BuyMenuDrawFieldObjects();
        }
        v0 = sub_8051414(dword_3004854 + 360);
        goto def_804F396;
      case 15:
        if ( sub_8051B8C() << 24 )
          ++*(_BYTE *)dword_3004854;
        v18 = dword_3004854;
_0804F710:
        v0 = sub_8051414(v18 + 360);
        goto def_804F396;
      case 16:
        CreateSprite((int)&gSpriteTemplate_8216548, 120, -16);
        v10 = (_BYTE *)dword_3004854;
        goto _0804F74C;
      case 18:
        v10 = (_BYTE *)dword_3004854;
        goto _0804F74C;
      case 19:
        v10 = (_BYTE *)dword_3004854;
        goto _0804F74C;
      case 20:
        v10 = (_BYTE *)dword_3004854;
        goto _0804F74C;
      case 21:
        sub_804F81C();
        v22 = dword_3004854;
        *(_WORD *)(dword_3004854 + 86) = 128;
        *(_DWORD *)(v22 + 300) = 0;
        *(_BYTE *)(v22 + 331) = 0;
        *(_BYTE *)(dword_3004854 + 126) = 0;
        SetMainCallback2((int)sub_80501FC);
        v23 = 0;
        v24 = v202E8CC;
        if ( (signed int)v202E8CC > 0 )
        {
          v25 = 167772160;
          v26 = &gUnknown_08216308;
          do
          {
            v27 = *v26;
            ++v26;
            *(_BYTE *)(dword_3004854 + 328 + v23) = CreateTask(v27, v25 >> 24);
            v25 += 0x1000000;
            ++v23;
            v24 = v202E8CC;
          }
          while ( v23 < v202E8CC );
        }
        v28 = (unsigned __int16)current_map_music_get(v24);
        if ( v28 != 403 )
          *(_WORD *)(dword_3004854 + 376) = current_map_music_get(v28);
        sub_8075474(403);
        audio_play(53);
        v0 = sub_804E290();
        goto def_804F396;
      default:
        goto def_804F396;
    }
    while ( v13 != *v14 )
    {
      ++v14;
      if ( ++v12 > 3 )
        goto _0804F5A2;
    }
    sub_804E7C0(*(_WORD *)(dword_3004854 + 128 + 2 * v13), v12);
_0804F5A2:
    v15 = (_BYTE *)dword_3004854;
    *(_DWORD *)(dword_3004854 + 304) = 0;
    ++*v15;
    v10 = (_BYTE *)(dword_3004854 + 316);
_0804F74C:
    v0 = *v10 + 1;
    *v10 = v0;
  }
def_804F396:
  RunTasks(v0);
  AnimateSprites();
  v29 = BuildOamBuffer();
  UpdatePaletteFade(v29);
  return v31;
}
