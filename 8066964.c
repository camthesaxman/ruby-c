_BOOL4 s30_music_check_asm()
{
  return mplay_has_finished_maybe() << 24 == 0;
}
