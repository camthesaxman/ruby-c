int sub_80F6F64()
{
  int v1; // [sp+0h] [bp-4h]@0

  ++v200D15E;
  if ( v200D15E > 8u )
  {
    v200D15E = 0;
    if ( ++v200D15F & 1 )
      v4000054 = 6;
    else
      v4000054 = 0;
  }
  return v1;
}
