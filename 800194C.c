int __fastcall BeginAffineAnim(int a1)
{
  int v1; // r6@1
  int v2; // r4@3
  int v4; // [sp+0h] [bp-18h]@3
  char v5; // [sp+5h] [bp-13h]@3
  int v6; // [sp+14h] [bp-4h]@4

  v1 = a1;
  if ( *(_BYTE *)(a1 + 1) & 1 && ***(_WORD ***)(a1 + 16) != 0x7FFF )
  {
    v2 = (unsigned __int8)GetSpriteMatrixNum(a1);
    AffineAnimStateRestartAnim(v2);
    GetAffineAnimFrame(v2, v1, &v4);
    *(_BYTE *)(v1 + 63) &= 0xD7u;
    ApplyAffineAnimFrame(v2, &v4);
    sAffineAnimStates[12 * v2 + 2] = v5;
  }
  return v6;
}
