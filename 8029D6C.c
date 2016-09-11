int atkC7_setminimize()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2024C6C & 0x2000000 )
    *(_DWORD *)(4 * v2024C07 + 0x2024C98) |= 0x100u;
  ++v2024C10;
  return v1;
}
