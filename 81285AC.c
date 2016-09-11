int __fastcall sub_81285AC(int a1)
{
  int v1; // r5@1
  int v2; // r0@3
  char *v3; // r2@3
  __int16 v4; // r2@5
  unsigned __int8 v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-4h]@10

  v1 = a1;
  if ( TryGetFieldObjectIdByLocalIdAndMap(
         *(_BYTE *)(a1 + 50),
         *(_WORD *)(v1 + 52) & 0xFF,
         *(_WORD *)(v1 + 54) & 0xFF,
         &v6) << 24 )
    FieldEffectStop(v1, *(_BYTE *)(v1 + 48));
  v2 = GetFieldObjectGraphicsInfo(BYTE1(dword_30048A0[9 * v6 + 1]));
  v3 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v6 + 1])];
  *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | v3[62] & 4;
  *(_WORD *)(v1 + 32) = *((_WORD *)v3 + 16);
  *(_WORD *)(v1 + 34) = (*(_WORD *)(v2 + 10) << 16 >> 17) + *((_WORD *)v3 + 17) - 16;
  *(_BYTE *)(v1 + 67) = v3[67] - 1;
  if ( *(_WORD *)(v1 + 46) == 1 )
  {
    ++*(_WORD *)(v1 + 46);
    StartSpriteAnim(v1, 1);
  }
  v4 = *(_WORD *)(v1 + 46);
  if ( *(_WORD *)(v1 + 46) == 2 && *(_BYTE *)(v1 + 63) & 0x10 )
    *(_WORD *)(v1 + 60) = 1;
  if ( v4 == 3 )
    FieldEffectStop(v1, *(_BYTE *)(v1 + 48));
  return v7;
}
