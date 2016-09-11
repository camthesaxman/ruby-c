int __fastcall sub_8043654(unsigned __int8 a1, unsigned __int8 a2, __int16 a3, __int16 a4, __int16 a5, char a6)
{
  __int16 v6; // r6@1
  __int16 v7; // r8@1
  char *v8; // r0@1
  int v10; // [sp+18h] [bp-4h]@0

  v6 = a3;
  v7 = a4;
  v8 = &gSprites[68 * (unsigned __int8)CreateSprite((int)"†[1‘‡£ \b\b§ \b", a1, a2)];
  *((_WORD *)v8 + 24) = v6;
  *((_WORD *)v8 + 25) = v7;
  *((_WORD *)v8 + 26) = a5;
  StartSpriteAnim((int)v8, a6);
  return v10;
}
