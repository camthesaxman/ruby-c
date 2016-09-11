int __fastcall sub_8127334(int a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  int v3; // r8@4
  char *v4; // r6@4
  __int16 v5; // r5@4
  __int16 v6; // r7@4
  unsigned __int8 v8; // [sp+0h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-4h]@9

  v1 = a1;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(
           *(_BYTE *)(a1 + 46),
           *(_WORD *)(v1 + 48) & 0xFF,
           *(_WORD *)(v1 + 50) & 0xFF,
           &v8) << 24)
    && (v2 = &dword_30048A0[9 * v8], *((_BYTE *)v2 + 2) & 4) )
  {
    v3 = GetFieldObjectGraphicsInfo(*((_BYTE *)v2 + 5));
    v4 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v8 + 1])];
    v5 = *((_WORD *)v4 + 17);
    v6 = *((_WORD *)v4 + 16);
    if ( *((_WORD *)v4 + 16) != *(_WORD *)(v1 + 52) || v5 != *(_WORD *)(v1 + 54) )
    {
      *(_WORD *)(v1 + 52) = v6;
      *(_WORD *)(v1 + 54) = v5;
      if ( *(_BYTE *)(v1 + 63) & 0x10 )
        StartSpriteAnim(v1, 0);
    }
    *(_WORD *)(v1 + 32) = v6;
    *(_WORD *)(v1 + 34) = v5;
    *(_WORD *)(v1 + 38) = (*(_WORD *)(v3 + 10) << 16 >> 17) - 8;
    *(_BYTE *)(v1 + 67) = v4[67] - 1;
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | v4[5] & 0xC;
    sub_806487C(v1, (unsigned int)(unsigned __int8)v4[62] << 29 >> 31);
  }
  else
  {
    FieldEffectStop(v1, 0x29u);
  }
  return v9;
}
