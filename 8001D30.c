signed int __fastcall AffineAnimStateStartAnim(unsigned __int8 a1, char a2)
{
  _BYTE *v2; // r2@1
  signed int result; // r0@1

  v2 = &sAffineAnimStates[12 * a1];
  *v2 = a2;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  result = 256;
  *((_WORD *)v2 + 2) = 256;
  *((_WORD *)v2 + 3) = 256;
  *((_WORD *)v2 + 4) = 0;
  return result;
}
