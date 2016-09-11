int __fastcall ContinueAnimLoop(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  --*(_BYTE *)(a1 + 45);
  JumpToTopOfAnimLoop(a1);
  ContinueAnim(v1);
  return v3;
}
