int unref_sub_80154E4()
{
  signed int v0; // r2@2
  int *v1; // r5@3
  int v2; // r1@4
  signed int v3; // r2@6
  int *v4; // r5@7
  int v5; // r1@8
  int v7; // [sp+8h] [bp-4h]@0

  if ( v20239F8 & 2 )
  {
    v0 = 0;
    if ( (signed int)v2024A68 > 0 )
    {
      v1 = gBitTable;
      do
      {
        v2 = *v1;
        ++v1;
        v2024A64 |= v2 << 28;
        ++v0;
      }
      while ( v0 < v2024A68 );
    }
  }
  else
  {
    v3 = 0;
    if ( (signed int)v2024A68 > 0 )
    {
      v4 = gBitTable;
      do
      {
        v5 = *v4;
        ++v4;
        v2024A64 |= v5;
        ++v3;
      }
      while ( v3 < v2024A68 );
    }
  }
  return v7;
}
