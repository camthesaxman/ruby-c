int sub_80F7A34()
{
  unsigned int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v20284C8 = 0;
  v20284F1 = 0;
  v0 = 0;
  do
  {
    *(_WORD *)(2 * v0 + 0x20284CA) = gUnknown_083E537C[v0];
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 5 );
  return v2;
}
