int __fastcall sub_8140ECC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), *(_WORD *)(a1 + 48));
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 46), *(_WORD *)(v1 + 50));
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 54) + *(_WORD *)(v1 + 46)) & 0xFF;
  *(_WORD *)(v1 + 48) += *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 50) += *(_WORD *)(v1 + 58);
  v2 = *(_WORD *)(v1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( v2 == 51 )
    sub_8141294(v1);
  return v4;
}
