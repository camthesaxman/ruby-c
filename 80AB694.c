int (*__fastcall sub_80AB694(unsigned __int8 a1))()
{
  int *v1; // r1@1
  int (*result)(); // r0@1

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 1;
  result = sub_80AB6B4;
  *v1 = (int)sub_80AB6B4;
  return result;
}
