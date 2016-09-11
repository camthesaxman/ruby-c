int (*__fastcall sub_8148044(unsigned __int8 a1))()
{
  int v1; // r1@1
  char *v2; // r2@1
  int (*result)(); // r0@1

  v1 = 17 * a1;
  v2 = &gSprites[v1 * 4];
  *((_WORD *)v2 + 16) = 48;
  *((_WORD *)v2 + 17) = 80;
  *((_WORD *)v2 + 23) = -8;
  *((_WORD *)v2 + 24) = 1;
  result = sub_8148078;
  dword_2020020[v1] = (int)sub_8148078;
  return result;
}
