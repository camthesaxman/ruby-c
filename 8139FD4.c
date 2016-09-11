int __fastcall sub_8139FD4(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  char v3; // r0@2
  int v4; // r0@5
  int v5; // r0@7
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( word_30017A0 & 0x40 )
  {
    audio_play(5u);
    v3 = -1;
_0813A008:
    MoveMenuCursor(v3);
    v4 = GetMenuCursorPos();
    sub_8139FB4(*(int *)((char *)gUnknown_08406288 + (4 * v4 & 0x3FF)));
    return v7;
  }
  if ( word_30017A0 & 0x80 )
  {
    audio_play(5u);
    v3 = 1;
    goto _0813A008;
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    v5 = GetMenuCursorPos();
    call_via_r1(v1, *(void **)((char *)&off_84062C4 + (8 * v5 & 0x7FF)));
  }
  else if ( word_300179E & 2 )
  {
    sub_8072DEC(word_300179E & 2);
    audio_play(5u);
    call_via_r1(v2, 135504413);
  }
  return v7;
}
