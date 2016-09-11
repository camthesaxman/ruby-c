int __fastcall sub_80A7AE4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  v203855C = 0;
  *(_BYTE *)(a1 + 1) &= 0xFCu;
  *(_WORD *)(a1 + 50) = 0;
  *(_WORD *)(a1 + 54) = 0;
  FreeOamMatrix((unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27);
  return v2;
}
