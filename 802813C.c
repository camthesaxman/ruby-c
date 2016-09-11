int atkA7_setalwayshitflag()
{
  int v1; // [sp+4h] [bp-4h]@0

  *(_DWORD *)(4 * v2024C08 + 0x2024C98) &= 0xFFFFFFE7;
  *(_DWORD *)(4 * v2024C08 + 0x2024C98) |= 0x10u;
  *(_BYTE *)(28 * v2024C08 + 0x2024CBD) = v2024C07;
  ++v2024C10;
  return v1;
}
