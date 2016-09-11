int __fastcall sub_80892A0(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@5
  __int16 v4; // r0@5
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 12) = 17;
    *(_WORD *)(v1 + 38) = v202E858;
    v202E85E = 1;
    SetPlayerAvatarStateMask(1u);
    if ( *(_WORD *)(v1 + 38) & 8 )
      sub_8127ED0(*((_BYTE *)v2 + 26), 0);
    v3 = GetPlayerAvatarGraphicsIdByStateId(3u);
    sub_805B980((int)v2, v3);
    CameraObjectReset2();
    FieldObjectTurn((int)v2, 3u);
    StartSpriteAnim((int)&gSprites[68 * *((_BYTE *)v2 + 4)], 22);
    *((_BYTE *)v2 + 1) &= 0xDFu;
    v4 = (unsigned __int8)sub_8088F60();
    *(_WORD *)(v1 + 10) = v4;
    sub_8088FC0(v4);
    sub_8088FFC(*(_BYTE *)(v1 + 10), *((_BYTE *)v2 + 4));
  }
  return v6;
}
