int sub_80257DC()
{
  int v1; // [sp+18h] [bp-4h]@0

  if ( v2024C68 & 0x29 || *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 4 )
  {
    v2024C68 |= 1u;
    v2024D23 = 1;
  }
  else if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA1) != 12 && *(_BYTE *)(88 * v2024C08 + 0x2024AA2) != 12 )
  {
    *(_DWORD *)(4 * v2024C08 + 0x2024C98) |= v2024C07;
    *(_DWORD *)(4 * v2024C08 + 0x2024C98) |= 4u;
    v2024D23 = 0;
  }
  else
  {
    v2024C68 |= 1u;
    v2024D23 = 2;
  }
  ++v2024C10;
  return v1;
}
