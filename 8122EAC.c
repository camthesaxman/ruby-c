int __fastcall sub_8122EAC(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r4@9
  unsigned __int8 v3; // r0@9
  int v4; // r0@9
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_30017A0 & 0x40 )
    {
      if ( GetMenuCursorPos() << 24 )
      {
        audio_play(5u);
        MoveMenuCursor(-1);
      }
    }
    else if ( word_30017A0 & 0x80 )
    {
      if ( (unsigned __int8)GetMenuCursorPos() != 3 )
      {
        audio_play(5u);
        MoveMenuCursor(1);
      }
    }
    else if ( word_300179E & 1 )
    {
      audio_play(5u);
      v2 = LOBYTE(dword_3004B20[10 * v1 + 4]);
      v3 = GetMenuCursorPos();
      v4 = sub_806E81C(v2, (int)&gUnknown_08401810, (int)&gUnknown_084017F0, v3);
      call_via_r1(v1, v4);
    }
    else if ( word_300179E & 2 )
    {
      sub_81230F4(a1);
    }
  }
  return v6;
}
