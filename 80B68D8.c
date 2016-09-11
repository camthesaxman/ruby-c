int __fastcall sub_80B68D8(__int16 a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  *(_WORD *)&gSprites[68 * v200000F + 54] &= 0xFFu;
  *(_WORD *)&gSprites[68 * v200000F + 54] |= a1 << 8;
  return v2;
}
