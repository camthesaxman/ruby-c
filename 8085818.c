int __fastcall FieldEffectFreeGraphicsResources(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 64);
  v2 = (unsigned int)*(_BYTE *)(a1 + 5) >> 4;
  DestroySprite(a1);
  FieldEffectFreeTilesIfUnused(v1);
  FieldEffectFreePaletteIfUnused(v2);
  return v4;
}
