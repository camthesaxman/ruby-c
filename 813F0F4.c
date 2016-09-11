int __fastcall unref_sub_813F0F4(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v2; // r7@1
  int v3; // r6@1
  char *v4; // r5@1
  int v5; // r6@1
  char *v6; // r7@1
  int v7; // r4@1
  char *v8; // r8@1
  int *v9; // r0@1
  int v11; // [sp+0h] [bp-3Ch]@1
  int v12; // [sp+4h] [bp-38h]@1
  unsigned __int8 v13; // [sp+8h] [bp-34h]@1
  int v14; // [sp+Ch] [bp-30h]@1
  int v15; // [sp+10h] [bp-2Ch]@1
  int v16; // [sp+14h] [bp-28h]@1
  int v17; // [sp+18h] [bp-24h]@1
  int v18; // [sp+38h] [bp-4h]@1

  v15 = a1;
  word_30042C4 = 0;
  word_3004240 = 0;
  v4000048 = 16191;
  v400004A = 16189;
  v4000000 |= 0x8000u;
  v4000050 = 16194;
  v4000052 = 4096;
  v400000A &= 0xFCu;
  v400000B &= 0x3Fu;
  v400000B |= 0x20u;
  v400000A = v400000A & 0xF3 | 4;
  v1 = &gSprites[68 * (unsigned __int8)byte_3004340[v202F7C8]];
  v2 = (unsigned __int8)v1[6];
  v3 = *((_WORD *)v1 + 28) & 0xFF;
  v16 = (unsigned __int8)object_new_hidden_with_callback((int)SpriteCallbackDummy);
  v17 = (unsigned __int8)object_new_hidden_with_callback((int)SpriteCallbackDummy);
  v1[5] = v1[5] & 0xF3 | 4;
  v4 = &gSprites[68 * v2];
  v4[5] = v4[5] & 0xF3 | 4;
  gSprites[68 * v3 + 5] = gSprites[68 * v3 + 5] & 0xF3 | 4;
  v5 = 17 * v16;
  v6 = &gSprites[68 * v16];
  memcpy(v6, v1, 68);
  v7 = 17 * v17;
  v8 = &gSprites[68 * v17];
  memcpy(v8, v4, 68);
  v6[1] = v6[1] & 0xF3 | 8;
  v8[1] = v8[1] & 0xF3 | 8;
  dword_2020020[v5] = (int)SpriteCallbackDummy;
  dword_2020020[v7] = (int)SpriteCallbackDummy;
  sub_8078914((int)&v11);
  v14 = 0;
  v40000D4 = &v14;
  v40000D8 = v12;
  v40000DC = -2063596544;
  LZDecompressVram((int)&gUnknown_08D2EE48, v12);
  LZDecompressVram((int)&gUnknown_08D2EDFC, v11);
  LoadCompressedPalette((int)&gUnknown_08D2E150, 16 * v13, 32);
  word_30042C0 = 32 - *((_WORD *)v6 + 16);
  word_30041B4 = -*((_WORD *)v6 + 17) - 32;
  v9 = &dword_3004B20[10 * v15];
  *((_WORD *)v9 + 5) = 640;
  *((_WORD *)v9 + 4) = v16;
  *((_WORD *)v9 + 6) = v17;
  *v9 = (int)sub_813F300;
  return v18;
}
