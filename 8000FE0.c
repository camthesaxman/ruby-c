int ResetOamMatrices()
{
  unsigned int v0; // r1@1
  __int16 *v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = &gOamMatrices[4 * v0];
    *v1 = 256;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 256;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1F );
  return v3;
}
