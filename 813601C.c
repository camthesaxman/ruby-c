int sub_813601C()
{
  int v0; // r3@1
  unsigned int v1; // r2@1
  int *v2; // r1@1
  int v3; // r0@2
  int v4; // r3@5
  unsigned int v5; // r2@5
  int *v6; // r1@5
  int v7; // r0@6
  int v9; // [sp+8h] [bp-4h]@0

  v202E8DC = 0;
  v0 = 0;
  v1 = 0;
  v2 = (int *)33706812;
  do
  {
    v3 = *v2;
    ++v2;
    v0 |= v3;
    ++v1;
  }
  while ( v1 <= 0x2D );
  if ( v0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = (int *)33706812;
    do
    {
      v7 = *v6;
      ++v6;
      v4 += v7;
      ++v5;
    }
    while ( v5 <= 0x2D );
    if ( v20253F4 != v4 )
    {
      sub_81360AC(33706812);
      v202E8DC = 1;
    }
  }
  else
  {
    v202E8DC = 1;
  }
  return v9;
}
