int __fastcall LoadWordFromTwoHalfwords(int a1, int *a2)
{
  int v2; // r2@1
  int result; // r0@1

  v2 = *(_WORD *)a1;
  result = *(_WORD *)(a1 + 2) << 16;
  *a2 = v2 | result;
  return result;
}
