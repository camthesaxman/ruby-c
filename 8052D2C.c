int set_player_trainer_id()
{
  unsigned int v0; // r4@1
  unsigned __int16 v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = Random();
  v1 = Random();
  write_word_to_mem((v0 << 16) | v1, 33705646);
  return v3;
}
