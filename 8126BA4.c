int __fastcall objid_set_invisible(unsigned __int8 a1)
{
  char *v1; // r1@1
  int result; // r0@1

  v1 = &gSprites[68 * a1 + 62];
  result = (unsigned __int8)*v1 | 4;
  *v1 = result;
  return result;
}
