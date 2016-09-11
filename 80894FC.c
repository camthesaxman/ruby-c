int __fastcall fishE(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int *v3; // r4@2
  unsigned __int8 v4; // r7@2
  unsigned __int8 v5; // r0@4
  unsigned __int8 v6; // r0@4
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 10) - 1;
  *(_WORD *)(v1 + 10) = v2;
  if ( !(v2 << 16) )
  {
    v3 = &dword_30048A0[9 * v202E85D];
    v4 = 0;
    if ( *(_WORD *)(v1 + 38) & 8 )
    {
      v4 = 3;
      sub_8127ED0(*((_BYTE *)v3 + 26), 1);
    }
    v5 = GetPlayerAvatarGraphicsIdByStateId(v4);
    sub_805B980((int)v3, v5);
    FieldObjectTurn((int)v3, 1u);
    v202E858 = *(_WORD *)(v1 + 38);
    v202E85E = 0;
    FieldEffectActiveListRemove(0x20u);
    v6 = FindTaskIdByFunc((int)sub_8089270);
    DestroyTask(v6);
  }
  return v8;
}
