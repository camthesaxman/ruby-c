int __fastcall sub_800DE30(int a1)
{
  int v1; // r9@1
  int v2; // r0@1
  int v3; // r10@1
  int *v4; // r6@1
  signed int v5; // r0@1
  void *v6; // r7@9
  signed int v7; // r5@9
  int v8; // ST08_4@10
  void **v9; // r0@10
  int v10; // ST0C_4@10
  int v11; // r7@12
  int v12; // r6@12
  int v13; // r0@2
  signed int v14; // r0@17
  signed int v15; // r0@19
  signed int v16; // r0@22
  signed int v17; // r0@24
  signed int v18; // r0@26
  signed int v19; // r0@28
  int *v20; // r1@31
  int v22; // [sp+2Ch] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = 4 * (unsigned __int8)a1;
  v3 = v2;
  v4 = &dword_3004B20[2 * (v2 + v1)];
  v5 = *((_WORD *)v4 + 4);
  if ( v5 == 1 )
  {
    v13 = (32 * AllocSpritePalette(10000) & 0x1FFF) + 542;
    *(_WORD *)(v13 + 33746632) = 0x7FFF;
    *(_WORD *)(v13 + 33745608) = 0x7FFF;
    v201608A = CreateSprite((int)&gSpriteTemplate_81F9574, 108, 80);
    v201608B = CreateSprite((int)&gSpriteTemplate_81F958C, 132, 80);
    gSprites[68 * v201608A + 62] |= 4u;
    gSprites[68 * v201608B + 62] |= 4u;
    ++*((_WORD *)v4 + 4);
  }
  else if ( v5 > 1 )
  {
    if ( v5 == 2 )
    {
      if ( *((_WORD *)v4 + 9) )
      {
        v14 = (signed __int16)sine2(*((_WORD *)v4 + 5));
        if ( (signed __int16)v14 < 0 )
          v14 += 31;
        word_30042C0 = -20 - (v14 >> 5);
        v15 = (signed __int16)sine2(*((_WORD *)v4 + 6));
        if ( (signed __int16)v15 < 0 )
          v15 += 31;
        word_3004288 = -140 - (v15 >> 5);
        word_30041B4 = -36;
        word_3004280 = -36;
      }
      else
      {
        v16 = (signed __int16)sine2(*((_WORD *)v4 + 5));
        if ( (signed __int16)v16 < 0 )
          v16 += 31;
        word_30042C0 = -20 - (v16 >> 5);
        v17 = (signed __int16)cosine2(*((_WORD *)v4 + 5));
        if ( (signed __int16)v17 < 0 )
          v17 += 31;
        word_30041B4 = (v17 >> 5) - 164;
        v18 = (signed __int16)sine2(*((_WORD *)v4 + 6));
        if ( (signed __int16)v18 < 0 )
          v18 += 31;
        word_3004288 = -140 - (v18 >> 5);
        v19 = (signed __int16)cosine2(*((_WORD *)v4 + 6));
        if ( (signed __int16)v19 < 0 )
          v19 += 31;
        word_3004280 = (v19 >> 5) - 164;
      }
      v20 = &dword_3004B20[10 * v1];
      if ( *((_WORD *)v20 + 6) )
      {
        *((_WORD *)v20 + 6) -= 2;
        *((_WORD *)v20 + 5) += 2;
      }
      else
      {
        if ( *((_WORD *)v20 + 9) )
          sub_800DC24();
        audio_play(120);
        DestroyTask(v1);
        gSprites[68 * v201608A + 62] &= 0xFBu;
        gSprites[68 * v201608B + 62] &= 0xFBu;
        *(_WORD *)&gSprites[68 * v201608B + 4] = *(_WORD *)&gSprites[68 * v201608B + 4] & 0xFC00 | ((*(_WORD *)&gSprites[68 * v201608B + 4] & 0x3FF)
                                                                                                  + 64) & 0x3FF;
        *(_WORD *)&gSprites[68 * v201608A + 46] = 0;
        *(_WORD *)&gSprites[68 * v201608B + 46] = 1;
        *(_WORD *)&gSprites[68 * v201608A + 48] = *(_WORD *)&gSprites[68 * v201608A + 32];
        *(_WORD *)&gSprites[68 * v201608B + 48] = *(_WORD *)&gSprites[68 * v201608B + 32];
        *(_WORD *)&gSprites[68 * v201608A + 50] = 0;
        *(_WORD *)&gSprites[68 * v201608B + 50] = 0;
      }
    }
  }
  else if ( !*((_WORD *)v4 + 4) )
  {
    if ( v20239F8 & 0x40 )
    {
      v6 = &unk_3002978;
      v7 = 3;
      do
      {
        v8 = *((_BYTE *)v6 + 16) & 3;
        v9 = &gUnknown_081F9680 + 3 * v8;
        v10 = (int)*v9;
        sub_8002E4C((int)*v9, (int)v6, *((_WORD *)v9 + 2), *((_BYTE *)v9 + 6), *((_BYTE *)v9 + 7), 1);
        sub_8002F44(v10);
        sub_800DAF8(v1, v8, dword_81F9688[3 * v8]);
        v6 = (char *)v6 + 28;
        --v7;
      }
      while ( v7 >= 0 );
    }
    else
    {
      v11 = v20160CB;
      v12 = v20160CB ^ 1;
      if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) )
      {
        v12 = v20160CB;
        v11 = v20160CB ^ 1;
      }
      sub_8002E4C(50348496, (int)&unk_3002978 + 28 * v11, 32, 19, 24, 1);
      sub_8002F44(50348496);
      sub_800DAF8(v1, v11, 100721092);
      sub_8002E4C(50348624, (int)&unk_3002978 + 28 * v12, 64, 19, 24, 1);
      sub_8002F44(50348624);
      sub_800DAF8(v1, v12, 100725188);
    }
    ++LOWORD(dword_3004B20[2 * (v3 + v1) + 2]);
  }
  return v22;
}
