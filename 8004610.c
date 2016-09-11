int __fastcall DrawInitialDownArrow(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 24) = 0;
  DrawDownArrow(a1);
  return v2;
}
