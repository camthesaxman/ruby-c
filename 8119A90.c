_BYTE *__fastcall sub_8119A90(int a1)
{
  _BYTE *result; // r0@1

  result = (_BYTE *)(a1 + 62);
  *result = *result & 0xFB | 4 * (((unsigned int)*result << 29 >> 31) ^ 1);
  return result;
}
