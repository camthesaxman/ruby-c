int __fastcall sub_8088A78(int a1)
{
  int v1; // r6@1
  int *v2; // r4@2
  unsigned __int8 v3; // r0@2
  char v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(FieldEffectActiveListContains(6u) << 24) )
  {
    v2 = &dword_30048A0[9 * v202E85D];
    v3 = GetPlayerAvatarGraphicsIdByStateId(3u);
    sub_805B980((int)v2, v3);
    FieldObjectClearAnimIfSpecialAnimFinished(v2);
    v4 = sub_80608D0(*((_BYTE *)v2 + 24) >> 4);
    FieldObjectSetSpecialAnim(v2, v4);
    v202FF84 = *(_WORD *)(v1 + 10);
    v202FF88 = *(_WORD *)(v1 + 12);
    v202FF8C = v202E85D;
    *((_BYTE *)v2 + 26) = FieldEffectStart(8u);
    ++*(_WORD *)(v1 + 8);
  }
  return v6;
}
