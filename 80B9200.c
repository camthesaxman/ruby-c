int __fastcall sub_80B9200(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r2@1
  int result; // r0@1

  v2 = 28 * a1 + 33657440;
  *(_WORD *)(v2 + 2) = *(_WORD *)(28 * a1 + 0x2019262) - a2;
  result = *(_BYTE *)(28 * a1 + 0x201926E);
  *(_BYTE *)(v2 + 14) = a2 + result;
  return result;
}
