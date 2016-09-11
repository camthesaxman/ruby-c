int atkD6_doubledamagedealtifdamaged()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_DWORD *)(16 * v2024C07 + 0x2024D2C) && *(_BYTE *)(16 * v2024C07 + 0x2024D34) == v2024C08
    || *(_DWORD *)(16 * v2024C07 + 0x2024D30) && *(_BYTE *)(16 * v2024C07 + 0x2024D35) == v2024C08 )
  {
    v201601F = 2;
  }
  ++v2024C10;
  return v1;
}
