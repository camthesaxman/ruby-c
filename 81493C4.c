int __fastcall sub_81493C4(int a1)
{
  int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | gSprites[68 * *(_WORD *)(a1 + 46) + 62] & 4;
  v1 = *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 34) = *(_WORD *)&gSprites[68 * v1 + 34];
  *(_WORD *)(a1 + 36) = *(_WORD *)&gSprites[68 * v1 + 36];
  *(_WORD *)(a1 + 38) = *(_WORD *)&gSprites[68 * v1 + 38];
  return v3;
}
