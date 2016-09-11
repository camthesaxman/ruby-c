int sub_8027348()
{
  char v0; // r0@3
  int v2; // [sp+Ch] [bp-4h]@0

  if ( *(_BYTE *)(12 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C82) )
  {
    v2024C68 |= 0x20u;
    v2024D23 = 1;
  }
  else
  {
    *(_BYTE *)(12 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C82) = 5;
    v0 = battle_get_per_side_status(v2024C07);
    *(_WORD *)(2 * (v0 & 1) + 0x2024C7A) |= 0x100u;
    v2024D23 = 0;
  }
  ++v2024C10;
  return v2;
}
