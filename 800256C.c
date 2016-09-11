int __fastcall RequestSpriteSheetCopy(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_DWORD *)a1;
  v3 = GetSpriteTileStartByTag(*(_WORD *)(a1 + 6));
  RequestSpriteCopy(v2, (32 * v3 & 0x1FFFFF) + 100728832, *(_WORD *)(v1 + 4));
  return v5;
}
