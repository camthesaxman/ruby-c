int __fastcall fanfare_play(unsigned __int16 a1)
{
  unsigned int v1; // r1@1
  __int16 *v2; // r2@1
  int v3; // r0@3
  int v4; // r0@5
  int v6; // [sp+0h] [bp-4h]@0

  v1 = 0;
  v2 = gUnknown_0837DEF4;
  do
  {
    if ( (unsigned __int16)*v2 == a1 )
    {
      v3 = pause_music_for_sound_maybe(v1);
      task_add_50_overworld_fanfare_if_not_running(v3);
      return v6;
    }
    v2 += 2;
    ++v1;
  }
  while ( v1 <= 0xB );
  v4 = pause_music_for_sound_maybe(0);
  task_add_50_overworld_fanfare_if_not_running(v4);
  return v6;
}
