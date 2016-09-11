int __fastcall sub_808A060(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@8
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E == 64 && v202FFA8 )
  {
    v202FFA8 = MoveMenuCursor(-1);
    audio_play(5u);
  }
  if ( word_300179E == 128 && v202FFA8 != 2 )
  {
    v202FFA8 = MoveMenuCursor(1);
    audio_play(5u);
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    v2 = sub_806E81C(0, (int)&gUnknown_0839F578, (int)&gUnknown_0839F494, v202FFA8);
    call_via_r1(v1, v2);
  }
  else if ( word_300179E & 2 )
  {
    sub_806E7D0(0, (int)&gUnknown_0839F578);
    sub_808A938(v1);
  }
  return v4;
}
