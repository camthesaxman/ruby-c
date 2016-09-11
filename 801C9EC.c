int atk05_cmd5()
{
  __int16 v0; // r3@1
  int v1; // r0@1
  int v3; // [sp+28h] [bp-4h]@0

  v0 = *(_WORD *)(2 * (battle_get_per_side_status(v2024C08) & 1) + 0x2024C7A);
  v1 = sub_803BA2C(88 * v2024C07 + 33704576);
  v2024BEC = v2024C0D * v1 * v201601F;
  if ( *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x200 && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 2) == 13 )
    v2024BEC = 2 * v2024C0D * v1 * v201601F;
  if ( *(_BYTE *)(16 * v2024C07 + 0x2024D28) & 8 )
    v2024BEC = 15 * v2024BEC / 10;
  ++v2024C10;
  return v3;
}
