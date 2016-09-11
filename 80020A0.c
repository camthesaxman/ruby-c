int __fastcall ChangeSpriteAffineAnimIfDifferent(int a1, char a2)
{
  int v2; // r5@1
  char v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( sAffineAnimStates[12 * (unsigned __int8)GetSpriteMatrixNum(a1)] != (unsigned __int8)a2 )
    ChangeSpriteAffineAnim(v2, v3);
  return v5;
}
