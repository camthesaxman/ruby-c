int sub_802A6BC()
{
  int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = *(_DWORD *)(4 * v2024C08 + 0x2024C98);
  if ( v0 & 0x1800 || *(_BYTE *)(88 * v2024C08 + 0x2024ACC) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_DWORD *)(4 * v2024C08 + 0x2024C98) = v0 | 0x1000;
    v2024C10 += 5;
  }
  return v2;
}
