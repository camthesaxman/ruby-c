int (*__fastcall sub_80C70A0(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v1 = &dword_3004B20[10 * a1];
  result = sub_80C70BC;
  *v1 = (int)sub_80C70BC;
  return result;
}
