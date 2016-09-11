int sub_801FFA8()
{
  unsigned __int8 v0; // r0@1
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v1 = *(_BYTE *)(v2024C10 + 2);
  if ( *(_BYTE *)(88 * v0 + 0x2024AA1) != v1 && *(_BYTE *)(88 * v0 + 0x2024AA2) != v1 )
    v2024C10 += 7;
  else
    v2024C10 = *(_BYTE *)(v2024C10 + 3)
             + (*(_BYTE *)(v2024C10 + 4) << 8)
             + (*(_BYTE *)(v2024C10 + 5) << 16)
             + (*(_BYTE *)(v2024C10 + 6) << 24);
  return v3;
}
