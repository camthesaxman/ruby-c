_BYTE *__fastcall sub_80A7B48(int a1)
{
  __int16 v1; // r2@1
  _BYTE *result; // r0@1

  *(_BYTE *)(a1 + 40) = *(_WORD *)(a1 + 56) - ((*(_WORD *)(a1 + 46) + 1) & 1);
  v1 = *(_WORD *)(a1 + 58) - ((*(_WORD *)(a1 + 46) + 1) & 1);
  result = (_BYTE *)(a1 + 41);
  *result = v1;
  return result;
}
