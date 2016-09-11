int __fastcall AddCameraObject(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  int result; // r0@1
  char *v3; // r1@1

  v1 = a1;
  result = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_830FD24, 0, 0);
  v3 = &gSprites[68 * result];
  v3[62] |= 4u;
  *((_WORD *)v3 + 23) = v1;
  return result;
}
