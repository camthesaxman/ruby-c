int __fastcall sub_80A2490(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char *a4)
{
  char *v4; // r5@1
  unsigned __int8 v5; // r7@1
  int v6; // r6@1
  int v7; // r8@1
  int *v8; // r4@1
  int v9; // r1@3
  int v11; // [sp+14h] [bp-4h]@0

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a2;
  v8 = &dword_30048A0[9 * a3];
  if ( !(FieldObjectIsSpecialAnimActive((int)v8) << 24) || FieldObjectClearAnimIfSpecialAnimFinished(v8) << 24 )
  {
    v9 = (unsigned __int8)*v4;
    if ( v9 == 254 )
    {
      sub_80A2348(v5, v6);
      sub_80643A4((int)v8);
    }
    else if ( !(FieldObjectSetSpecialAnim(v8, *v4) << 24) )
    {
      npc_obj_offscreen_culling_and_flag_update(v7, (int)(v4 + 1));
    }
  }
  return v11;
}
