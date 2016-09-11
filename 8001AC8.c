int __fastcall BeginAffineAnimLoop(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  sAffineAnimStates[12 * a1 + 3] = *(_WORD *)(8 * sAffineAnimStates[12 * a1 + 1]
                                            + *(_DWORD *)(4 * sAffineAnimStates[12 * a1] + *(_DWORD *)(a2 + 16))
                                            + 2);
  JumpToTopOfAffineAnimLoop();
  ContinueAffineAnim(v2);
  return v4;
}
