int CopyMatricesToOamBuffer()
{
  unsigned int v0; // r4@1
  __int16 *v1; // r3@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = &gOamMatrices[4 * v0];
    HIWORD(gMain[8 * v0 + 16]) = *v1;
    HIWORD(gMain[2 * (4 * v0 + 1) + 16]) = v1[1];
    HIWORD(gMain[2 * (4 * v0 + 2) + 16]) = v1[2];
    HIWORD(gMain[2 * (4 * v0 + 3) + 16]) = v1[3];
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1F );
  return v3;
}
