int sub_809B068()
{
  unsigned __int8 v0; // r3@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( v20384E6 )
  {
    v0 = calc_player_party_count();
    if ( v0 > 5u )
      v0 = 5;
  }
  else
  {
    v0 = 0;
  }
  if ( *(_BYTE *)(v20011C0 + 63) & 2 )
    v20011E3 = 1;
  sub_809AF18(1u, v0);
  return v2;
}
