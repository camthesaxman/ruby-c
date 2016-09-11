int __fastcall sub_81193D4(int a1)
{
  int v1; // r7@1
  unsigned int v2; // r8@1
  int v3; // r9@1
  _BYTE *v4; // r2@2
  int v6; // [sp+0h] [bp-24h]@1
  int v7; // [sp+20h] [bp-4h]@3

  v1 = a1;
  v2 = 0;
  memcpy(&v6, (const char *)&gUnknown_083FA616, 8);
  v3 = (*(_WORD *)(v1 + 60) - 2) & 0xFFFF;
  v2019073 = CreateSprite(
               (int)&gSpriteTemplate_83FA524,
               *((_WORD *)&v6 + 2 * *(_WORD *)(v1 + 46)),
               *((_WORD *)&v6 + 2 * *(_WORD *)(v1 + 46) + 1));
  StartSpriteAnim((int)&gSprites[68 * v2019073], *(_BYTE *)(v1 + 46));
  v2019074 = CreateSprite(
               (int)&gSpriteTemplate_83FA5F0,
               *((_WORD *)&v6 + 2 * *(_WORD *)(v1 + 46)),
               *((_WORD *)&v6 + 2 * *(_WORD *)(v1 + 46) + 1));
  gSprites[68 * v2019074 + 44] |= 0x80u;
  gSprites[68 * v2019074 + 44] |= 0x40u;
  *(_WORD *)(v1 + 60) = v3 * gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 1]
                      + *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 16]
                      + 45;
  do
  {
    v4 = (_BYTE *)(v2 + 33656947);
    *(_WORD *)&gSprites[68 * *v4 + 54] = v2019073;
    *(_WORD *)&gSprites[68 * *v4 + 56] = v2019074;
    *(_WORD *)&gSprites[68 * *v4 + 58] = v2019074;
    *(_WORD *)&gSprites[68 * *v4 + 50] = v3;
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 33656947) + 52] = *(_WORD *)(v1 + 60) - 45;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 1 );
  v2019038 = v1;
  return v7;
}
