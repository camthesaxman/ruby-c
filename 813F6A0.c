int (*__fastcall sub_813F6A0(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 14) = word_3004B00[0];
  *((_WORD *)v1 + 15) = word_3004B02;
  result = sub_813F6CC;
  *v1 = (int)sub_813F6CC;
  return result;
}
