int atkCB_setcharge()
{
  int v1; // [sp+4h] [bp-4h]@0

  *(_DWORD *)(4 * v2024C07 + 0x2024C98) |= 0x200u;
  *(_BYTE *)(28 * v2024C07 + 0x2024CBA) = *(_BYTE *)(28 * v2024C07 + 0x2024CBA) & 0xF0 | 2;
  *(_BYTE *)(28 * v2024C07 + 0x2024CBA) = *(_BYTE *)(28 * v2024C07 + 0x2024CBA) & 0xF | 0x20;
  ++v2024C10;
  return v1;
}
