int (*__fastcall sub_8149FC8(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 9) = 0;
  *((_WORD *)v1 + 10) = 8;
  result = sub_8149FEC;
  *v1 = (int)sub_8149FEC;
  return result;
}
