int sub_80F7DC0()
{
  unsigned int v0; // r5@1
  unsigned int v1; // r5@3
  int v2; // r0@4
  char v3; // r7@4
  unsigned int v4; // r10@5
  unsigned int v5; // r5@5
  int v6; // r0@6
  unsigned int v7; // r7@7
  unsigned int v8; // r5@7
  unsigned __int16 v9; // r4@10
  unsigned int v10; // r2@11
  int v11; // r1@11
  int i; // r0@12
  unsigned int v13; // r0@15
  unsigned __int16 v15; // [sp+0h] [bp-38h]@1
  int v16; // [sp+34h] [bp-4h]@20

  memcpy(&v15, (const char *)&gUnknown_083E53C8, 24);
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33719520) = v0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 7 );
  v1 = 0;
  do
  {
    v2 = (unsigned __int16)Random() % (signed int)(v1 + 1);
    v3 = *(_BYTE *)(v1 + 33719520);
    *(_BYTE *)(v1 + 33719520) = *(_BYTE *)((unsigned __int16)v2 + 0x20284E0);
    *(_BYTE *)((unsigned __int16)v2 + 0x20284E0) = v3;
    v1 = (unsigned __int16)(v1 + 1);
  }
  while ( v1 <= 7 );
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = sub_80EAE88(*((_BYTE *)&v15 + 4 * v5));
    *(&v15 + 2 * v5 + 1) = v6;
    v4 = (v6 + v4) & 0xFFFF;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 5 );
  v20284CA = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( ((unsigned __int16)Random() % 0xAu & 0xFFFF) > 2 || v7 > 7 )
    {
      v10 = (unsigned __int16)Random() % v4 & 0xFFFF;
      v11 = 0;
      v9 = v8 + 1;
      if ( v8 <= 5 )
      {
        for ( i = *(&v15 + 1); ; i = *(&v15 + 2 * v11 + 1) )
        {
          v13 = (v10 - i) << 16;
          v10 = v13 >> 16;
          if ( (signed int)v13 <= 0 )
            break;
          v11 = (v11 + 1) & 0xFFFF;
          if ( v8 > 5 )
            break;
        }
      }
      if ( v11 == 6 )
        v11 = 0;
      *(_WORD *)(2 * v8 + 0x20284CC) = sub_80EB784(*(&v15 + 2 * v11));
    }
    else
    {
      *(_WORD *)(2 * v8 + 0x20284CC) = -1;
      v7 = (v7 + 1) & 0xFFFF;
      v9 = v8 + 1;
    }
    v8 = v9;
  }
  while ( v9 <= 9u );
  return v16;
}
