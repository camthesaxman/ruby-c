int sub_810BD08()
{
  unsigned int v0; // r2@1
  char v1; // r0@5
  int v3; // [sp+8h] [bp-4h]@0

  v203924A = 0;
  v0 = 0;
  do
  {
    if ( *(_BYTE *)(8 * v0 + 0x2025F2C) )
      ++v203924A;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x27 );
  v1 = v203924A;
  if ( v203924A > 7u )
    v1 = 8;
  v203924B = v1;
  if ( v2039249 + 8 > v203924A && v2039249 )
    --v2039249;
  return v3;
}
