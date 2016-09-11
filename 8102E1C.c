int *__fastcall sub_8102E1C(unsigned __int8 a1)
{
  int *result; // r0@1

  result = &dword_3004B20[10 * *(_BYTE *)(a1 + 0x200003A)];
  *((_WORD *)result + 4) = 2;
  return result;
}
