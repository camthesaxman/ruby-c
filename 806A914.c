signed int __fastcall sub_806A914(unsigned __int8 a1)
{
  int *v1; // r1@1
  signed int result; // r0@1

  v1 = &dword_3004B20[10 * a1];
  result = 1;
  *((_WORD *)v1 + 4) = 1;
  return result;
}
