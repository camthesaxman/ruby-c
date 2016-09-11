int sub_80290BC()
{
  char v0; // r0@3
  int v2; // [sp+Ch] [bp-4h]@0

  if ( *(_WORD *)(2 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C7A) & 0x20 )
  {
    v2024C68 |= 1u;
    v2024D23 = 0;
  }
  else
  {
    v0 = battle_get_per_side_status(v2024C07);
    *(_WORD *)(2 * (v0 & 1) + 0x2024C7A) |= 0x20u;
    *(_BYTE *)(12 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C87) = 5;
    v2024D23 = 5;
  }
  ++v2024C10;
  return v2;
}
