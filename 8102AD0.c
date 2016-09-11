int __fastcall sub_8102AD0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1

  v1 = a1;
  v2 = *(_WORD *)(a1 + 10) - 1;
  *(_WORD *)(v1 + 10) = v2;
  if ( v2 == -1 )
  {
    if ( task_is_not_running_overworld_fanfare() << 24 )
      audio_play(0x15u);
    --v200000E;
    if ( v200000C <= 9998 )
      ++v200000C;
    *(_WORD *)(v1 + 10) = 8;
    if ( word_300179C & 1 )
      *(_WORD *)(v1 + 10) = 4;
  }
  if ( task_is_not_running_overworld_fanfare() << 24 && word_300179E & 8 )
  {
    audio_play(0x15u);
    v200000C += v200000E;
    if ( v200000C > 9999 )
      v200000C = 9999;
    v200000E = 0;
  }
  if ( !v200000E )
    ++*(_WORD *)(v1 + 8);
  return 0;
}
