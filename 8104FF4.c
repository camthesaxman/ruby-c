int __fastcall sub_8104FF4(__int16 a1, __int16 a2, unsigned __int8 a3, __int16 a4)
{
  __int16 v4; // r8@1
  __int16 v5; // r4@1
  char *v6; // r2@1
  int v8; // [sp+10h] [bp-4h]@0

  v4 = a3;
  v5 = a4;
  v6 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED42C, a1, a2)];
  v6[5] = v6[5] & 0xF3 | 8;
  *((_WORD *)v6 + 23) = v4;
  *((_WORD *)v6 + 24) = v5;
  *((_WORD *)v6 + 25) = 10 * v5;
  *((_WORD *)v6 + 26) = -1;
  return v8;
}
