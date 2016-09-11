int __fastcall BeginAnimLoop(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 45) = *(_DWORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8))) << 10 >> 26;
  JumpToTopOfAnimLoop();
  ContinueAnim(v1);
  return v3;
}
