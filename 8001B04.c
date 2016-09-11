int __fastcall ContinueAffineAnimLoop(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  --sAffineAnimStates[12 * a1 + 3];
  JumpToTopOfAffineAnimLoop();
  ContinueAffineAnim(v2);
  return v4;
}
