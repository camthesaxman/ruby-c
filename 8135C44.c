int sub_8135C44()
{
  int v0; // r3@1
  unsigned int v1; // r1@1
  int *v2; // r2@1
  int v3; // r0@2
  int v4; // r4@5
  int v5; // r3@6
  unsigned int v6; // r1@6
  int v7; // r5@6
  int *v8; // r2@6
  int v9; // r0@7
  int v11; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = (int *)33705804;
  do
  {
    v3 = *v2;
    ++v2;
    v0 += v3;
    ++v1;
  }
  while ( v1 <= 0x27 );
  if ( v2024FEC != v0 )
    sub_8135CE8(33705804);
  v4 = 0;
  do
  {
    v5 = 0;
    v6 = 0;
    v7 = v4 + 1;
    v8 = (int *)(164 * v4 + 33705968);
    do
    {
      v9 = *v8;
      ++v8;
      v5 += v9;
      ++v6;
    }
    while ( v6 <= 0x27 );
    if ( *(_DWORD *)(164 * v4 + 0x2025090) != v5 )
      sub_8135CE8(164 * v4 + 33705968);
    ++v4;
  }
  while ( v7 <= 4 );
  return v11;
}
