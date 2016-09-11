int __fastcall sub_8119224(int a1)
{
  int v1; // r7@1
  int v2; // r9@1
  unsigned int v3; // r6@1
  _BYTE *v4; // r3@2
  char *v5; // r1@2
  char *v6; // r0@2
  char *v7; // r0@2
  char *v8; // r0@2
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+24h] [bp-4h]@3

  v1 = a1;
  memcpy(&v10, (const char *)&gUnknown_083FA60E, 8);
  v2 = (*(_WORD *)(v1 + 60) - 2) & 0xFFFF;
  v2019073 = CreateSprite((int)&gSpriteTemplate_83FA50C, 36, -12);
  v2019074 = CreateSprite(
               (int)&gSpriteTemplate_83FA5C0,
               *((_WORD *)&v10 + 2 * *(_WORD *)(v1 + 46)),
               *((_WORD *)&v10 + 2 * *(_WORD *)(v1 + 46) + 1));
  v2019075 = CreateSprite((int)&gSpriteTemplate_83FA5D8, 36, 140);
  gSprites[68 * v2019075 + 1] = gSprites[68 * v2019075 + 1] & 0xF3 | 4;
  v3 = 0;
  do
  {
    v4 = (_BYTE *)(v3 + 33656947);
    v5 = &gSprites[68 * *(_BYTE *)(v3 + 33656947) + 62];
    *v5 &= 0xFDu;
    v6 = &gSprites[68 * *(_BYTE *)(v3 + 33656947) + 62];
    *v6 |= 4u;
    v7 = &gSprites[68 * *(_BYTE *)(v3 + 33656947) + 44];
    *v7 |= 0x40u;
    v8 = &gSprites[68 * *(_BYTE *)(v3 + 33656947) + 44];
    *v8 |= 0x80u;
    *(_WORD *)&gSprites[68 * *v4 + 54] = v2019073;
    *(_WORD *)&gSprites[68 * *v4 + 56] = v2019074;
    *(_WORD *)&gSprites[68 * *v4 + 58] = v2019075;
    *(_WORD *)&gSprites[68 * *v4 + 50] = v2;
    *(_WORD *)&gSprites[68 * *v4 + 52] = *(_WORD *)(v1 + 60) * gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 1]
                                       + gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2]
                                       - 1;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 2 );
  gSprites[68 * v2019074 + 62] |= 2u;
  v2019038 = v1;
  return v11;
}
