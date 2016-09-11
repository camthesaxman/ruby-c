int atk60_cmd60()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !(battle_side_get_owner(v2024C07) << 24) )
    sav12_xor_increment(*(_BYTE *)(v2024C10 + 1));
  v2024C10 += 2;
  return v1;
}
