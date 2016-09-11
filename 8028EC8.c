int sub_8028EC8()
{
  int v0; // r0@3
  signed int i; // r2@5
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2024C68 & 0x29 )
  {
    *(_BYTE *)(28 * v2024C07 + 0x2024CB8) = 0;
    v2024C10 = &BattleScript_1D6F74;
  }
  else
  {
    v0 = *(_BYTE *)(28 * v2024C07 + 0x2024CB8);
    if ( v0 != 5 )
      *(_BYTE *)(28 * v2024C07 + 0x2024CB8) = v0 + 1;
    v2024DEC = gBattleMoves[12 * v2024BE6 + 1];
    for ( i = 1; i < *(_BYTE *)(28 * v2024C07 + 0x2024CB8); ++i )
      v2024DEC *= 2;
    ++v2024C10;
  }
  return v3;
}
