signed int __fastcall sub_804C29C(int a1, int a2, int a3)
{
  unsigned int v3; // r0@1
  char *v4; // r0@3
  int v5; // r4@3
  _BYTE *v6; // r2@3
  __int16 v7; // r0@3
  int v8; // r4@4
  _WORD *v9; // r5@4
  char *v10; // r0@5
  int v11; // r1@7
  signed __int16 *v12; // r2@7
  signed __int16 v13; // r0@7
  int v14; // r2@8
  int v15; // r0@8
  char v16; // r0@9
  int v17; // r0@9
  char v18; // r0@12
  int v19; // r3@12
  int v20; // r1@12
  signed int v21; // r1@16
  signed int v22; // r2@16
  signed int v23; // r3@16
  unsigned int v24; // r1@19
  int v25; // r3@21
  int v26; // r4@22
  signed __int16 *v27; // r0@22
  unsigned int v28; // r0@23
  char v29; // r0@24
  int v30; // r2@27
  int v31; // r1@27
  char v32; // r0@31
  char v33; // r0@31
  int v34; // r2@32
  __int16 v35; // r0@32
  int v36; // r2@35
  char *v37; // r0@35
  char *v38; // r0@35
  char v39; // r0@40
  char v40; // r0@40
  int v41; // r2@43
  char *v42; // r0@43
  char *v43; // r0@43
  int v44; // r4@44
  _BYTE *v45; // r2@44
  char *v46; // r0@44
  char *v47; // r3@44
  _BYTE *v48; // r2@50
  _BYTE *v49; // r2@52
  _BYTE *v50; // r3@52
  char *v51; // r1@52
  char *v52; // r0@52
  int v53; // r2@53
  _BYTE *v54; // r3@53
  int v55; // r2@55
  _BYTE *v56; // r3@55
  char *v57; // r0@56
  char *v58; // r0@56
  int v59; // r2@57
  _BYTE *v60; // r3@57
  char *v61; // r0@57
  int v62; // r1@58
  char v63; // r0@60
  char v64; // r0@60
  int v65; // r3@64
  _BYTE *v66; // r4@64
  char *v67; // r0@64
  char *v68; // r0@64
  _WORD *v69; // r2@66
  __int16 v70; // r0@66
  int v71; // r1@69
  int v72; // r0@69
  _WORD *v73; // r1@70
  int v74; // r1@71
  _WORD *v75; // r2@71
  __int16 v76; // r0@71
  char v77; // r0@76
  int v78; // r1@79
  _WORD *v79; // r2@79
  unsigned int v80; // r3@79
  char v81; // r0@90
  _BYTE *v82; // r2@90
  int v83; // r1@90
  int v84; // r8@94
  unsigned __int8 *v85; // r5@94
  int v86; // r0@98
  int v87; // r2@100
  int v88; // r1@102
  int v89; // r0@102
  int v91; // r4@109
  int v92; // r0@117

  v3 = *(_WORD *)(dword_3004828 + 196);
  if ( v3 <= 0xC8 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 184) + 62];
        *v4 &= 0xFBu;
        v5 = dword_3004828;
        v6 = (_BYTE *)(dword_3004828 + 184);
        *(_WORD *)&gSprites[68 * *v6 + 36] = -180;
        *(_WORD *)&gSprites[68 * *v6 + 38] = gMonFrontPicCoords[4 * *(_WORD *)(v5 + 288) + 1];
        ++*(_WORD *)(v5 + 196);
        v7 = current_map_music_get();
        *(_WORD *)(dword_3004828 + 292) = v7;
        sub_8075474(377);
        return 0;
      case 1u:
        v8 = dword_3004828;
        v9 = (_WORD *)(dword_3004828 + 278);
        if ( (signed int)*(_WORD *)(dword_3004828 + 278) <= 0 )
        {
          *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_3004828 + 184) + 36] = 0;
          *v9 = 0;
          *(_WORD *)(v8 + 196) = 10;
        }
        else
        {
          v10 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 184)];
          *((_WORD *)v10 + 18) += 3;
          *v9 -= 3;
        }
        return 0;
      case 0xAu:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0842C60B);
        sub_8003460(dword_3004828 + 4, (int)&gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
        v11 = dword_3004828;
        v12 = (signed __int16 *)(dword_3004828 + 196);
        v13 = 11;
        goto _0804D40C;
      case 0xBu:
        v14 = dword_3004828;
        v15 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v15;
        if ( v15 == 80 )
        {
          v16 = sub_8047580(
                  *(_BYTE *)(v14 + 184),
                  (unsigned __int8)gSprites[68 * *(_BYTE *)(v14 + 184) + 5] >> 4,
                  0x78u,
                  0x20u,
                  2,
                  1,
                  0x14u,
                  0xFFFFF);
          *(_BYTE *)(dword_3004828 + 258) = v16;
          v17 = dword_3004828;
          ++*(_WORD *)(dword_3004828 + 196);
          ZeroFillWindowRect(v17 + 4, 0, 0, 0x1Du, 0x13u);
          StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"ºÌŸÆ÷ÌŸ∏");
          sub_8003460(dword_3004828 + 4, (int)&gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
        }
        return 0;
      case 0xCu:
        if ( (void (*)())dword_2020020[17 * *(_BYTE *)(dword_3004828 + 258)] != SpriteCallbackDummy
          || (unsigned __int8)sub_80035AC() != 1 )
        {
          return 0;
        }
        v18 = CreateSprite((int)&gSpriteTemplate_821595C, 120, 32);
        *(_BYTE *)(dword_3004828 + 259) = v18;
        v19 = dword_3004828;
        dword_2020020[17 * *(_BYTE *)(dword_3004828 + 259)] = (int)sub_804D738;
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(v19 + 258)]);
        v20 = dword_3004828;
        goto _0804D53C;
      case 0xEu:
        BeginNormalPaletteFade(-1, 0, 0, 16);
        *(_WORD *)(dword_3004828 + 196) = 20;
        return 0;
      case 0x14u:
        if ( v202F38F & 0x80 )
          return 0;
        sub_804BBE8(4);
        goto _0804D538;
      case 0x15u:
        v21 = -1;
        v22 = 16;
        v23 = 0;
        goto _0804D534;
      case 0x16u:
        if ( !(v202F38F & 0x80) )
          *(_WORD *)(dword_3004828 + 196) = 23;
        return 0;
      case 0x17u:
        v24 = *(_WORD *)(dword_3004828 + 282);
        if ( v24 <= 0x100 )
        {
          sub_804BBE8(1);
          v25 = dword_3004828;
          *(_WORD *)(dword_3004828 + 282) = 128;
          ++*(_WORD *)(v25 + 196);
          *(_DWORD *)(v25 + 192) = 0;
        }
        else
        {
          *(_WORD *)(dword_3004828 + 282) = v24 - 52;
        }
        v26 = dword_3004828;
        v27 = (signed __int16 *)(dword_3004828 + 282);
        goto _0804D16E;
      case 0x18u:
        v28 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v28;
        if ( v28 <= 0x14 )
          return 0;
        sub_804BBE8(3);
        sub_804B128();
        v29 = CreateSprite((int)&gSpriteTemplate_8215A80, 120, 80);
        *(_BYTE *)(dword_3004828 + 187) = v29;
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x19u:
        if ( !(gSprites[68 * *(_BYTE *)(dword_3004828 + 187) + 63] & 0x10) )
          return 0;
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)]);
        v4000050 = 1600;
        v4000052 = 1036;
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x1Au:
        v30 = dword_3004828;
        v31 = *(_WORD *)(dword_3004828 + 272) - 1;
        *(_WORD *)(dword_3004828 + 272) = v31;
        if ( v31 << 16 == 20709376 )
          ++*(_WORD *)(v30 + 196);
        if ( *(_WORD *)(dword_3004828 + 272) == 328 )
          *(_BYTE *)(dword_3004828 + 188) = CreateSprite((int)&gSpriteTemplate_8215A30, 128, 65);
        return 0;
      case 0x1Bu:
        v32 = CreateSprite((int)&gSpriteTemplate_82159BC, 128, 80);
        *(_BYTE *)(dword_3004828 + 186) = v32;
        v33 = CreateSprite((int)&gSpriteTemplate_82159FC, 128, 80);
        *(_BYTE *)(dword_3004828 + 187) = v33;
        StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)], 1);
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x1Cu:
        v34 = dword_3004828;
        v35 = *(_WORD *)(dword_3004828 + 272) - 2;
        *(_WORD *)(dword_3004828 + 272) = v35;
        if ( v35 == 166 )
          *(_WORD *)(v34 + 196) = 200;
        sub_804C0F8(0);
        v4000000 = 5697;
        return 0;
      case 0xC8u:
        v36 = dword_3004828;
        v37 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 186)];
        *((_WORD *)v37 + 17) -= 2;
        v38 = &gSprites[68 * *(_BYTE *)(v36 + 187)];
        *((_WORD *)v38 + 17) -= 2;
        sub_804C0F8(0);
        if ( (signed int)*(_WORD *)&gSprites[68 * *(_BYTE *)(dword_3004828 + 186) + 34] < -8 )
          *(_WORD *)(dword_3004828 + 196) = 29;
        return 0;
      case 0x1Du:
        BeginNormalPaletteFade(-1, -1, 0, 16);
        *(_WORD *)(dword_3004828 + 196) = 30;
        return 0;
      case 0x1Eu:
        if ( v202F38F & 0x80 )
          return 0;
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 186)]);
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)]);
        sub_804BBE8(2);
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x1Fu:
        BeginNormalPaletteFade(-1, -1, 16, 0);
        v39 = CreateSprite((int)&gSpriteTemplate_82159FC, 111, 170);
        *(_BYTE *)(dword_3004828 + 186) = v39;
        v40 = CreateSprite((int)&gSpriteTemplate_82159FC, 129, -10);
        *(_BYTE *)(dword_3004828 + 187) = v40;
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x20u:
        if ( !(v202F38F & 0x80) )
        {
          audio_play(46);
          ++*(_WORD *)(dword_3004828 + 196);
        }
        v41 = dword_3004828;
        v42 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 186)];
        *((_WORD *)v42 + 19) -= 3;
        v43 = &gSprites[68 * *(_BYTE *)(v41 + 187)];
        *((_WORD *)v43 + 19) += 3;
        return 0;
      case 0x21u:
        v44 = dword_3004828;
        v45 = (_BYTE *)(dword_3004828 + 186);
        *(_WORD *)&gSprites[68 * *v45 + 38] -= 3;
        v46 = &gSprites[68 * *(_BYTE *)(v44 + 187)];
        *((_WORD *)v46 + 19) += 3;
        v47 = &gSprites[68 * *v45];
        if ( (signed int)*((_WORD *)v47 + 19) > -90 )
          return 0;
        *((_WORD *)v47 + 24) = 1;
        *(_WORD *)&gSprites[68 * *(_BYTE *)(v44 + 187) + 48] = 1;
        v20 = v44;
        goto _0804D53C;
      case 0x22u:
        BlendPalettes(1, 16, 0xFFFF);
        goto _0804D538;
      case 0x23u:
        BlendPalettes(1, 0, 0xFFFF);
        goto _0804D538;
      case 0x24u:
        BlendPalettes(1, 16, 0xFFFF);
        goto _0804D538;
      case 0x25u:
        if ( sub_8040A3C(*(_WORD *)(dword_3004828 + 288)) << 24 )
        {
          StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 184)], 0);
        }
        else
        {
          v48 = (_BYTE *)(dword_3004828 + 184);
          *((_DWORD *)&unk_2020014 + 17 * *v48) = &gSpriteAffineAnimTable_8215AC0;
          gSprites[68 * *v48 + 1] |= 3u;
          CalcCenterToCornerVec((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 184)], 0, 3, 3);
          StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 184)], 0);
        }
        StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 185)], 0);
        v49 = (_BYTE *)dword_3004828;
        v50 = (_BYTE *)(dword_3004828 + 184);
        *(_WORD *)&gSprites[68 * *v50 + 32] = 60;
        v49 += 185;
        *(_WORD *)&gSprites[68 * *v49 + 32] = 180;
        *(_WORD *)&gSprites[68 * *v50 + 34] = 192;
        *(_WORD *)&gSprites[68 * *v49 + 34] = -32;
        v51 = &gSprites[68 * *v50 + 62];
        *v51 &= 0xFBu;
        v52 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 185) + 62];
        *v52 &= 0xFBu;
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x26u:
        v53 = dword_3004828;
        v54 = (_BYTE *)(dword_3004828 + 184);
        *(_WORD *)&gSprites[68 * *v54 + 38] -= 3;
        *(_WORD *)&gSprites[68 * *(_BYTE *)(v53 + 185) + 38] += 3;
        if ( ((*(_WORD *)&gSprites[68 * *v54 + 38] + 163) & 0xFFFFu) <= 2 )
          audio_play(45);
        v55 = dword_3004828;
        v56 = (_BYTE *)(dword_3004828 + 184);
        if ( (signed int)*(_WORD *)&gSprites[68 * *(_BYTE *)(dword_3004828 + 184) + 38] < -222 )
        {
          *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_3004828 + 186) + 48] = 0;
          *(_WORD *)&gSprites[68 * *(_BYTE *)(v55 + 187) + 48] = 0;
          ++*(_WORD *)(v55 + 196);
          v57 = &gSprites[68 * *v56 + 62];
          *v57 |= 4u;
          v58 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 185)];
          v58[62] |= 4u;
          BlendPalettes(1, 0, 0xFFFF);
        }
        return 0;
      case 0x27u:
        v59 = dword_3004828;
        v60 = (_BYTE *)(dword_3004828 + 186);
        *(_WORD *)&gSprites[68 * *v60 + 38] -= 3;
        v61 = &gSprites[68 * *(_BYTE *)(v59 + 187)];
        *((_WORD *)v61 + 19) += 3;
        if ( (signed int)*(_WORD *)&gSprites[68 * *v60 + 38] <= -222 )
        {
          BeginNormalPaletteFade(-1, -1, 0, 16);
          v62 = dword_3004828;
          ++*(_WORD *)(dword_3004828 + 196);
          DestroySprite((int)&gSprites[68 * *(_BYTE *)(v62 + 186)]);
          DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)]);
        }
        return 0;
      case 0x28u:
        if ( !(v202F38F & 0x80) )
        {
          ++*(_WORD *)(dword_3004828 + 196);
          sub_804BBE8(1);
          *(_WORD *)(dword_3004828 + 272) = 166;
          v63 = CreateSprite((int)&gSpriteTemplate_82159BC, 128, -20);
          *(_BYTE *)(dword_3004828 + 186) = v63;
          v64 = CreateSprite((int)&gSpriteTemplate_82159FC, 128, -20);
          *(_BYTE *)(dword_3004828 + 187) = v64;
          StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)], 1);
        }
        return 0;
      case 0x29u:
        v21 = -1;
        v22 = 16;
        v23 = 0;
        goto _0804D534;
      case 0x2Au:
        v4000000 = 5697;
        sub_804C0F8(1);
        if ( !(v202F38F & 0x80) )
          goto _0804D538;
        return 0;
      case 0x2Bu:
        sub_804C0F8(1);
        v65 = dword_3004828;
        v66 = (_BYTE *)(dword_3004828 + 186);
        v67 = &gSprites[68 * *(_BYTE *)(dword_3004828 + 186)];
        *((_WORD *)v67 + 19) += 3;
        v68 = &gSprites[68 * *(_BYTE *)(v65 + 187)];
        *((_WORD *)v68 + 19) += 3;
        if ( *(_WORD *)&gSprites[68 * *v66 + 38] + *(_WORD *)&gSprites[68 * *v66 + 34] != 64 )
          return 0;
        v20 = v65;
        goto _0804D53C;
      case 0x2Cu:
        sub_804C0F8(1);
        v20 = dword_3004828;
        v69 = (_WORD *)(dword_3004828 + 272);
        v70 = *(_WORD *)(dword_3004828 + 272) + 2;
        *(_WORD *)(dword_3004828 + 272) = v70;
        if ( v70 <= 316 )
          return 0;
        *v69 = 316;
        goto _0804D53C;
      case 0x2Du:
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 186)]);
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)]);
        goto _0804D400;
      case 0x2Eu:
        v71 = dword_3004828 + 192;
        v72 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v72;
        if ( v72 != 10 )
          return 0;
        v73 = (_WORD *)(v71 + 4);
        goto _0804D53E;
      case 0x2Fu:
        v74 = dword_3004828;
        v75 = (_WORD *)(dword_3004828 + 272);
        v76 = *(_WORD *)(dword_3004828 + 272) + 1;
        *(_WORD *)(dword_3004828 + 272) = v76;
        if ( v76 > 348 )
        {
          *v75 = 348;
          ++*(_WORD *)(v74 + 196);
        }
        if ( *(_WORD *)(dword_3004828 + 272) == 328 )
          *(_BYTE *)(dword_3004828 + 188) = CreateSprite((int)&gSpriteTemplate_8215A30, 128, 65);
        dword_2020020[17 * *(_BYTE *)(dword_3004828 + 188)] = (int)sub_804B0E0;
        return 0;
      case 0x30u:
        v77 = CreateSprite((int)&gSpriteTemplate_8215A80, 120, 80);
        *(_BYTE *)(dword_3004828 + 187) = v77;
        *(_WORD *)(dword_3004828 + 196) = 50;
        return 0;
      case 0x32u:
        if ( gSprites[68 * *(_BYTE *)(dword_3004828 + 187) + 63] & 0x10 )
        {
          DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 187)]);
          sub_804BBE8(6);
          ++*(_WORD *)(dword_3004828 + 196);
          audio_play(159);
        }
        return 0;
      case 0x33u:
        v78 = dword_3004828;
        v79 = (_WORD *)(dword_3004828 + 282);
        v80 = *(_WORD *)(dword_3004828 + 282);
        if ( v80 > 0x3FF )
        {
          *v79 = 1024;
          ++*(_WORD *)(v78 + 196);
        }
        else
        {
          *v79 = v80 + 52;
        }
        v26 = dword_3004828;
        v27 = (signed __int16 *)(dword_3004828 + 282);
_0804D16E:
        *(_WORD *)(v26 + 280) = 0x8000 / (unsigned __int16)*v27;
        return 0;
      case 0x34u:
        BeginNormalPaletteFade(-1, 0, 0, 16);
        *(_WORD *)(dword_3004828 + 196) = 60;
        return 0;
      case 0x3Cu:
        if ( v202F38F & 0x80 )
          return 0;
        sub_804BBE8(5);
        sub_804BBE8(7);
        goto _0804D538;
      case 0x3Du:
        v21 = 0;
        v22 = 16;
        v23 = 0;
        goto _0804D534;
      case 0x3Eu:
        v4000000 = 5184;
        if ( v202F38F & 0x80 )
          return 0;
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x3Fu:
        v81 = CreateSprite((int)&gSpriteTemplate_821595C, 120, -8);
        *(_BYTE *)(dword_3004828 + 259) = v81;
        v82 = (_BYTE *)(dword_3004828 + 259);
        *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_3004828 + 259) + 52] = 74;
        dword_2020020[17 * *v82] = (int)sub_804D80C;
        StartSpriteAnim((int)&gSprites[68 * *v82], 1);
        StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 259)], 2);
        BlendPalettes(
          1 << (((unsigned __int8)gSprites[68 * *(_BYTE *)(dword_3004828 + 259) + 5] >> 4) + 16),
          16,
          0xFFFF);
        v83 = dword_3004828;
        ++*(_WORD *)(dword_3004828 + 196);
        *(_DWORD *)(v83 + 192) = 0;
        return 0;
      case 0x40u:
        BeginNormalPaletteFade(
          1 << (((unsigned __int8)gSprites[68 * *(_BYTE *)(dword_3004828 + 259) + 5] >> 4) + 16),
          1,
          16,
          0);
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x41u:
        if ( (void (*)())dword_2020020[17 * *(_BYTE *)(dword_3004828 + 259)] != SpriteCallbackDummy )
          return 0;
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x42u:
        v84 = dword_3004828;
        v85 = (unsigned __int8 *)(dword_3004828 + 185);
        *(_WORD *)&gSprites[68 * *v85 + 32] = 120;
        *(_WORD *)&gSprites[68 * *v85 + 34] = gMonFrontPicCoords[4 * *(_WORD *)(v84 + 290) + 1] + 60;
        *(_WORD *)&gSprites[68 * *v85 + 36] = 0;
        *(_WORD *)&gSprites[68 * *v85 + 38] = 0;
        CreatePokeballSprite(*v85, (unsigned __int8)gSprites[68 * *v85 + 5] >> 4, 0x78u, 0x54u, 2, 1, 0x14u, 0xFFFFF);
        FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 259)]);
        DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 259)]);
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x43u:
        v4000000 = 5952;
        ZeroFillWindowRect(dword_3004828 + 4, 0, 0, 0x1Du, 0x13u);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0842C62F);
        sub_8003460(dword_3004828 + 4, (int)&gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
_0804D400:
        v11 = dword_3004828;
        v12 = (signed __int16 *)(dword_3004828 + 196);
        v13 = *(_WORD *)(dword_3004828 + 196) + 1;
_0804D40C:
        *v12 = v13;
        *(_DWORD *)(v11 + 192) = 0;
        return 0;
      case 0x44u:
        v86 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v86;
        if ( v86 == 4 )
          fanfare_play(371);
        v87 = dword_3004828;
        if ( *(_DWORD *)(dword_3004828 + 192) == 240 )
        {
          ++*(_WORD *)(dword_3004828 + 196);
          ZeroFillWindowRect(v87 + 4, 0, 0, 0x1Du, 0x13u);
          StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"Œ’ﬂŸ");
          sub_8003460(dword_3004828 + 4, (int)&gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
          *(_DWORD *)(dword_3004828 + 192) = 0;
        }
        return 0;
      case 0x45u:
        v88 = dword_3004828 + 192;
        v89 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v89;
        if ( v89 != 60 )
          return 0;
        v73 = (_WORD *)(v88 + 4);
        goto _0804D53E;
      case 0x46u:
        sub_804E1DC();
        goto _0804D538;
      case 0x47u:
        if ( *(_BYTE *)(dword_3004828 + 286) )
          return 1;
        if ( word_300179E & 1 )
        {
          v20 = dword_3004828;
_0804D53C:
          v73 = (_WORD *)(v20 + 196);
_0804D53E:
          ++*v73;
        }
        break;
      case 0x48u:
        sub_804BA94(v202E8CE, 0, a3);
        dword_3005E94 = (int)sub_804BBCC;
        v91 = (unsigned __int16)GetEvolutionTargetSpecies((int)&dword_3004360[25 * v20297D8], 1u, 0);
        if ( v91 )
          sub_81120E4(&dword_3004360[25 * v20297D8], v91, *(_BYTE *)(dword_3004828 + 185));
        goto _0804D538;
      case 0x49u:
        v21 = 0;
        v22 = 0;
        v23 = 16;
_0804D534:
        BeginNormalPaletteFade(-1, v21, v22, v23);
_0804D538:
        v20 = dword_3004828;
        goto _0804D53C;
      case 0x4Au:
        if ( !(v202F38F & 0x80) )
        {
          sub_8075474(*(_WORD *)(dword_3004828 + 292));
          v92 = SetMainCallback2((int)c2_exit_to_overworld_2_switch);
          sub_804D8E4(v92);
        }
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
