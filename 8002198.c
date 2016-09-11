int __fastcall FreeOamMatrix(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  unsigned int v2; // r0@1
  signed int i; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  for ( i = 1; v2 < v1; i *= 2 )
    v2 = (v2 + 1) & 0xFF;
  gOamMatrixAllocBitmap &= ~i;
  SetOamMatrix(v1, 256, 0, 0, 256);
  return v5;
}
