int __fastcall sub_8044804(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r4@1
  int v5; // r0@3
  signed int v6; // r7@4
  signed int v7; // r1@4
  signed int v8; // r2@4
  signed __int16 v9; // r8@4
  signed __int16 v10; // r5@4
  int v11; // r4@12
  _WORD *v12; // r1@12
  signed int v13; // r6@12
  char *v14; // r4@16
  signed int v15; // r6@19
  int *v16; // r4@19
  signed __int16 v17; // r9@19
  __int16 v18; // r8@19
  char *v19; // r0@25
  signed __int16 v20; // r1@25
  signed int v21; // r6@29
  int *v22; // r4@29
  int v23; // r5@29
  char *v24; // r2@33
  __int16 v25; // r3@33
  __int16 v26; // r1@33
  signed int v27; // r6@43
  int v28; // r5@43
  _BYTE *v29; // r4@43
  char *v30; // r2@47
  __int16 v31; // r3@47
  __int16 v32; // r1@47
  int v33; // r4@56
  int *v34; // r0@56
  signed int v35; // r6@56
  char *v36; // r1@56
  int v38; // [sp+0h] [bp-48h]@19
  _BYTE v39[3]; // [sp+5h] [bp-43h]@43
  int v40; // [sp+8h] [bp-40h]@1
  _WORD *v41; // [sp+Ch] [bp-3Ch]@1
  int v42; // [sp+10h] [bp-38h]@1
  unsigned int v43; // [sp+14h] [bp-34h]@12
  int v44; // [sp+18h] [bp-30h]@16
  int v45; // [sp+1Ch] [bp-2Ch]@19
  int v46; // [sp+20h] [bp-28h]@12
  int v47; // [sp+24h] [bp-24h]@12

  v41 = (_WORD *)a2;
  a1 = (unsigned __int8)a1;
  v40 = (unsigned __int8)a1;
  v4 = a3;
  v42 = a4;
  if ( a3 && (unsigned __int8)battle_get_per_side_status(a1) == 3 )
  {
    v6 = 1;
    v7 = 104;
    v8 = 40;
    v9 = -100;
  }
  else
  {
    v5 = battle_side_get_owner(v40) << 24;
    if ( !v5 )
    {
      v6 = 0;
      v7 = 136;
      v8 = 96;
      v9 = 100;
      v10 = -5;
      goto _08044884;
    }
    v6 = 1;
    if ( v4 && battle_type_is_double(v5) << 24 )
    {
      v7 = 104;
      v8 = 16;
    }
    else
    {
      v7 = 104;
      v8 = 40;
    }
    v9 = -100;
  }
  v10 = 5;
_08044884:
  v43 = 0;
  v11 = 8 * v6;
  v46 = v7 << 16;
  v47 = v8 << 16;
  v12 = v41;
  v13 = 5;
  do
  {
    if ( *v12 != 0xFFFF )
      v43 = ((v43 << 24) + 0x1000000) >> 24;
    v12 += 4;
    --v13;
  }
  while ( v13 >= 0 );
  LoadCompressedObjectPic(&gUnknown_0820A754[v11]);
  LoadSpriteSheet((int)&gUnknown_0820A784[v11]);
  LoadSpritePalette((int)&gUnknown_0820A764 + v11);
  LoadSpritePalette((int)&gUnknown_0820A774 + v11);
  v44 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_820A7A4 + 24 * v6, SHIWORD(v46), SHIWORD(v47));
  v14 = &gSprites[68 * v44];
  SetSubspriteTables((int)v14, (int)&gSubspriteTables_820A6E4);
  *((_WORD *)v14 + 18) = v9;
  *((_WORD *)v14 + 23) = v10;
  if ( v6 )
  {
    *((_WORD *)v14 + 16) -= 96;
    v14[3] = v14[3] & 0xC1 | 0x10;
  }
  else
  {
    *((_WORD *)v14 + 16) += 96;
  }
  v15 = 0;
  v16 = &v38;
  v45 = 24 * v6;
  v17 = 10;
  v18 = 0;
  do
  {
    *(_BYTE *)v16 = CreateSpriteAtEnd(
                      (int)&gSpriteTemplate_820A7D4 + v45,
                      v46 >> 16,
                      (unsigned int)(v47 - 0x40000) >> 16);
    if ( !v42 )
      dword_2020020[17 * *(_BYTE *)v16] = (int)sub_8045180;
    if ( !v6 )
    {
      *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 36] = 0;
      *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 38] = 0;
    }
    *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 46] = v44;
    if ( v6 )
    {
      *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 32] = *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 32] - 24 - 10 * (5 - v15);
      *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 48] = 7 * (6 - v15) + 10;
      v19 = &gSprites[68 * *(_BYTE *)v16];
      v20 = -120;
    }
    else
    {
      *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 32] += 24 + v18;
      *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 48] = v17;
      v19 = &gSprites[68 * *(_BYTE *)v16];
      v20 = 120;
    }
    *((_WORD *)v19 + 18) = v20;
    *(_WORD *)&gSprites[68 * *(_BYTE *)v16 + 50] = v6;
    v16 = (int *)((char *)v16 + 1);
    v17 += 7;
    v18 += 10;
    ++v15;
  }
  while ( v15 <= 5 );
  if ( !(battle_side_get_owner(v40) << 24) )
  {
    v21 = 0;
    v22 = &v38;
    v23 = (int)v41;
    while ( 1 )
    {
      if ( v20239F8 & 0x40 )
      {
        if ( *(_WORD *)v23 == 0xFFFF )
          goto _08044AE6;
        if ( !*(_WORD *)v23 )
        {
          v24 = &gSprites[68 * *(_BYTE *)v22];
          v25 = *((_WORD *)v24 + 2);
          v26 = (v25 & 0x3FF) + 3;
_08044B46:
          *((_WORD *)v24 + 2) = v25 & 0xFC00 | v26 & 0x3FF;
          goto _08044B52;
        }
      }
      else
      {
        if ( v21 >= (char)v43 )
        {
_08044AE6:
          *(_WORD *)&gSprites[68 * *(_BYTE *)v22 + 4] = *(_WORD *)&gSprites[68 * *(_BYTE *)v22 + 4] & 0xFC00 | ((*(_WORD *)&gSprites[68 * *(_BYTE *)v22 + 4] & 0x3FF) + 1) & 0x3FF;
          *(_WORD *)&gSprites[68 * *(_BYTE *)v22 + 60] = 1;
          goto _08044B52;
        }
        if ( !*(_WORD *)v23 )
        {
          v24 = &gSprites[68 * *(_BYTE *)v22];
          v25 = *((_WORD *)v24 + 2);
          v26 = (v25 & 0x3FF) + 3;
          goto _08044B46;
        }
      }
      if ( *(_DWORD *)(v23 + 4) )
      {
        v24 = &gSprites[68 * *(_BYTE *)v22];
        v25 = *((_WORD *)v24 + 2);
        v26 = (v25 & 0x3FF) + 2;
        goto _08044B46;
      }
_08044B52:
      v22 = (int *)((char *)v22 + 1);
      v23 += 8;
      if ( ++v21 > 5 )
        goto _08044C38;
    }
  }
  v27 = 0;
  v28 = (int)v41;
  v29 = v39;
  do
  {
    if ( v20239F8 & 0x40 )
    {
      if ( *(_WORD *)v28 == 0xFFFF )
        goto _08044BC2;
      if ( !*(_WORD *)v28 )
      {
        v30 = &gSprites[68 * *v29];
        v31 = *((_WORD *)v30 + 2);
        v32 = (v31 & 0x3FF) + 3;
        goto _08044C22;
      }
    }
    else
    {
      if ( v27 >= (char)v43 )
      {
_08044BC2:
        *(_WORD *)&gSprites[68 * *v29 + 4] = *(_WORD *)&gSprites[68 * *v29 + 4] & 0xFC00 | ((*(_WORD *)&gSprites[68 * *v29 + 4] & 0x3FF)
                                                                                          + 1) & 0x3FF;
        *(_WORD *)&gSprites[68 * *v29 + 60] = 1;
        goto _08044C2E;
      }
      if ( !*(_WORD *)v28 )
      {
        v30 = &gSprites[68 * *v29];
        v31 = *((_WORD *)v30 + 2);
        v32 = (v31 & 0x3FF) + 3;
        goto _08044C22;
      }
    }
    if ( !*(_DWORD *)(v28 + 4) )
      goto _08044C2E;
    v30 = &gSprites[68 * *v29];
    v31 = *((_WORD *)v30 + 2);
    v32 = (v31 & 0x3FF) + 2;
_08044C22:
    *((_WORD *)v30 + 2) = v31 & 0xFC00 | v32 & 0x3FF;
_08044C2E:
    --v29;
    v28 += 8;
    ++v27;
  }
  while ( v27 <= 5 );
_08044C38:
  v33 = (unsigned __int8)CreateTask(TaskDummy, 5);
  v34 = &dword_3004B20[10 * v33];
  *((_WORD *)v34 + 4) = v40;
  *((_WORD *)v34 + 5) = v44;
  v35 = 0;
  v36 = (char *)&unk_3004B2E + 40 * v33;
  do
  {
    *(_WORD *)v36 = *((_BYTE *)&v38 + v35);
    v36 += 2;
    ++v35;
  }
  while ( v35 <= 5 );
  LOWORD(dword_3004B20[10 * v33 + 7]) = v42;
  audio_play_and_stuff(114, 0);
  return v33;
}
