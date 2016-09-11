int __fastcall sub_812F86C(int result)
{
  int v1; // r1@1
  int v2; // r2@1

  v1 = *(_WORD *)(result + 58) + *(_WORD *)(result + 54);
  *(_WORD *)(result + 54) = v1;
  v2 = *(_WORD *)(result + 60) + *(_WORD *)(result + 56);
  *(_WORD *)(result + 56) = v2;
  *(_WORD *)(result + 32) = v1 << 16 >> 20;
  *(_WORD *)(result + 34) = v2 << 16 >> 20;
  return result;
}
