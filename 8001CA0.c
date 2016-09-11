int __fastcall SetSpriteOamFlipBits(int a1, unsigned __int8 a2, char a3)
{
  unsigned int v3; // r5@1
  unsigned int v4; // r3@1
  int v6; // [sp+10h] [bp-4h]@0

  v3 = (unsigned __int8)(*(_BYTE *)(a1 + 3) & 0xC1) | 2 * (((unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27) & 7);
  *(_BYTE *)(a1 + 3) = v3;
  v4 = v3 & 0xFFFFFFC1 | 2 * ((v3 << 26 >> 27) | 8 * ((a2 ^ *(_BYTE *)(a1 + 63) & 1) & 1));
  *(_BYTE *)(a1 + 3) = v3 & 0xC1 | 2 * ((v3 << 26 >> 27) | 8 * ((a2 ^ *(_BYTE *)(a1 + 63) & 1) & 1));
  *(_BYTE *)(a1 + 3) = v4 & 0xC1 | 2
                                 * ((v4 << 26 >> 27) | 16 * ((a3 ^ ((unsigned int)*(_BYTE *)(a1 + 63) << 30 >> 31)) & 1));
  return v6;
}
