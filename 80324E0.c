_BYTE *__fastcall sub_80324E0(int a1)
{
  _BYTE *result; // r0@1

  result = (_BYTE *)((4 * a1 & 0x3FF) + 33650688);
  *result &= 0xFBu;
  return result;
}
