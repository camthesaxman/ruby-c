int __fastcall sub_8059EA4(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  unsigned __int8 v6; // r0@3
  unsigned __int8 v7; // r0@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(a2) << 24)
    && !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v5) << 24) )
  {
    FieldObjectClearAnimIfSpecialAnimFinished(v4);
    FieldObjectClearAnimIfSpecialAnimFinished(v5);
    v6 = GetStepInPlaceDelay16AnimId(*(_BYTE *)(v3 + 12));
    FieldObjectSetSpecialAnim(v4, v6);
    v7 = GetSimpleGoAnimId(*(_BYTE *)(v3 + 12));
    FieldObjectSetSpecialAnim(v5, v7);
    v202FF84 = *(_WORD *)(v5 + 16);
    v202FF88 = *(_WORD *)(v5 + 18);
    v202FF8C = (unsigned int)*(_BYTE *)(v5 + 11) >> 4;
    v202FF90 = (unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v5 + 4) + 5] << 28 >> 30;
    FieldEffectStart(10);
    audio_play(214);
    ++*(_WORD *)(v3 + 8);
  }
  return 0;
}
