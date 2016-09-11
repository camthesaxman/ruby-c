int __fastcall sub_80DFAB0(int a1)
{
  int v1; // r3@1
  int i; // r4@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 18);
  for ( i = *(_WORD *)(a1 + 14); i <= *(_WORD *)(a1 + 16); i = (i + 1) & 0xFFFF )
  {
    *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + i) = (*(_WORD *)(a1 + 20) * (signed int)gSineTable[v1] >> 7)
                                                              + *(_WORD *)(a1 + 12);
    v1 = (v1 + 8) & 0xFF;
  }
  *(_WORD *)(a1 + 18) = (*(_WORD *)(a1 + 18) + 9) & 0xFF;
  return v4;
}
