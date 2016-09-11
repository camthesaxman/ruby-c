int __fastcall sub_8095408(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r4@1
  int v3; // r4@7
  unsigned __int8 v4; // r0@7
  int v5; // r0@7
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_30017A0 & 0x40 )
    {
      audio_play(5u);
      MoveMenuCursor(-1);
    }
    else if ( word_30017A0 & 0x80 )
    {
      audio_play(5u);
      MoveMenuCursor(1);
    }
    else if ( word_300179E & 1 )
    {
      audio_play(5u);
      v3 = LOBYTE(dword_3004B20[10 * v1 + 4]);
      v4 = GetMenuCursorPos();
      v5 = sub_806E81C(v3, (int)&gUnknown_083B5FF4, (int)&gUnknown_083B5FCC, v4);
      call_via_r1(v1, v5);
    }
    else if ( word_300179E & 2 )
    {
      audio_play(5u);
      sub_80958C4(v2);
    }
  }
  return v7;
}
