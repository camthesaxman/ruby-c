int __fastcall sub_8084534(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    SwitchTaskToFollowupFunc(v1);
  }
  return 0;
}
