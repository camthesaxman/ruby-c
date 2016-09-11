int __fastcall ApplyAffineAnimFrameAbsolute(unsigned __int8 a1, int a2)
{
  _BYTE *v2; // r2@1
  int result; // r0@1

  v2 = &sAffineAnimStates[12 * a1];
  *((_WORD *)v2 + 2) = *(_WORD *)a2;
  *((_WORD *)v2 + 3) = *(_WORD *)(a2 + 2);
  result = *(_BYTE *)(a2 + 4) << 8;
  *((_WORD *)v2 + 4) = result;
  return result;
}
