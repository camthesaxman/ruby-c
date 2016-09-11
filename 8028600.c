int atkAC_remaininghptopower()
{
  int v0; // r1@1
  signed int v1; // r3@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_80461D4(*(_WORD *)(88 * v2024C07 + 0x2024AA8), *(_WORD *)(88 * v2024C07 + 0x2024AAC), 48) & 0xFF;
  v1 = 0;
  if ( v0 > (unsigned __int8)gUnknown_081FAD26[0] )
  {
    do
      v1 += 2;
    while ( v1 <= 11 && v0 > (unsigned __int8)gUnknown_081FAD26[v1] );
  }
  v2024DEC = (unsigned __int8)gUnknown_081FAD26[v1 + 1];
  ++v2024C10;
  return v3;
}
