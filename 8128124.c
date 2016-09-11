int __fastcall sub_8128124(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  int result; // r0@1
  char *v3; // r2@1

  v1 = a1;
  result = (unsigned __int8)CreateSpriteAtEnd((int)&gDummySpriteTemplate, 0, 0);
  v3 = &gSprites[68 * result];
  *((_DWORD *)v3 + 7) = sub_8128174;
  v3[62] |= 4u;
  *((_WORD *)v3 + 23) = v1;
  *((_WORD *)v3 + 24) = 1;
  return result;
}
