int __fastcall current_map_music_set__default_for_battle(unsigned __int16 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  unsigned __int16 v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = map_music_set_to_zero();
  m4aMPlayAllStop(v2);
  if ( v1 )
  {
    current_map_music_set(v1);
  }
  else
  {
    v3 = sub_8040728();
    current_map_music_set(v3);
  }
  return v5;
}
