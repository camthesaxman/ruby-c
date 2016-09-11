_WORD *__fastcall sub_80A40AC(int a1)
{
  char *v1; // r1@1
  _WORD *v2; // r0@1
  _WORD *result; // r0@1

  v1 = (char *)word_2022280 + ((a1 << 7) & 0x7FFF);
  *(_WORD *)v1 = 79;
  *((_WORD *)v1 + 1) = 79;
  *((_WORD *)v1 + 2) = 79;
  v2 = v1 + 64;
  *v2 = 79;
  result = v2 + 1;
  *result = 79;
  *((_WORD *)v1 + 34) = 79;
  return result;
}
