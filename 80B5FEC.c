signed int pokemon_store()
{
  signed int result; // r0@3

  sub_80B74B0();
  sub_80B6210(0);
  sub_80B68D8(0);
  sub_80B6460(3, 0, 1);
  gKeyRepeatStartDelay = v200003C;
  if ( v2000001 != 2 || (unsigned __int8)calc_player_party_count() <= 5u )
  {
    v2000000 = 8;
    result = 1;
  }
  else
  {
    sub_80B74FC();
    v2000000 = 7;
    result = 0;
  }
  return result;
}
