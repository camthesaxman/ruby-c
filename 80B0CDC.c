int __fastcall sub_80B0CDC(int a1)
{
  int result; // r0@1

  result = (4 * a1 & 0x3FF) + 33657656;
  *(_BYTE *)(result + 2) &= 0xFDu;
  return result;
}
