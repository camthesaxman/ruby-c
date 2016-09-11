int __fastcall sub_80D5348(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 60), 28);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 60), 28);
  *(_WORD *)(v1 + 60) = (*(_WORD *)(v1 + 60) + 20) & 0xFF;
  return v3;
}
