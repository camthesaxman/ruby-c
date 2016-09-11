int __fastcall sub_8088CA0(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    *(_WORD *)(v1 + 38) = v202E858;
    v202E85E = 1;
    SetPlayerAvatarStateMask(1u);
    sub_8059BF4();
    FieldObjectSetSpecialAnim(v2, 57);
    ++*(_WORD *)(v1 + 8);
  }
  return v4;
}
