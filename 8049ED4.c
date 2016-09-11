int __fastcall sub_8049ED4(unsigned __int8 a1)
{
  int v1; // r10@1
  unsigned int v2; // r0@1
  unsigned int v3; // r8@3
  _BYTE *v4; // r3@3
  signed int v5; // r0@3
  unsigned int v6; // r4@12
  int v7; // r9@12
  int v8; // r3@13
  char *v9; // r0@14
  int v10; // r5@15
  int v11; // r3@15
  int v12; // r6@15
  char *v13; // r0@15
  _BYTE *v14; // r4@15
  int v15; // r0@15
  int v16; // r6@8
  int v17; // r9@8
  _BYTE *v18; // r3@8
  int v19; // r6@8
  char v20; // r5@8
  int v21; // r4@8
  int v22; // r1@8
  int v23; // ST00_4@10
  int v24; // ST04_4@10
  char v26; // [sp+Ch] [bp-88h]@8
  char v27; // [sp+Dh] [bp-87h]@8
  char v28; // [sp+Eh] [bp-86h]@8
  char v29; // [sp+Fh] [bp-85h]@8
  char v30; // [sp+10h] [bp-84h]@8
  char v31; // [sp+11h] [bp-83h]@8
  __int16 v32; // [sp+12h] [bp-82h]@8
  char v33; // [sp+34h] [bp-60h]@8
  int v34; // [sp+6Ch] [bp-28h]@1
  int v35; // [sp+70h] [bp-24h]@12
  int v36; // [sp+90h] [bp-4h]@20

  v1 = a1;
  v2 = *(_BYTE *)(dword_3004824 + 130 + a1);
  v34 = 1;
  if ( v2 <= 5 )
    v34 = 0;
  v3 = v2 % 6 & 0xFF;
  v4 = (_BYTE *)(dword_3004824 + 128 + v1);
  v5 = *v4;
  if ( v5 == 2 )
  {
    if ( (int (*)())dword_2020020[17 * *(_BYTE *)(dword_3004824 + 52 + 6 * v34 + v3)] == sub_809D62C )
      *v4 = 3;
  }
  else if ( v5 > 2 )
  {
    if ( v5 == 3 )
    {
      sub_804A96C(dword_3004824 + 200, 15 * v34 & 0xFF, 0, &gTradeMovesBoxTilemap);
      v16 = 2 * v34;
      v17 = 3 * v34;
      v18 = (_BYTE *)(dword_3004824 + 52 + v3 + 6 * v34);
      *(_WORD *)&gSprites[68 * *v18 + 32] = 8
                                          * (((unsigned __int8)gTradeMonSpriteCoords[12 * v34]
                                            + (unsigned __int8)gTradeMonSpriteCoords[2 * (6 * v34 + 1)]) >> 1)
                                          + 14;
      *(_WORD *)&gSprites[68 * *v18 + 34] = 8 * (unsigned __int8)byte_820C29D[4 * v17] - 12;
      *(_WORD *)&gSprites[68 * *v18 + 36] = 0;
      *(_WORD *)&gSprites[68 * *v18 + 38] = 0;
      v26 = -4;
      v27 = 6;
      v28 = 4;
      v29 = -4;
      v30 = 17;
      v31 = (64 - (char)sub_804A2B4(&v32, v34, v3)) / 2;
      LOWORD(v17) = (_WORD)v17 << 6;
      sub_8003460(
        dword_3004824 + 4,
        (int)&v26,
        *(_BYTE *)(dword_3004824 + 122) + (_WORD)v17,
        *((_BYTE *)&gUnknown_0820C334 + 4 * v34),
        byte_820C335[4 * v34]);
      sub_804A33C(&v33, v34, v3);
      v19 = 2 * (v16 + 1);
      v20 = *((_BYTE *)&gUnknown_0820C334 + v19);
      v21 = (byte_820C335[v19] + 1) & 0xFF;
      sub_8003460(
        dword_3004824 + 4,
        (int)&gUnknown_0842C7CA,
        *(_BYTE *)(dword_3004824 + 122) + (_WORD)v17 + 32,
        *((_BYTE *)&gUnknown_0820C334 + v19),
        byte_820C335[v19] + 1);
      sub_8003460(dword_3004824 + 4, (int)&v33, *(_BYTE *)(dword_3004824 + 122) + (_WORD)v17 + 38, v20, v21);
      v22 = dword_3004824;
    }
    else
    {
      if ( v5 != 4 )
        return v36;
      sub_804ACD8(138593931, 32 * *(_WORD *)(dword_3004824 + 126) + 100728832, 20);
      v23 = gUnknown_0820C3D1[2 * v1];
      v24 = gUnknown_0820C3D1[2 * v1 + 1];
      sub_804A51C(v1, v3, (v23 + 4) & 0xFF, (v24 + 1) & 0xFF);
      v22 = dword_3004824;
    }
    ++*(_BYTE *)(v22 + 128 + v1);
  }
  else if ( v5 == 1 )
  {
    v6 = 0;
    v7 = 2 * v34;
    v35 = 16 * v1;
    if ( (unsigned int)*(_BYTE *)(dword_3004824 + 66 + v1) > 0 )
    {
      v8 = 6 * v34;
      do
      {
        v9 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 52 + v6 + v8) + 62];
        *v9 |= 4u;
        v6 = (v6 + 1) & 0xFF;
      }
      while ( v6 < *(_BYTE *)(dword_3004824 + 66 + v1) );
    }
    v10 = v34 + v7;
    v11 = 2 * (v34 + v7);
    v12 = v3 + v11;
    v13 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 52 + v3 + v11) + 62];
    *v13 &= 0xFBu;
    v14 = (_BYTE *)(dword_3004824 + 52 + v3 + v11);
    *(_WORD *)&gSprites[68 * *v14 + 46] = 20;
    v10 *= 4;
    *(_WORD *)&gSprites[68 * *v14 + 50] = 8
                                        * (((unsigned __int8)gTradeMonSpriteCoords[v10]
                                          + (unsigned __int8)gTradeMonSpriteCoords[2 * (v11 + 1)]) >> 1)
                                        + 14;
    *(_WORD *)&gSprites[68 * *v14 + 54] = 8 * (unsigned __int8)byte_820C29D[v10] - 12;
    oamt_set_x3A_32(&gSprites[68 * *v14], sub_809D62C);
    ++*(_BYTE *)(dword_3004824 + 128 + v1);
    v15 = sub_8078A34(&gSprites[68 * *(_BYTE *)(dword_3004824 + 52 + v12)]);
    sub_8072DEC(v15);
    FillWindowRect_DefaultPalette(dword_3004824 + 4, 0, gUnknown_0820C330[v7], 0, byte_820C331[v7], 0x13u);
    sub_804A96C(dword_3004824 + 200, (v35 - v1) & 0xFF, 0, &gTradePartyBoxTilemap);
    if ( !v34 )
      sub_804A80C(0);
  }
  return v36;
}
