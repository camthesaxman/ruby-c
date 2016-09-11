int __fastcall sub_806E1D0(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int result; // r0@1

  result = a1 + 268;
  *(_WORD *)(2 * (a2 + (32 * a3 & 0x1FFF)) + 0x600F000) = result;
  return result;
}
