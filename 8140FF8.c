int __fastcall sub_8140FF8(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), *(_WORD *)(a1 + 48));
  v2 = *(_WORD *)(v1 + 46);
  v3 = sine(v2, *(_WORD *)(v1 + 50));
  *(_WORD *)(v1 + 38) = cosine(v2, v3);
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 46) + 6) & 0xFF;
  ++*(_WORD *)(v1 + 48);
  ++*(_WORD *)(v1 + 50);
  v4 = *(_WORD *)(v1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v4;
  if ( v4 == 51 )
    sub_8141294(v1);
  return v6;
}
