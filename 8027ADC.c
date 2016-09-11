int atkA2_mirrorcoatdamagecalculator()
{
  int v0; // r6@1
  int v1; // r2@1
  int v2; // r3@1
  int v3; // r1@5
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = (unsigned __int8)battle_side_get_owner(v2024C07);
  v1 = (unsigned __int8)battle_side_get_owner(*(_BYTE *)(16 * v2024C07 + 0x2024D35));
  v2 = *(_DWORD *)(16 * v2024C07 + 0x2024D30);
  if ( v2 && v0 != v1 && *(_WORD *)(88 * *(_BYTE *)(16 * v2024C07 + 0x2024D35) + 0x2024AA8) )
  {
    v2024BEC = 2 * v2;
    if ( *(_BYTE *)(12 * v1 + 0x2024C88) && (v3 = *(_BYTE *)(12 * v1 + 0x2024C89), *(_WORD *)(88 * v3 + 0x2024AA8)) )
      v2024C08 = v3;
    else
      v2024C08 = *(_BYTE *)(16 * v2024C07 + 0x2024D35);
    v2024C10 += 5;
  }
  else
  {
    *(_BYTE *)(20 * v2024C07 + 0x2024D68) |= 0x20u;
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v5;
}
