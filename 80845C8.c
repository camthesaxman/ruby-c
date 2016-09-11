int __fastcall sub_80845C8(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  _BYTE *v4; // r4@1

  v3 = a2;
  v4 = a3;
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(a3) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v4) << 24 )
  {
    FieldObjectSetSpecialAnim(v4, 62);
    ++*(_WORD *)(v3 + 8);
  }
  return 0;
}
