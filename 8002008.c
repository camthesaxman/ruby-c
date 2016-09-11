int __fastcall StartSpriteAffineAnim(int a1, char a2)
{
  int v2; // r5@1
  char v3; // r4@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = GetSpriteMatrixNum(a1);
  AffineAnimStateStartAnim(v4, v3);
  *(_BYTE *)(v2 + 63) = (*(_BYTE *)(v2 + 63) | 8) & 0xDF;
  return v6;
}
