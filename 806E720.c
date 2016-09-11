int __fastcall sub_806E720(int a1, _BYTE *a2, _BYTE *a3, int a4)
{
  int v4; // r0@1
  unsigned int v5; // r4@1
  int v7; // [sp+4h] [bp-4h]@0

  v4 = (8 * a1 & 0x7FF) + a4;
  v5 = (((unsigned int)*(_BYTE *)v4 << 25) + 0x2000000) >> 24;
  *a2 = 29 - *(_BYTE *)(v4 + 1);
  *a3 = 20 - v5;
  return v7;
}
