signed int __fastcall sub_806286C(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r1@1

  v2 = a2;
  FreeOamMatrix((unsigned int)*(_BYTE *)(a2 + 3) << 26 >> 27);
  v3 = *(_BYTE *)(v2 + 1) & 0xFC;
  *(_BYTE *)(v2 + 1) = v3;
  CalcCenterToCornerVec(v2, v3 >> 6, (unsigned int)*(_BYTE *)(v2 + 3) >> 6, 0);
  return 1;
}
