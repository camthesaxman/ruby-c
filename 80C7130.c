int __fastcall sub_80C7130(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int *v3; // r2@2
  __int16 v4; // r0@2
  unsigned __int8 v5; // r0@3
  char v6; // r0@3
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    v3 = &dword_3004B20[10 * v1];
    v4 = *((_WORD *)v3 + 5);
    *((_WORD *)v3 + 5) = v4 + 1;
    if ( v4 > 9 )
    {
      *v3 = (int)sub_80C71A0;
    }
    else
    {
      v5 = player_get_direction_lower_nybble();
      v6 = GetStepInPlaceDelay16AnimId(v5);
      FieldObjectSetSpecialAnim(v2, v6);
    }
  }
  return v8;
}
