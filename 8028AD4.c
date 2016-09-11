int sub_8028AD4()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x10000000 || *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x400C0 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_DWORD *)(88 * v2024C08 + 0x2024AD0) |= 0x10000000u;
    v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 1;
    if ( !v2024BEC )
      v2024BEC = 1;
    v2024C10 += 5;
  }
  return v1;
}
