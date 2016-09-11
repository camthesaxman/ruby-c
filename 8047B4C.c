int save_deserialize_game()
{
  int v1; // [sp+0h] [bp-4h]@0

  copy_player_party_from_sav1();
  save_deserialize_npcs();
  return v1;
}
