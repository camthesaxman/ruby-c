int __fastcall sub_804B07C(int a1)
{
  int v1; // r2@1
  __int16 v2; // r1@1
  __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  if ( !*(_WORD *)(a1 + 48) )
  {
    v3 = *(_WORD *)(a1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 == 12 )
      *(_WORD *)(v1 + 46) = v2;
    LoadPalette(
      (char *)&gTradeGlow2PaletteAnimTable + 2 * *(_WORD *)(v1 + 46),
      16 * (((unsigned int)*(_BYTE *)(v1 + 5) >> 4) + 16) + 4,
      2);
  }
  return v5;
}
