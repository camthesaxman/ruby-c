int __fastcall oamc_shadow(int a1)
{
  int v1; // r5@1
  int *v2; // r4@3
  char *v3; // r1@3
  unsigned __int8 v5; // [sp+0h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-4h]@10

  v1 = a1;
  if ( TryGetFieldObjectIdByLocalIdAndMap(
         *(_BYTE *)(a1 + 46),
         *(_WORD *)(v1 + 48) & 0xFF,
         *(_WORD *)(v1 + 50) & 0xFF,
         &v5) << 24 )
  {
    FieldEffectStop(v1, 3u);
  }
  else
  {
    v2 = &dword_30048A0[9 * v5];
    v3 = &gSprites[68 * *((_BYTE *)v2 + 4)];
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | v3[5] & 0xC;
    *(_WORD *)(v1 + 32) = *((_WORD *)v3 + 16);
    *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 52) + *((_WORD *)v3 + 17);
    if ( (*v2 & 0x400001) != 4194305
      || sub_8056E14(*((_BYTE *)v2 + 30)) << 24
      || MetatileBehavior_IsSurfableWaterOrUnderwater(*((_BYTE *)v2 + 30)) << 24
      || MetatileBehavior_IsSurfableWaterOrUnderwater(*((_BYTE *)v2 + 31)) << 24
      || MetatileBehavior_IsReflective(*((_BYTE *)v2 + 30)) << 24
      || MetatileBehavior_IsReflective(*((_BYTE *)v2 + 31)) << 24 )
    {
      FieldEffectStop(v1, 3u);
    }
  }
  return v6;
}
