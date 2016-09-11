int __fastcall sub_8078A5C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = ((*(_WORD *)(a1 + 54) - *(_WORD *)(a1 + 52)) << 8) & 0xFFFF;
  *(_WORD *)(a1 + 48) = (signed __int16)((*(_WORD *)(a1 + 50) - *(_WORD *)(a1 + 48)) << 8) / *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 50) = (signed __int16)v1 / *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 54) = 0;
  *(_WORD *)(a1 + 52) = 0;
  return v3;
}
