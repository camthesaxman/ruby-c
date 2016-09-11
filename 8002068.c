int __fastcall ChangeSpriteAffineAnim(int a1, char a2)
{
  int v3; // [sp+8h] [bp-4h]@0

  sAffineAnimStates[12 * (unsigned __int8)GetSpriteMatrixNum(a1)] = a2;
  *(_BYTE *)(a1 + 63) = (*(_BYTE *)(a1 + 63) | 8) & 0xDF;
  return v3;
}
