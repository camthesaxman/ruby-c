int sub_80F3264()
{
  unsigned int v0; // r1@1
  int v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = *(_DWORD *)(4 * v0 + 0x20087D0);
    if ( v1 )
      *(_WORD *)(v1 + 54) = 1;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  return v3;
}
