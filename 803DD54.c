signed int sub_803DD54()
{
  int v0; // r3@1
  int v1; // r7@1
  signed int v2; // r5@2
  int v3; // r4@2
  unsigned int v4; // r0@3
  int v6; // [sp+0h] [bp-18h]@3

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v6 = v0;
      v4 = GetBoxMonData((unsigned int *)(v1 + v3 + 33751204), 11, 0);
      v0 = v6;
      if ( !v4 )
        return 0;
      v3 += 80;
      ++v2;
    }
    while ( v2 <= 29 );
    v1 += 2400;
    v0 = v6 + 1;
  }
  while ( v6 + 1 <= 13 );
  return 1;
}
