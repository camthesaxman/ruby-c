int __fastcall battle_make_oam_normal_battle(unsigned __int8 a1)
{
  int v1; // r10@1
  int v2; // r6@3
  int v3; // r7@3
  char *v4; // r2@3
  int v5; // r0@7
  int v6; // r0@7
  unsigned __int8 v7; // r0@7
  unsigned int v8; // r2@7
  char *v9; // r3@7
  signed __int16 v10; // r0@7
  int v11; // r0@8
  int v12; // r0@8
  unsigned __int8 v13; // r0@8
  unsigned int v14; // r2@8
  char *v15; // r3@8
  unsigned __int8 v16; // r0@10
  __int16 v17; // r5@10
  char *v18; // r4@10
  int v19; // r0@10
  int v20; // r0@10
  char *v21; // r0@10
  signed __int16 v23; // [sp+0h] [bp-24h]@1

  v1 = a1;
  v23 = 0;
  if ( battle_type_is_double(0) << 24 )
  {
    if ( battle_side_get_owner(v1) << 24 )
    {
      v11 = battle_get_per_side_status(v1);
      v2 = (unsigned __int8)CreateSprite(
                              (int)&gSpriteTemplate_820A51C + 24 * ((unsigned int)(v11 << 24) >> 25),
                              240,
                              160);
      v12 = battle_get_per_side_status(v1);
      v13 = CreateSpriteAtEnd((int)&gSpriteTemplate_820A51C + 24 * ((unsigned int)(v12 << 24) >> 25), 240, 160);
      v3 = v13;
      *(_WORD *)&gSprites[68 * v2 + 6] = v13;
      v14 = 68 * v13;
      v15 = &gSprites[v14];
      *((_WORD *)v15 + 28) = v2;
      *((_WORD *)v15 + 2) = *(_WORD *)&gSprites[v14 + 4] & 0xFC00 | ((*(_WORD *)&gSprites[v14 + 4] & 0x3FF) + 32) & 0x3FF;
      dword_2020020[v14 / 4] = (int)sub_8043D5C;
      v10 = 2;
    }
    else
    {
      v5 = battle_get_per_side_status(v1);
      v2 = (unsigned __int8)CreateSprite(
                              (int)&gSpriteTemplate_820A4EC + 24 * ((unsigned int)(v5 << 24) >> 25),
                              240,
                              160);
      v6 = battle_get_per_side_status(v1);
      v7 = CreateSpriteAtEnd((int)&gSpriteTemplate_820A4EC + 24 * ((unsigned int)(v6 << 24) >> 25), 240, 160);
      v3 = v7;
      *(_WORD *)&gSprites[68 * v2 + 6] = v7;
      v8 = 68 * v7;
      v9 = &gSprites[v8];
      *((_WORD *)v9 + 28) = v2;
      *((_WORD *)v9 + 2) = *(_WORD *)&gSprites[v8 + 4] & 0xFC00 | ((*(_WORD *)&gSprites[v8 + 4] & 0x3FF) + 32) & 0x3FF;
      dword_2020020[v8 / 4] = (int)sub_8043D5C;
      v10 = 1;
    }
    v23 = v10;
  }
  else
  {
    if ( battle_side_get_owner(v1) << 24 )
    {
      v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_820A51C, 240, 160);
      v3 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_820A51C, 240, 160);
      *(_WORD *)&gSprites[68 * v3 + 4] = *(_WORD *)&gSprites[68 * v3 + 4] & 0xFC00 | ((*(_WORD *)&gSprites[68 * v3 + 4] & 0x3FF)
                                                                                    + 32) & 0x3FF;
      v23 = 2;
    }
    else
    {
      v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_820A4EC, 240, 160);
      v3 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_820A4EC, 240, 160);
      gSprites[68 * v2 + 1] &= 0x3Fu;
      v4 = &gSprites[68 * v3];
      v4[1] &= 0x3Fu;
      *((_WORD *)v4 + 2) = *((_WORD *)v4 + 2) & 0xFC00 | ((*((_WORD *)v4 + 2) & 0x3FF) + 64) & 0x3FF;
    }
    *(_WORD *)&gSprites[68 * v2 + 6] = v3;
    *(_WORD *)&gSprites[68 * v3 + 56] = v2;
    dword_2020020[17 * v3] = (int)sub_8043D5C;
  }
  v16 = CreateSpriteAtEnd((int)&gSpriteTemplate_820A56C + 24 * *(_BYTE *)(v1 + 33704562), 140, 60);
  v17 = v16;
  v18 = &gSprites[68 * v16];
  v19 = battle_side_get_owner(v1);
  SetSubspriteTables((int)v18, (int)&gSubspriteTables_820A684 + (8 * v19 & 0x7FF));
  v18[66] = v18[66] & 0x3F | 0x80;
  v18[5] = v18[5] & 0xF3 | 4;
  v20 = sub_8043CDC(1);
  CpuSet(v20, (32 * *((_WORD *)v18 + 2) & 0x7FFF) + 100728832, 67108880);
  v21 = &gSprites[68 * v2];
  *((_WORD *)v21 + 28) = v17;
  *((_WORD *)v21 + 29) = v1;
  v21[62] |= 4u;
  gSprites[68 * v3 + 62] |= 4u;
  *((_WORD *)v18 + 28) = v2;
  *((_WORD *)v18 + 29) = v23;
  v18[62] |= 4u;
  return v2;
}
