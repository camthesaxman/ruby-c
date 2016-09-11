int sub_8099920()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( *v20010CC )
  {
    FreeOamMatrix((unsigned int)*(_BYTE *)(*v20010CC + 3) << 26 >> 27);
    sub_8099BE0(*v20010CC);
    *v20010CC = 0;
  }
  return v1;
}
