int __fastcall sub_8087914(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int *v3; // r5@4
  unsigned __int8 v4; // r0@9
  int v5; // r1@10
  char v6; // r0@12
  int v8; // [sp+0h] [bp-14h]@1
  int v9; // [sp+10h] [bp-4h]@15

  v1 = a1;
  memcpy(&v8, &gUnknown_0839F380, 5);
  v2 = *(_WORD *)(v1 + 36);
  if ( *(_WORD *)(v1 + 36) )
  {
    *(_WORD *)(v1 + 36) = v2 - 1;
    if ( !((v2 - 1) << 16) )
    {
      sub_8053FF8();
      sub_8080918();
    }
  }
  v3 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v3) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v3) << 24 )
  {
    if ( *(_WORD *)(v1 + 36) || v202F38F & 0x80 || (unsigned __int8)sub_8054034() != 1 )
    {
      v5 = *(_WORD *)(v1 + 10);
      if ( !*(_WORD *)(v1 + 10) || (*(_WORD *)(v1 + 10) = v5 - 1, !((v5 - 1) << 16)) )
      {
        v6 = GetFaceDirectionAnimId(*((_BYTE *)&v8 + (*((_BYTE *)v3 + 24) & 0xF)));
        FieldObjectSetSpecialAnim(v3, v6);
        if ( (signed int)*(_WORD *)(v1 + 12) <= 11 )
          ++*(_WORD *)(v1 + 12);
        *(_WORD *)(v1 + 10) = 8 >> (*(_WORD *)(v1 + 12) << 16 >> 18);
      }
    }
    else
    {
      FieldObjectSetDirection((int)v3, *(_BYTE *)(v1 + 38));
      sub_8053678();
      warp_in();
      dword_300485C = (int)mapldr_080859D4;
      SetMainCallback2((int)c2_load_new_map);
      v4 = FindTaskIdByFunc((int)sub_80878C4);
      DestroyTask(v4);
    }
  }
  return v9;
}
