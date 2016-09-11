_BYTE *__fastcall StartSpriteAnim(int a1, char a2)
{
  _BYTE *result; // r0@1

  *(_BYTE *)(a1 + 42) = a2;
  result = (_BYTE *)(a1 + 63);
  *result = (*result | 4) & 0xEF;
  return result;
}
