int __fastcall sub_80B157C(unsigned __int8 a1)
{
  int v1; // r1@1
  int result; // r0@1

  v1 = 28 * a1 + 33657440;
  *(_BYTE *)(v1 + 12) |= 1u;
  result = 0;
  *(_WORD *)(v1 + 6) = 0;
  return result;
}
