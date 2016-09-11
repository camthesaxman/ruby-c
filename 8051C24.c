int sub_8051C24()
{
  unsigned int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_WORD *)(dword_3004854 + 90);
  if ( *(_WORD *)(2 * (*(_BYTE *)(dword_3004854 + 136) - 2) + 0x20260A0) < v0 )
    *(_WORD *)(2 * (*(_BYTE *)(dword_3004854 + 136) - 2) + 0x20260A0) = v0;
  return v2;
}
