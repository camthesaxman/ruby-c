int atkCF_jumpifnodamage()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_DWORD *)(16 * v2024C07 + 0x2024D2C) || *(_DWORD *)(16 * v2024C07 + 0x2024D30) )
    v2024C10 += 5;
  else
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  return v1;
}
