int sub_8088F60()
{
  int result; // r0@1
  char *v1; // r2@1

  result = (unsigned __int8)CreateSprite(137842700, 255, 180);
  v1 = &gSprites[68 * result];
  v1[5] = v1[5] & 3 | 4;
  *((_DWORD *)v1 + 7) = sub_8089018;
  return result;
}
