int atk32_memcpy_with_offset()
{
  int v0; // r7@1
  int v1; // r6@1
  _BYTE *v2; // r5@1
  int v3; // r4@1
  int i; // r2@1
  int v6; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1)
     + (*(_BYTE *)(v2024C10 + 2) << 8)
     + (*(_BYTE *)(v2024C10 + 3) << 16)
     + (*(_BYTE *)(v2024C10 + 4) << 24);
  v1 = *(_BYTE *)(v2024C10 + 5)
     + (*(_BYTE *)(v2024C10 + 6) << 8)
     + (*(_BYTE *)(v2024C10 + 7) << 16)
     + (*(_BYTE *)(v2024C10 + 8) << 24);
  v2 = (_BYTE *)(*(_BYTE *)(v2024C10 + 9)
               + (*(_BYTE *)(v2024C10 + 10) << 8)
               + (*(_BYTE *)(v2024C10 + 11) << 16)
               + (*(_BYTE *)(v2024C10 + 12) << 24));
  v3 = *(_BYTE *)(v2024C10 + 13);
  for ( i = 0; i < v3; ++i )
    *(_BYTE *)(v0 + i) = *(_BYTE *)(v1 + i + *v2);
  v2024C10 += 14;
  return v6;
}
