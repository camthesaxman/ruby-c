int __fastcall sub_801CAF8(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r7@1
  __int16 v3; // r3@1
  int v4; // r0@1
  int v6; // [sp+28h] [bp-4h]@0

  v2 = a1;
  v3 = *(_WORD *)(2 * (battle_get_per_side_status(a2) & 1) + 0x2024C7A);
  v4 = sub_803BA2C(88 * v2 + 33704576);
  v2024DEC = 0;
  v2024BEC = v2024C0D * v4 * v201601F;
  if ( *(_DWORD *)(4 * v2 + 0x2024C98) & 0x200 && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 2) == 13 )
    v2024BEC = 2 * v2024C0D * v4 * v201601F;
  if ( *(_BYTE *)(16 * v2 + 0x2024D28) & 8 )
    v2024BEC = 15 * v2024BEC / 10;
  return v6;
}
