int atkCE_settorment()
{
  int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_DWORD *)(88 * v2024C08 + 0x2024AD0);
  if ( v0 >= 0 )
  {
    *(_DWORD *)(88 * v2024C08 + 0x2024AD0) = v0 | 0x80000000;
    v2024C10 += 5;
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v2;
}
