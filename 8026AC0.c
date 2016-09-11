int atk92_setlightscreen()
{
  char v0; // r0@2
  char v1; // r0@3
  int v3; // [sp+Ch] [bp-4h]@0

  if ( *(_WORD *)(2 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C7A) & 2 )
  {
    v2024C68 |= 1u;
    v0 = 0;
  }
  else
  {
    v1 = battle_get_per_side_status(v2024C07);
    *(_WORD *)(2 * (v1 & 1) + 0x2024C7A) |= 2u;
    *(_BYTE *)(12 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C81) = 5;
    if ( v20239F8 & 1 && (unsigned __int8)sub_803C348(1) == 2 )
      v0 = 4;
    else
      v0 = 3;
  }
  v2024D23 = v0;
  ++v2024C10;
  return v3;
}
