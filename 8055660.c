_BOOL4 __fastcall sub_8055660(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 2);
  return (v2 == 2 || !v2) && MetatileBehavior_IsSouthArrowWarp(*(_BYTE *)(v1 + 12)) << 24 && *(_BYTE *)(v1 + 3) == 1;
}
