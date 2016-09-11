int __fastcall sub_8088E2C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int *v3; // r4@2
  unsigned __int8 v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v2;
  if ( v2 > 7 )
  {
    v3 = &dword_30048A0[9 * v202E85D];
    v4 = GetPlayerAvatarGraphicsIdByStateId(3u);
    sub_805B980((int)v3, v4);
    StartSpriteAnim((int)&gSprites[68 * *((_BYTE *)v3 + 4)], 22);
    *((_BYTE *)v3 + 1) |= 0x10u;
    FieldObjectSetSpecialAnim(v3, 72);
    if ( *(_WORD *)(v1 + 38) & 8 )
      DestroySprite((int)&gSprites[68 * *((_BYTE *)v3 + 26)]);
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 12) = 0;
  }
  return v6;
}
