int __fastcall sub_81282E0(int a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  char *v3; // r0@4
  __int16 v4; // r5@4
  __int16 v5; // r6@4
  unsigned __int8 v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+10h] [bp-4h]@9

  v1 = a1;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(
           *(_BYTE *)(a1 + 46),
           *(_WORD *)(v1 + 48) & 0xFF,
           *(_WORD *)(v1 + 50) & 0xFF,
           &v7) << 24)
    && (v2 = &dword_30048A0[9 * v7], *((_BYTE *)v2 + 2) & 0x10) )
  {
    v3 = &gSprites[68 * *((_BYTE *)v2 + 4)];
    v4 = *((_WORD *)v3 + 17);
    v5 = *((_WORD *)v3 + 16);
    if ( *((_WORD *)v3 + 16) != *(_WORD *)(v1 + 52) || v4 != *(_WORD *)(v1 + 54) )
    {
      *(_WORD *)(v1 + 52) = v5;
      *(_WORD *)(v1 + 54) = v4;
      if ( *(_BYTE *)(v1 + 63) & 0x10 )
        StartSpriteAnim(v1, 0);
    }
    *(_WORD *)(v1 + 32) = v5;
    *(_WORD *)(v1 + 34) = v4;
    *(_BYTE *)(v1 + 67) = gSprites[68 * LOBYTE(dword_30048A0[9 * v7 + 1]) + 67];
    sub_806487C(v1, 0);
  }
  else
  {
    FieldEffectStop(v1, 0x27u);
  }
  return v8;
}
