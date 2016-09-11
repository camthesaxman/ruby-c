int __fastcall sub_80C70BC(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@3
  unsigned __int8 v4; // r0@3
  char v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    v3 = player_get_direction_lower_nybble();
    sub_8059D08(v3);
    v4 = player_get_direction_lower_nybble();
    v5 = GetStepInPlaceDelay16AnimId(v4);
    FieldObjectSetSpecialAnim(v2, v5);
    dword_3004B20[10 * v1] = (int)sub_80C7130;
  }
  return v7;
}
