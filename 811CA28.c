int __fastcall sub_811CA28(__int16 a1)
{
  char *v1; // r1@1
  int result; // r0@1

  v1 = &gSprites[68 * a1];
  result = *((_WORD *)v1 + 23) + 1;
  *((_WORD *)v1 + 23) = result;
  return result;
}
