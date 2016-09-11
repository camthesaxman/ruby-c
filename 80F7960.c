char *__fastcall sub_80F7960(int a1, __int16 a2, int a3, int a4)
{
  int v4; // r0@1
  unsigned __int8 v5; // r0@1
  char *result; // r0@2
  __int16 v7; // [sp+0h] [bp-3Ch]@1
  __int16 v8; // [sp+2h] [bp-3Ah]@1
  void *v9; // [sp+4h] [bp-38h]@1
  void **v10; // [sp+8h] [bp-34h]@1
  int v11; // [sp+Ch] [bp-30h]@1
  void **v12; // [sp+10h] [bp-2Ch]@1
  void (*v13)(); // [sp+14h] [bp-28h]@1
  void *v14; // [sp+18h] [bp-24h]@1
  unsigned int v15; // [sp+1Ch] [bp-20h]@1
  int v16; // [sp+20h] [bp-1Ch]@1
  unsigned int v17; // [sp+24h] [bp-18h]@1

  v4 = a1 << 16;
  v14 = &gUnknown_083E4A14;
  v16 = a3;
  v17 = v17 & 0xFFFF0000 | (unsigned __int16)a2;
  v7 = HIWORD(v4);
  v8 = a2;
  v9 = &gUnknown_083E52B4;
  v10 = &gSpriteAnimTable_83E533C;
  v11 = 0;
  v12 = &gDummySpriteAffineAnimTable;
  v13 = nullsub_65;
  v15 = (v4 | 0x80) & 0xFFFF0000 | (a4 << 7) & 0xFFFF;
  LoadSpriteSheet((int)&v14);
  LoadSpritePalette((int)&v16);
  v5 = CreateSprite((int)&v7, 0, 0);
  if ( v5 == 64 )
    result = 0;
  else
    result = &gSprites[68 * v5];
  return result;
}
