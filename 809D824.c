_BYTE *__fastcall sub_809D824(int a1, char a2)
{
  _BYTE *result; // r0@1

  *(_BYTE *)(a1 + 42) = a2;
  *(_BYTE *)(a1 + 44) &= 0xC0u;
  result = (_BYTE *)(a1 + 43);
  *result = 0;
  return result;
}
