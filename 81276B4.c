int __fastcall sub_81276B4(int a1)
{
  int v1; // r4@1
  unsigned __int8 v3; // [sp+0h] [bp-Ch]@2
  int v4; // [sp+8h] [bp-4h]@5

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10
    || TryGetFieldObjectIdByLocalIdAndMap(
         *(_BYTE *)(a1 + 46),
         *(_WORD *)(a1 + 48) & 0xFF,
         *(_WORD *)(a1 + 50) & 0xFF,
         &v3) << 24 )
  {
    FieldEffectStop(v1, 0xFu);
  }
  else
  {
    *(_WORD *)(v1 + 32) = *(_WORD *)&gSprites[68 * LOBYTE(dword_30048A0[9 * v3 + 1]) + 32];
    *(_WORD *)(v1 + 34) = *(_WORD *)&gSprites[68 * LOBYTE(dword_30048A0[9 * v3 + 1]) + 34];
    sub_806487C(v1, 0);
  }
  return v4;
}
