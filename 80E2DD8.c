int (*__fastcall sub_80E2DD8(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = word_3004B02;
  *((_WORD *)v1 + 7) = word_3004B04;
  *((_WORD *)v1 + 8) = word_3004B06;
  *((_WORD *)v1 + 9) = 0;
  result = sub_80E2E10;
  *v1 = (int)sub_80E2E10;
  return result;
}
