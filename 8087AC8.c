int __fastcall sub_8087AC8(int a1)
{
  int v1; // r5@1
  int *v2; // r6@1
  int v3; // r1@1
  int v4; // r4@6
  unsigned __int8 v5; // r0@7
  char v6; // r0@8
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+14h] [bp-4h]@12

  v1 = a1;
  memcpy(&v8, &gUnknown_0839F380, 5);
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = *(_WORD *)(v1 + 10);
  if ( *(_WORD *)(v1 + 10) )
  {
    *(_WORD *)(v1 + 10) = v3 - 1;
    if ( (v3 - 1) << 16 )
      goto _08087B8C;
  }
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    if ( (signed int)*(_WORD *)(v1 + 12) > 31 )
    {
      v4 = *(_WORD *)(v1 + 38);
      if ( v4 == (unsigned __int8)player_get_direction_lower_nybble() )
      {
        *((_BYTE *)v2 + 1) &= 0xDFu;
        script_env_2_disable();
        sub_806451C();
        v5 = FindTaskIdByFunc((int)sub_8087A74);
        DestroyTask(v5);
        return v9;
      }
    }
    v6 = GetFaceDirectionAnimId(*((_BYTE *)&v8 + (*((_BYTE *)v2 + 24) & 0xF)));
    FieldObjectSetSpecialAnim(v2, v6);
    if ( (signed int)*(_WORD *)(v1 + 12) <= 31 )
      ++*(_WORD *)(v1 + 12);
    *(_WORD *)(v1 + 10) = *(_WORD *)(v1 + 12) << 16 >> 18;
_08087B8C:
    *((_BYTE *)v2 + 1) = *((_BYTE *)v2 + 1) & 0xDF | 32 * (((unsigned int)*((_BYTE *)v2 + 1) << 26 >> 31) ^ 1);
  }
  return v9;
}
