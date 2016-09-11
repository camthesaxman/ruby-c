int sub_80275D8()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r2@1
  int v3; // [sp+10h] [bp-4h]@0

  v0 = *(_WORD *)(88 * v2024C07 + 0x2024AAC);
  v1 = v0 >> 2;
  if ( !(v0 >> 2) )
    v1 = 1;
  if ( *(_WORD *)(88 * v2024C07 + 0x2024AA8) > v1 )
  {
    v2024BEC = v0 >> 2;
    if ( !(v0 >> 2) )
      v2024BEC = 1;
    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= 0x1000000u;
    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xFFFF1FFF;
    *(_BYTE *)(28 * v2024C07 + 0x2024CB2) = v2024BEC;
    v2024D23 = 0;
    v2024C6C |= 0x100u;
  }
  else
  {
    v2024BEC = 0;
    v2024D23 = 1;
  }
  ++v2024C10;
  return v3;
}
