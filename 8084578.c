int __fastcall sub_8084578(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  _BYTE *v4; // r4@1

  v3 = a2;
  v4 = a3;
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(a3) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v4) << 24 )
  {
    FieldObjectSetSpecialAnim(v4, 89);
    ++*(_WORD *)(v3 + 8);
  }
  return 0;
}
