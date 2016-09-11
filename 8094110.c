int sub_8094110()
{
  unsigned int v0; // r2@1
  int v1; // r0@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 3;
  do
  {
    v1 = 2 * v0 + 100681728;
    *(_WORD *)(v1 + 640) = 1;
    *(_WORD *)(v1 + 704) = 1;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x10 );
  return v3;
}
