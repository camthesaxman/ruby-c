int __fastcall sub_8079098(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078FDC(a1, 1, 0x100u, 0x100u, 0);
  *(_BYTE *)(v1 + 44) &= 0x7Fu;
  CalcCenterToCornerVec(
    v1,
    (unsigned int)*(_BYTE *)(v1 + 1) >> 6,
    (unsigned int)*(_BYTE *)(v1 + 3) >> 6,
    *(_BYTE *)(v1 + 1) & 3);
  return v3;
}
