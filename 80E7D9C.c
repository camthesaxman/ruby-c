int sub_80E7D9C()
{
  unsigned int v0; // r2@1
  int v1; // r4@2
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 0;
  if ( v200100A > 0u )
  {
    v1 = v2001004;
    do
    {
      *(_WORD *)(2 * v0 + v1) = *(_WORD *)(2 * v0 + 0x200100C);
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 < v200100A );
  }
  return v3;
}
