int __fastcall objc_exclamation_mark_probably(int a1)
{
  int v1; // r4@1
  char *v2; // r1@4
  __int16 v3; // r3@4
  __int16 v4; // r2@4
  unsigned __int8 v6; // [sp+0h] [bp-Ch]@1
  int v7; // [sp+8h] [bp-4h]@7

  v1 = a1;
  if ( TryGetFieldObjectIdByLocalIdAndMap(
         *(_BYTE *)(a1 + 46),
         *(_WORD *)(v1 + 48) & 0xFF,
         *(_WORD *)(v1 + 50) & 0xFF,
         &v6) << 24
    || *(_BYTE *)(v1 + 63) & 0x10 )
  {
    FieldEffectStop(v1, *(_WORD *)(v1 + 60) & 0xFF);
  }
  else
  {
    v2 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v6 + 1])];
    v3 = *(_WORD *)(v1 + 52);
    v4 = v3 + *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 54) = v4;
    *(_WORD *)(v1 + 32) = *((_WORD *)v2 + 16);
    *(_WORD *)(v1 + 34) = *((_WORD *)v2 + 17) - 16;
    *(_WORD *)(v1 + 36) = *((_WORD *)v2 + 18);
    *(_WORD *)(v1 + 38) = *((_WORD *)v2 + 19) + v4;
    if ( v4 )
      *(_WORD *)(v1 + 52) = v3 + 1;
    else
      *(_WORD *)(v1 + 52) = 0;
  }
  return v7;
}
