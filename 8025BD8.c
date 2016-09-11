int atk86_stockpiletobasedamage()
{
  __int16 v0; // r3@4
  int v1; // r0@4
  int v2; // r3@4
  int v4; // [sp+24h] [bp-4h]@0

  if ( *(_BYTE *)(28 * v2024C07 + 0x2024CB1) )
  {
    if ( v2024D24 != 1 )
    {
      v0 = *(_WORD *)(2 * (battle_get_per_side_status(v2024C08) & 1) + 0x2024C7A);
      v1 = sub_803BA2C(88 * v2024C07 + 33704576);
      v2 = v1 * *(_BYTE *)(28 * v2024C07 + 0x2024CB1);
      v2024BEC = v1 * *(_BYTE *)(28 * v2024C07 + 0x2024CB1);
      v2016002 = *(_BYTE *)(28 * v2024C07 + 0x2024CB1);
      if ( *(_BYTE *)(16 * v2024C07 + 0x2024D28) & 8 )
        v2024BEC = 15 * v2 / 10;
    }
    *(_BYTE *)(28 * v2024C07 + 0x2024CB1) = 0;
    v2024C10 += 5;
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v4;
}
