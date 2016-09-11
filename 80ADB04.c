int (*__fastcall sub_80ADB04(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v40000D4 = 33653252;
  v40000D8 = 33745608;
  v40000DC = -2080374528;
  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 2;
  result = sub_80ADB48;
  *v1 = (int)sub_80ADB48;
  return result;
}
