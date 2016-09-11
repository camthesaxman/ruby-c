int __fastcall sub_80D4B3C(int a1)
{
  int v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 46) = 6;
    *(_WORD *)(v1 + 50) = (Random() & 0x1F) - 16 + *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 54) = (Random() & 0x1F) - 16 + *(_WORD *)(v1 + 34);
    *(_WORD *)(v1 + 56) = ~(Random() & 7);
    sub_80786EC(v1);
    *(_DWORD *)(v1 + 28) = sub_80D4BA4;
  }
  return v3;
}
