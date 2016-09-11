int __fastcall sub_80C3DF0(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 52);
  *(_WORD *)(v1 + 52) = v2;
  *(_WORD *)(v1 + 36) = sine(v2 << 16 >> 24, *(_WORD *)(v1 + 48));
  v3 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 32) += v3 << 16 >> 24;
  *(_WORD *)(v1 + 54) = (unsigned __int8)v3;
  ++*(_WORD *)(v1 + 34);
  if ( v2018009 )
    *(_BYTE *)(v1 + 62) |= 4u;
  if ( (signed int)*(_WORD *)(v1 + 32) > 248 || (signed int)*(_WORD *)(v1 + 34) > 116 )
  {
    DestroySprite(v1);
    --v2018007;
  }
  return v5;
}
