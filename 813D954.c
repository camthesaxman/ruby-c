int __fastcall sub_813D954(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  __int16 v4; // r8@1
  unsigned int v5; // r5@1
  int v6; // r9@1
  char *v7; // r0@2
  unsigned int v8; // r5@3
  char *v9; // r0@4
  int result; // r0@5
  __int16 v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1

  v3 = (unsigned __int16)a2;
  v4 = a3;
  v5 = 0;
  v6 = a1 << 16;
  v12 = a2 << 16;
  v11 = a1;
  do
  {
    v7 = &gSprites[68
                 * (unsigned __int8)CreateSprite(
                                      (int)&gSpriteTemplate_840AF94,
                                      v11 + word_840AF52[2 * v5],
                                      (unsigned int)((v3 << 16) - 0x40000) >> 16)];
    *((_WORD *)v7 + 23) = v4;
    StartSpriteAnim((int)v7, gUnknown_0840AF50[4 * v5]);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 8 );
  v8 = 0;
  do
  {
    v9 = &gSprites[68
                 * (unsigned __int8)CreateSprite((int)"Ð\aÑ\a˜®@\b4¯@\b", HIWORD(v6) + word_840AF76[2 * v8], v3 + 12)];
    *((_WORD *)v9 + 23) = v4;
    StartSpriteAnim((int)v9, gUnknown_0840AF74[4 * v8]);
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 <= 7 );
  LOBYTE(result) = CreateSprite((int)"Ð\aÑ\a ®@\bL¯@\b", 120, (unsigned int)(v12 - 0x40000) >> 16);
  *(_WORD *)&gSprites[68 * (unsigned __int8)result + 46] = v4;
  return (unsigned __int8)result;
}
