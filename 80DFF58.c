int __fastcall sub_80DFF58(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r1@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 54);
  *(_WORD *)(v1 + 54) = v2;
  v3 = *(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = v3;
  *(_WORD *)(v1 + 36) = v2 << 16 >> 24;
  *(_WORD *)(v1 + 38) = v3 << 16 >> 24;
  LOWORD(v2) = *(_WORD *)(v1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( (signed __int16)v2 == *(_WORD *)(v1 + 50) )
    *(_DWORD *)(v1 + 28) = sub_80DFF98;
  return v5;
}
