int sub_80C4758()
{
  unsigned int v0; // r1@1
  int v1; // r2@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  do
  {
    if ( *(_WORD *)(2 * v202E8D0 + 0x2038670) < (signed int)*(_WORD *)(2 * v0 + 0x2038670) )
      v1 = (v1 + 1) & 0xFF;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  v202E8CC = v1;
  return v3;
}
