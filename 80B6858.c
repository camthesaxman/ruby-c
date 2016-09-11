int __fastcall sub_80B6858(_WORD *a1, _WORD *a2)
{
  char *v2; // r2@1
  int result; // r0@1

  v2 = &gSprites[68 * v200000F];
  *a1 = *((_WORD *)v2 + 23);
  result = *((_WORD *)v2 + 24);
  *a2 = result;
  return result;
}
