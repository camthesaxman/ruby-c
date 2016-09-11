int sub_802548C()
{
  int v0; // r2@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  if ( *(_BYTE *)(v2024C10 + 5) == 1 )
    v2024C08 = v2024C07;
  v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C08 + 0x2024AAC) >> 1;
  if ( !v2024BEC )
    v2024BEC = 1;
  v2024BEC = -v2024BEC;
  if ( *(_WORD *)(88 * v2024C08 + 0x2024AA8) == *(_WORD *)(88 * v2024C08 + 0x2024AAC) )
    v2024C10 = v0;
  else
    v2024C10 += 6;
  return v2;
}
