signed int __fastcall sub_80DFD24(unsigned __int8 a1)
{
  int *v1; // r1@1
  signed int result; // r0@1

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  *((_WORD *)v1 + 5) = 4096;
  *v1 = (int)sub_80DFD58;
  result = 67108946;
  v4000052 = 4096;
  return result;
}
