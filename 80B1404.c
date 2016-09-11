signed int __fastcall sub_80B1404(unsigned __int8 a1, char a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = 28 * a1;
  result = 33657440;
  *(_BYTE *)(v2 + 33657460) = a2;
  return result;
}
