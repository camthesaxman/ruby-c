int __fastcall sub_8076034(unsigned __int8 a1, int a2)
{
  int v2; // r9@1
  int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r4@5
  int v6; // r0@5
  char *v7; // r0@8
  int v8; // r4@8
  int v9; // r2@9
  int v10; // r0@11
  int v11; // r0@11
  int v12; // r1@11
  int v13; // r2@11
  int v14; // r3@11
  signed int v15; // r3@2
  unsigned int v16; // r5@2
  char *v17; // r1@14
  char *v18; // r0@14
  int v19; // r4@14
  unsigned __int8 v20; // r0@14
  int v22; // [sp+10h] [bp-38h]@3
  int v23; // [sp+14h] [bp-34h]@5
  unsigned __int8 v24; // [sp+18h] [bp-30h]@8
  int v25; // [sp+1Ch] [bp-2Ch]@4
  __int16 v26; // [sp+20h] [bp-28h]@5
  int v27; // [sp+24h] [bp-24h]@2
  int v28; // [sp+44h] [bp-4h]@15

  v2 = a1;
  if ( a2 << 24 )
  {
    v15 = 100687872;
    v16 = 0x2000;
    v27 = 32 * a1;
    do
    {
      v25 = 0;
      v40000D4 = &v25;
      v40000D8 = v15;
      v40000DC = -2063596544;
      v15 += 4096;
      v16 -= 4096;
    }
    while ( v16 > 0x1000 );
    v25 = 0;
    v40000D4 = &v25;
    v40000D8 = 100724736;
    v40000DC = -2063597056;
    v400000C = v400000C & 0xFC | 2;
    v400000D = v400000D & 0x3F | 0x40;
    v400000D &= 0xDFu;
    v17 = &gSprites[68 * *(_BYTE *)(a1 + 0x2024BE0)];
    word_3004288 = 32 - (*((_WORD *)v17 + 18) + *((_WORD *)v17 + 16));
    word_3004280 = 32 - (*((_WORD *)v17 + 19) + *((_WORD *)v17 + 17));
    v18 = &gSprites[68 * *(_BYTE *)(a1 + 0x2024BE0) + 62];
    *v18 |= 4u;
    v4000018 = word_3004288;
    v400001A = word_3004280;
    v19 = v27 + 33746120;
    LoadPalette(v27 + 33746120, 144, 32);
    v40000D4 = v19;
    v40000D8 = 83886368;
    v40000DC = -2080374776;
    v20 = battle_get_per_side_status(v2);
    sub_80E4EF8(0, 0, v20, 9);
  }
  else
  {
    sub_8078914(&v22);
    v3 = v22;
    v4 = 0x2000;
    v27 = 32 * v2;
    do
    {
      v25 = 0;
      v40000D4 = &v25;
      v40000D8 = v3;
      v40000DC = -2063596544;
      v3 += 4096;
      v4 -= 4096;
    }
    while ( v4 > 0x1000 );
    v25 = 0;
    v26 = 255;
    v40000D4 = &v26;
    v40000D8 = v23;
    v40000DC = -2130704384;
    v400000A = v400000A & 0xFC | 2;
    v400000B = v400000B & 0x3F | 0x40;
    v400000B &= 0xDFu;
    v5 = *(_BYTE *)(v2 + 33704928);
    v6 = 32 - (*(_WORD *)&gSprites[68 * v5 + 36] + *(_WORD *)&gSprites[68 * v5 + 32]);
    word_30042C0 = 32 - (*(_WORD *)&gSprites[68 * v5 + 36] + *(_WORD *)&gSprites[68 * v5 + 32]);
    if ( sub_8076BE0(v6) << 24 && sub_80AEB1C(v2019348) << 24 )
      --word_30042C0;
    word_30041B4 = 32 - (*(_WORD *)&gSprites[68 * v5 + 38] + *(_WORD *)&gSprites[68 * v5 + 34]);
    v7 = &gSprites[68 * *(_BYTE *)(v2 + 33704928) + 62];
    *v7 |= (unsigned int)gSprites;
    v4000014 = word_30042C0;
    v4000016 = word_30041B4;
    v8 = v27 + 33746120;
    LoadPalette(v27 + 33746120, 16 * v24, 32);
    v40000D4 = v8;
    v40000D8 = 32 * v24 + 83886080;
    v40000DC = -2080374776;
    if ( sub_8076BE0(-2080374776) << 24 )
      v9 = 0;
    else
      v9 = battle_get_per_side_status(v2) & 0xFF;
    v10 = sub_80E4EF8(0, 0, v9, v24);
    v11 = sub_8076BE0(v10) << 24;
    if ( v11 )
      sub_8076380(v11, v12, v13, v14);
  }
  return v28;
}
