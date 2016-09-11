int sub_80E9C94()
{
  int v0; // r0@2
  unsigned int v1; // r5@4
  unsigned int i; // r4@4
  int v3; // r0@7
  int v5; // [sp+Ch] [bp-4h]@0

  if ( v200AA28 > 3 )
    v0 = 4;
  else
    v0 = v200AA28 & 0xFFFF;
  v1 = v0;
  for ( i = 0; i < v1; i = (i + 1) & 0xFFFF )
    sub_80E9AF8(i + v200AA29);
  while ( i <= 3 )
  {
    v3 = i;
    i = (i + 1) & 0xFFFF;
    sub_80E9C74(v3);
  }
  return v5;
}
