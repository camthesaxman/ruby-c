int sub_80156DC()
{
  int v0; // r3@1
  signed int v1; // r1@1
  _WORD *v2; // r2@2
  signed int i; // r1@4
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v2024DEA = 0;
  v2024DEB = 0;
  v1 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v2 = (_WORD *)33704554;
    do
    {
      v0 |= gBitTable[*v2];
      v2 += 2;
      v1 += 2;
    }
    while ( v1 < v2024A68 );
  }
  for ( i = 1; i < v2024A68; i += 2 )
    *(_BYTE *)(((i & 2) >> 1) + 0x2024DEA) = v0;
  return v5;
}
