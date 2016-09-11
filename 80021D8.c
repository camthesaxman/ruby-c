int __fastcall InitSpriteAffineAnim(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = AllocOamMatrix();
  if ( v2 != 255 )
  {
    CalcCenterToCornerVec(
      v1,
      (unsigned int)*(_BYTE *)(v1 + 1) >> 6,
      (unsigned int)*(_BYTE *)(v1 + 3) >> 6,
      *(_BYTE *)(v1 + 1) & 3);
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (v2 & 0x1F);
    *(_BYTE *)(v1 + 63) |= 8u;
    AffineAnimStateReset(v2);
  }
  return v4;
}
