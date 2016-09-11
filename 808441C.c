int __fastcall sub_808441C(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  _BYTE *v4; // r4@1
  char v5; // r0@4

  v3 = a2;
  v4 = a3;
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(a3) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v4) << 24 )
  {
    if ( *(_WORD *)(v3 + 14) )
    {
      v5 = GetGoSpeed0AnimId(v4[24] & 0xF);
      FieldObjectSetSpecialAnim(v4, v5);
      --*(_WORD *)(v3 + 14);
    }
    else
    {
      FieldObjectSetSpecialAnim(v4, 62);
      ++*(_WORD *)(v3 + 8);
    }
  }
  return 0;
}
