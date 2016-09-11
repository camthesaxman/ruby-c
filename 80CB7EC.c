int __fastcall sub_80CB7EC(int a1, __int16 a2)
{
  int v2; // r2@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = (*(_WORD *)(a1 + 58) << 8) | *(_WORD *)(a1 + 60);
  *(_WORD *)(a1 + 56) = (*(_WORD *)(a1 + 32) << 8) | *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 58) = v2;
  *(_WORD *)(a1 + 60) = a2 << 8;
  return v4;
}
