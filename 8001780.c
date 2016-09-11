_BYTE *__fastcall AnimCmd_end(int a1)
{
  _BYTE *result; // r0@1

  --*(_BYTE *)(a1 + 43);
  result = (_BYTE *)(a1 + 63);
  *result |= 0x10u;
  return result;
}
