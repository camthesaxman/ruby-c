int __fastcall sub_8086AC0(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@3
  char v4; // r0@3

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    v3 = player_get_direction_lower_nybble();
    v4 = GetFaceDirectionAnimId(v3);
    FieldObjectSetSpecialAnim(v2, v4);
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 12) = 0;
    *(_WORD *)(v1 + 14) = 0;
    if ( !*(_BYTE *)(v1 + 10) )
      *(_WORD *)(v1 + 8) = 4;
    audio_play(0x50u);
  }
  return 0;
}
