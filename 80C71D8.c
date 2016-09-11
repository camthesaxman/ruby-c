signed int sub_80C71D8()
{
  signed int v0; // r5@1
  char *v1; // r4@2
  signed int result; // r0@2

  LoadSpritePalette((int)"@(=\b");
  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D2894, 0, 0);
  if ( v0 == 64 )
  {
    result = 64;
  }
  else
  {
    v1 = &gSprites[68 * v0];
    sub_8060388(16, 13, (_WORD *)v1 + 16, (_WORD *)v1 + 17);
    v1[62] |= 2u;
    *((_WORD *)v1 + 16) += 16;
    *((_WORD *)v1 + 17) += 2;
    result = v0;
  }
  return result;
}
