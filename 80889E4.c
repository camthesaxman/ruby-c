int __fastcall sub_80889E4(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    sub_8059BF4();
    FieldObjectSetSpecialAnim(v2, 57);
    ++*(_WORD *)(v1 + 8);
  }
  return v4;
}
