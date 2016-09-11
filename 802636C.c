int atk8B_setbide()
{
  int v1; // [sp+8h] [bp-4h]@0

  *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= 0x1000u;
  *(_WORD *)(2 * v2024C07 + 0x2024C54) = v2024BE6;
  *(_DWORD *)(4 * v2024C07 + 0x2024BF4) = 0;
  *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= 0x200u;
  ++v2024C10;
  return v1;
}
