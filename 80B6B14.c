char *sub_80B6B14()
{
  char *result; // r0@1

  result = &gSprites[68 * v2000010];
  *((_WORD *)result + 23) = 2;
  *((_WORD *)result + 24) = v200000E;
  return result;
}
