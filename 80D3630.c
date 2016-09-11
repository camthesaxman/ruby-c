int (*__fastcall sub_80D3630(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  word_3004B0E = 0;
  result = sub_80D365C;
  *v1 = (int)sub_80D365C;
  return result;
}
