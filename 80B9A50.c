unsigned int __fastcall sub_80B9A50(unsigned int a1, int a2)
{
  unsigned int result; // r0@1

  *(_WORD *)a2 = a1;
  result = a1 >> 16;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
