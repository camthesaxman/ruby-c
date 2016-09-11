signed int __fastcall sub_8058854(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  if ( FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive() << 24
    && !(FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24) )
  {
    if ( (unsigned int)((FieldObjectGetSpecialAnim(v2) << 24) - 419430400) >> 24 > 3
      || !v3
      || (unsigned int)*(_BYTE *)(v2 + 24) >> 4 == v3 )
    {
      return 1;
    }
    FieldObjectClearAnim(v2);
  }
  return 0;
}
