int __fastcall sub_80885D8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80886F8(a1);
  *(_WORD *)(v1 + 14) = *(_WORD *)(v1 + 10) & 7;
  *(_WORD *)(v1 + 16) = 0;
  v4000042 = -1;
  v4000046 = -1;
  ++*(_WORD *)(v1 + 8);
  return v3;
}
