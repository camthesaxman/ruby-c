int __fastcall sub_80D5C5C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    move_anim_8072740(v1);
  }
  else
  {
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), 16);
    v2 = *(_WORD *)(v1 + 56);
    *(_WORD *)(v1 + 56) = (v2 + 4) & 0xFF;
    if ( (!v2 || v2 > 196) && *(_WORD *)(v1 + 56) << 16 > 0 && !*(_WORD *)(v1 + 60) )
      audio_play_and_stuff(0x90u, v202F7D2);
  }
  return v4;
}
