int __fastcall sub_8139D64(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned __int8 v3; // r0@6
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
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
    sub_8072DEC(word_300179E & 1);
    audio_play(5u);
    v3 = GetMenuCursorPos();
    call_via_r1(v1, *(&off_840629C + 2 * *(_BYTE *)(v2039314 + v3)));
  }
  else if ( word_300179E & 2 )
  {
    sub_8072DEC(word_300179E & 2);
    audio_play(5u);
    call_via_r1(v2, *(&off_840629C + 2 * *(_BYTE *)((unsigned __int8)byte_30007B4 + v2039314 - 1)));
  }
  return v5;
}
