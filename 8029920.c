int atkC3_setfutureattack()
{
  __int16 v0; // r3@3
  int v2; // [sp+2Ch] [bp-4h]@0

  if ( *(_BYTE *)(v2024C08 + 0x2024DBC) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_WORD *)(2 * v2024C08 + 0x2024DD4) = v2024BE6;
    *(_BYTE *)(v2024C08 + 0x2024DC0) = v2024C07;
    *(_BYTE *)(v2024C08 + 0x2024DBC) = 3;
    v0 = *(_WORD *)(2 * (battle_get_per_side_status(v2024C08) & 1) + 0x2024C7A);
    *(_DWORD *)(4 * v2024C08 + 0x2024DC4) = sub_803BA2C(88 * v2024C07 + 33704576);
    if ( *(_BYTE *)(16 * v2024C07 + 0x2024D28) & 8 )
      *(_DWORD *)(4 * v2024C08 + 0x2024DC4) = 15 * *(_DWORD *)(4 * v2024C08 + 0x2024DC4) / 10;
    v2024D23 = v2024BE6 == 353;
    v2024C10 += 5;
  }
  return v2;
}
