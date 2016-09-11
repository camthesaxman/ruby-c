int atk7E_setreflect()
{
  char v0; // r0@2
  char v1; // r0@3
  int v3; // [sp+Ch] [bp-4h]@0

  if ( *(_WORD *)(2 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C7A) & 1 )
  {
    v2024C68 |= 1u;
    v0 = 0;
_080257C4:
    v2024D23 = v0;
    goto _080257C6;
  }
  v1 = battle_get_per_side_status(v2024C07);
  *(_WORD *)(2 * (v1 & 1) + 0x2024C7A) |= 1u;
  *(_BYTE *)(12 * (battle_get_per_side_status(v2024C07) & 1) + 0x2024C80) = 5;
  if ( !(v20239F8 & 1) || (sub_803C348(1) & 0xFF) != 2 )
  {
    v0 = 1;
    goto _080257C4;
  }
  v2024D23 = 2;
_080257C6:
  ++v2024C10;
  return v3;
}
