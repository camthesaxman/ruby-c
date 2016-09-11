int sub_80AE8B4()
{
  int result; // r0@1
  char *v1; // r2@1

  LoadCompressedObjectPic(&gUnknown_083CA4C4);
  LoadCompressedObjectPalette((_DWORD *)"4—Ñ\bà«");
  result = (unsigned __int8)CreateSprite((int)&gUnknown_083CA4D4, 96, 10);
  v1 = &gSprites[68 * result];
  v1[62] |= 4u;
  *((_WORD *)v1 + 23) = *((_WORD *)v1 + 2) & 0x3FF;
  return result;
}
