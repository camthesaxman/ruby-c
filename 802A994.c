int atkDC_setgrudge()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x4000 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_DWORD *)(4 * v2024C07 + 0x2024C98) |= 0x4000u;
    v2024C10 += 5;
  }
  return v1;
}
