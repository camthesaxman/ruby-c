int __fastcall sub_8104F18(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  unsigned __int8 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 50) = *(_WORD *)(a1 + 48) + *(_WORD *)(2 * *(_WORD *)(a1 + 46) + 0x200001C);
  v2 = *(_WORD *)(a1 + 50) % 120;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 34) = v2 + *(_WORD *)(2 * *(_WORD *)(v1 + 46) + 0x2000022) + 28;
  v3 = sub_8102BA4(*(_BYTE *)(v1 + 46), *(_WORD *)(v1 + 50) / 24);
  *(_WORD *)(v1 + 64) = GetSpriteTileStartByTag(v3);
  SetSpriteSheetFrameTileNum(v1);
  return v5;
}
