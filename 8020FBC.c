int atk31_copyarray()
{
  int v0; // r6@1
  int v1; // r5@1
  int v2; // r4@1
  int i; // r2@1
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1)
     + (*(_BYTE *)(v2024C10 + 2) << 8)
     + (*(_BYTE *)(v2024C10 + 3) << 16)
     + (*(_BYTE *)(v2024C10 + 4) << 24);
  v1 = *(_BYTE *)(v2024C10 + 5)
     + (*(_BYTE *)(v2024C10 + 6) << 8)
     + (*(_BYTE *)(v2024C10 + 7) << 16)
     + (*(_BYTE *)(v2024C10 + 8) << 24);
  v2 = *(_BYTE *)(v2024C10 + 9);
  for ( i = 0; i < v2; ++i )
    *(_BYTE *)(v0 + i) = *(_BYTE *)(v1 + i);
  v2024C10 += 10;
  return v5;
}
