int __fastcall sub_80F84EC(int a1, unsigned int a2)
{
  int result; // r0@1

  result = 4 * a1 + 33719532;
  *(_BYTE *)result = a2;
  *(_BYTE *)(result + 1) = BYTE1(a2);
  *(_BYTE *)(result + 2) = a2 >> 16;
  *(_BYTE *)(result + 3) = BYTE3(a2);
  return result;
}
