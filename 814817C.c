int sub_814817C()
{
  int result; // r0@1
  char *v1; // r1@1

  result = (unsigned __int8)CreateSprite((int)"􏐏�!A\b�!A\b", 174, 84);
  v1 = &gSprites[68 * result];
  *((_WORD *)v1 + 23) = -12;
  *((_WORD *)v1 + 24) = 1;
  return result;
}
