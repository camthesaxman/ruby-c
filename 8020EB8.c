int sub_8020EB8()
{
  int v0; // r7@1
  _BYTE *v1; // r5@1
  _BYTE *v2; // r4@1
  unsigned int v3; // r6@1
  unsigned int i; // r1@1
  int v5; // r0@6
  int v7; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = (_BYTE *)(*(_BYTE *)(v2024C10 + 1)
               + (*(_BYTE *)(v2024C10 + 2) << 8)
               + (*(_BYTE *)(v2024C10 + 3) << 16)
               + (*(_BYTE *)(v2024C10 + 4) << 24));
  v2 = (_BYTE *)(*(_BYTE *)(v2024C10 + 5)
               + (*(_BYTE *)(v2024C10 + 6) << 8)
               + (*(_BYTE *)(v2024C10 + 7) << 16)
               + (*(_BYTE *)(v2024C10 + 8) << 24));
  v3 = *(_BYTE *)(v2024C10 + 9);
  for ( i = 0; i < v3; i = (i + 1) & 0xFF )
  {
    if ( *v1 == *v2 )
      v0 = (v0 + 1) & 0xFF;
    ++v1;
    ++v2;
  }
  if ( v0 == v3 )
    v5 = v2024C10 + 14;
  else
    v5 = *(_BYTE *)(v2024C10 + 10)
       + (*(_BYTE *)(v2024C10 + 11) << 8)
       + (*(_BYTE *)(v2024C10 + 12) << 16)
       + (*(_BYTE *)(v2024C10 + 13) << 24);
  v2024C10 = v5;
  return v7;
}
