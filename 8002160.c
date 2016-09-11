signed int AllocOamMatrix()
{
  unsigned int v0; // r2@1
  signed int v1; // r1@1

  v0 = 0;
  v1 = 1;
  do
  {
    if ( !(gOamMatrixAllocBitmap & v1) )
    {
      gOamMatrixAllocBitmap |= v1;
      return v0;
    }
    v0 = (v0 + 1) & 0xFF;
    v1 *= 2;
  }
  while ( v0 <= 0x1F );
  return 255;
}
