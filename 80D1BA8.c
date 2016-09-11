int __fastcall sub_80D1BA8(int a1, __int16 a2, int a3)
{
  unsigned int v3; // r2@1
  int v5; // [sp+8h] [bp-4h]@0

  v3 = a3 << 24;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | ((*(_WORD *)(a1 + 4) & 0x3FF)
                                                    + (((signed int)(-((v3 >> 24) & 1) | (v3 >> 24) & 1) >> 31) & 0x20)
                                                    + (4 * a2 & 0x3FF)) & 0x3FF;
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a1 + 5) & 0xF | 16 * IndexOfSpritePaletteTag(gUnknown_083D7A5C[v3 >> 25]);
  return v5;
}
