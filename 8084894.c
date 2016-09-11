int __fastcall sub_8084894(int a1, __int16 a2, char a3)
{
  int v4; // [sp+4h] [bp-4h]@0

  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a1 + 5) & 0xF3 | 4;
  *(_BYTE *)(a1 + 62) |= 2u;
  *(_WORD *)(a1 + 46) = v202FF84;
  *(_WORD *)(a1 + 48) = v202FF88;
  *(_WORD *)(a1 + 50) = v202FF8C;
  *(_WORD *)(a1 + 52) = -5;
  *(_WORD *)(a1 + 60) = a2;
  StartSpriteAnim(a1, a3);
  return v4;
}
