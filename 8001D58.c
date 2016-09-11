int __fastcall AffineAnimStateReset(unsigned __int8 a1)
{
  _BYTE *v1; // r1@1
  int result; // r0@1

  v1 = &sAffineAnimStates[12 * a1];
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  *((_WORD *)v1 + 2) = 256;
  *((_WORD *)v1 + 3) = 256;
  *((_WORD *)v1 + 4) = 0;
  return result;
}
