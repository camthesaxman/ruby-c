signed int sub_80F8650()
{
  signed int v0; // r5@1
  signed int v1; // r3@1
  char *v2; // r0@2
  int v3; // r4@2
  unsigned int v4; // r6@2
  signed int v5; // r1@2
  unsigned int v6; // r0@6
  unsigned __int8 v7; // r0@7
  signed int v9; // [sp+0h] [bp-24h]@1

  sub_80F85FC((int)&v9, 36);
  v0 = 0;
  v1 = 33719496;
  do
  {
    v2 = &gUnknown_083E53E0[16 * *((_BYTE *)&v9 + v0)];
    v3 = (unsigned __int8)*v2;
    v4 = (unsigned __int8)v2[1];
    v5 = 0;
    if ( *(_BYTE *)(v1 + 4) != v3 )
    {
      do
        ++v5;
      while ( v5 <= 3 && *(_BYTE *)(v5 + 33719500) != v3 );
    }
    if ( v5 == 4 )
    {
      v9 = v1;
      v6 = sub_80F8438(v3);
      v1 = v9;
      if ( v6 >= v4 )
      {
        *(_BYTE *)(v9 + 1) = 1;
        v7 = sub_80F849C();
        sub_80F8598(v7, v3);
        return 1;
      }
    }
    ++v0;
  }
  while ( v0 <= 35 );
  return 0;
}
