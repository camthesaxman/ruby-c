int __fastcall sub_8089D94(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r1@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v3 = word_30017A0 & 0xF0;
    if ( v3 == 64 )
    {
      audio_play(5u);
      v202FFA8 = MoveMenuCursor(-1);
_08089E1A:
      sub_808B5B4(v1);
      return v5;
    }
    if ( v3 == 128 )
    {
      audio_play(5u);
      v202FFA8 = MoveMenuCursor(1);
      goto _08089E1A;
    }
    if ( word_300179E & 1 )
    {
      audio_play(5u);
      call_via_r1(v1, *(&off_839F498 + 2 * *(_BYTE *)(v202FFA8 + 0x202FFAA)));
      goto _08089E1A;
    }
    if ( word_300179E & 2 )
    {
      sub_808A918(a1);
      sub_808B5B4(v2);
    }
  }
  return v5;
}
