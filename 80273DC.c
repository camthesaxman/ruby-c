int atk9A_setincreasedcriticalchance()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x100000 )
  {
    v2024C68 |= 0x20u;
    v2024D23 = 1;
  }
  else
  {
    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= 0x100000u;
    v2024D23 = 0;
  }
  ++v2024C10;
  return v1;
}
