int ResetAffineAnimData()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  gAffineAnimsDisabled = 0;
  gOamMatrixAllocBitmap = 0;
  ResetOamMatrices();
  v0 = 0;
  do
  {
    AffineAnimStateReset(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1F );
  return v2;
}
