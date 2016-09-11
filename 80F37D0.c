signed int sub_80F37D0()
{
  int *v0; // r2@1
  unsigned int v1; // r8@2
  int v2; // r2@3
  int v3; // r1@3
  int v4; // r4@3
  _BYTE *v5; // r5@3
  unsigned __int8 v6; // r6@3
  int v7; // r4@4
  char v8; // r1@4
  unsigned __int8 v9; // r12@4
  char v10; // r0@5
  unsigned __int8 v11; // r6@5
  unsigned __int8 *v12; // r4@6
  unsigned int v13; // r2@6
  unsigned __int8 v14; // r3@6

  v0 = &gUnknown_083DFEC4;
  if ( v200BC93 <= 0xBu )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = *v0;
      v3 = *(_BYTE *)(v2 + 48275);
      v4 = v2 + (v3 << 8) + 38988;
      v5 = (_BYTE *)(v2 + (v3 << 9) + 42060);
      v6 = 0;
      do
      {
        CpuFastSet(v4, v5, 16);
        v5 += 64;
        v7 = v4 + 32;
        v8 = 0;
        v9 = v6 + 1;
        do
        {
          v10 = 0;
          v11 = v8 + 1;
          do
          {
            v12 = (unsigned __int8 *)(v7 + 4);
            v13 = 0;
            v14 = v10 + 1;
            do
            {
              --v12;
              *v5++ = 16 * *v12 | (*v12 >> 4) & 0xF;
              v13 = (v13 + 1) & 0xFF;
            }
            while ( v13 <= 3 );
            v7 = (int)(v12 + 4);
            ++v10;
          }
          while ( v14 <= 7u );
          v7 -= 64;
          ++v8;
        }
        while ( v11 <= 1u );
        v4 = v7 + 96;
        v6 = v9;
      }
      while ( v9 <= 3u );
      v0 = &gUnknown_083DFEC4;
      ++v200BC93;
      if ( v200BC93 > 0xBu )
        break;
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 > 1 )
      {
        if ( v200BC93 > 0xBu )
          return 0;
        return 1;
      }
    }
  }
  return 0;
}
