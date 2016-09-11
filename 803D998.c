signed int __fastcall sub_803D998(int a1)
{
  int v1; // r9@1
  int v2; // r5@1
  signed int v3; // r7@2
  int v4; // r8@2
  int v5; // r6@2

  v1 = a1;
  v2 = v20300A0;
  do
  {
    v3 = 0;
    v4 = 2400 * v2;
    v5 = 0;
    do
    {
      if ( !GetBoxMonData((unsigned int *)(v4 + v5 + 33751204), 11, 0) )
      {
        sub_8040B1C(v1);
        CopyMon(v4 + v5 + 33751204, v1, 80);
        return 1;
      }
      v5 += 80;
      ++v3;
    }
    while ( v3 <= 29 );
    if ( ++v2 == 14 )
      v2 = 0;
  }
  while ( v2 != v20300A0 );
  return 2;
}
