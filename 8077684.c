int ma20_wait_for_something()
{
  __int16 v0; // r5@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = v202F7B3;
  if ( v202F7B3 )
  {
    word_3004AF0 = 0;
_080776D2:
    v202F7B0 = 1;
    return v2;
  }
  if ( !(unsigned __int8)mplay_has_finished_maybe() )
  {
    word_3004AF0 = 0;
    ++v202F7A4;
    v202F7B0 = 0;
    return v2;
  }
  if ( (unsigned __int16)++word_3004AF0 <= 0x5Au )
    goto _080776D2;
  m4aMPlayStop(&unk_30073C0);
  m4aMPlayStop(&unk_3007400);
  word_3004AF0 = v0;
  return v2;
}
