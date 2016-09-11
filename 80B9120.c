signed int sub_80B9120()
{
  int v0; // r7@1
  int v1; // r4@2
  int v2; // r6@2
  unsigned __int8 v3; // r0@2
  signed int v4; // r0@2
  int v5; // r1@2
  int v6; // r2@3
  int v7; // r1@7
  signed int v8; // r7@11
  int *v9; // r1@11
  int v11; // [sp+0h] [bp-20h]@1
  int v12; // [sp+8h] [bp-18h]@2

  memset(&v11, 0, 8);
  v0 = 0;
  if ( v20192D8 != 255 )
  {
    do
    {
      v1 = *(_BYTE *)(v0 + 33657560);
      v2 = *(_BYTE *)(v0 + 33657560);
      v3 = *(_BYTE *)(v0 + 33657560);
      v12 = 33657552;
      v4 = sub_80B90C0(v3);
      v5 = v12;
      if ( v4 << 24 )
      {
        *(_WORD *)(v12 + 6) = *(_WORD *)(v12 + 4);
        v6 = 28 * v1 + v5 - 112;
        if ( *(_BYTE *)(v6 + 16) & 4 )
          v20192D6 *= 2;
        if ( *(_BYTE *)(v6 + 16) & 1 )
        {
          v20192D6 = 10;
          sub_80B13EC(v1, 47);
        }
        else
        {
          v7 = v20192D6 - *(_BYTE *)(v6 + 15);
          v20192D6 -= *(_BYTE *)(v6 + 15);
          if ( v7 << 16 > 0 )
          {
            sub_80B9200(v2, (unsigned __int8)v7);
            sub_80B141C(v2, v20192D6);
            *((_WORD *)&v11 + v2) = v20192D6;
          }
          else
          {
            v20192D6 = 0;
            sub_80B13EC(v1, 46);
          }
        }
      }
      ++v0;
    }
    while ( *(_BYTE *)(v0 + 33657560) != 255 );
  }
  v8 = 0;
  v9 = &v11;
  do
  {
    if ( *(_WORD *)v9 )
      return 1;
    v9 = (int *)((char *)v9 + 2);
    ++v8;
  }
  while ( v8 <= 3 );
  return 0;
}
