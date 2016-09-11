int atk8A_normalisebuffs()
{
  int v0; // r2@1
  int v1; // r5@2
  int v2; // r3@3
  signed int v3; // r1@3
  _BYTE *v4; // r0@3
  int v6; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v1 = v2024A68;
    do
    {
      v2 = v0 + 1;
      v3 = 7;
      v4 = (_BYTE *)(88 * v0 + 33704607);
      do
      {
        *v4-- = 6;
        --v3;
      }
      while ( v3 >= 0 );
      ++v0;
    }
    while ( v2 < v1 );
  }
  ++v2024C10;
  return v6;
}
