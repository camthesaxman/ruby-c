int __fastcall sub_808A73C(unsigned __int8 a1)
{
  int v1; // r5@1
  char v2; // r0@3
  char v3; // r0@8
  int v4; // r0@12
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_30017A0 == 64 )
  {
    audio_play(5u);
    if ( v202FFA8 )
      v2 = -1;
    else
      v2 = gUnknown_0839F584 - 1;
    v202FFA8 = MoveMenuCursor(v2);
  }
  if ( word_30017A0 == 128 )
  {
    audio_play(5u);
    if ( v202FFA8 == (unsigned __int8)gUnknown_0839F584 - 1 )
      v3 = 1 - gUnknown_0839F584;
    else
      v3 = 1;
    v202FFA8 = MoveMenuCursor(v3);
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    v4 = sub_806E81C(0, (int)&gUnknown_0839F584, (int)&gUnknown_0839F494, v202FFA8);
    call_via_r1(v1, v4);
  }
  else if ( word_300179E & 2 )
  {
    sub_806E7D0(0, (int)&gUnknown_0839F584);
    sub_808A918(v1);
  }
  return v6;
}
