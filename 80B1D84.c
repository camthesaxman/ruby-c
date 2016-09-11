char *unref_sub_80B1D84()
{
  char *result; // r0@1

  *(_WORD *)&gSprites[68 * v201925C + 36] = 0;
  result = &gSprites[68 * v201925C + 62];
  *result &= 0xFBu;
  return result;
}
