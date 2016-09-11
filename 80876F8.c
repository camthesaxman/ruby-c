int __fastcall sub_80876F8(int a1, _BYTE *a2, int a3)
{
  int v3; // r5@1
  _BYTE *v4; // r4@1
  int v5; // r6@1
  char v6; // r0@4

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( FieldObjectClearAnimIfSpecialAnimFinished(a2) << 24 )
  {
    if ( (signed int)*(_WORD *)(v3 + 10) <= 3 )
    {
      ++*(_WORD *)(v3 + 10);
      v6 = GetStepInPlaceDelay4AnimId(v4[24] & 0xF);
      FieldObjectSetSpecialAnim(v4, v6);
      audio_play(0x27u);
    }
    else
    {
      v202FF84 = *((_WORD *)v4 + 8);
      v202FF88 = *((_WORD *)v4 + 9);
      v202FF8C = *(_BYTE *)(v5 + 67) - 1;
      v202FF90 = (unsigned int)*(_BYTE *)(v5 + 5) << 28 >> 30;
      *(_WORD *)(v3 + 10) = FieldEffectStart(0x31u);
      ++*(_WORD *)(v3 + 8);
    }
  }
  return 0;
}
