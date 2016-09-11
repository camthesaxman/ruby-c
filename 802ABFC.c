int atkDF_setmagiccoat()
{
  int v1; // [sp+0h] [bp-4h]@0

  v2024C08 = v2024C07;
  *(_BYTE *)(20 * v2024C07 + 0x2024D68) |= 0x20u;
  if ( v2024A7E == v2024A68 - 1 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_BYTE *)(16 * v2024C07 + 0x2024D28) |= 0x10u;
    v2024C10 += 5;
  }
  return v1;
}
