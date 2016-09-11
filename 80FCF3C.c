int sub_80FCF3C()
{
  _WORD *v0; // r4@1
  unsigned int v1; // r6@1
  unsigned int v2; // r7@2
  unsigned int v3; // r7@7
  int *v4; // r3@7
  _WORD *v5; // r4@8
  unsigned int v6; // r6@8
  _WORD *v7; // r4@8
  __int16 v8; // r0@10
  _WORD *v9; // r4@12
  unsigned int v10; // r6@12
  _WORD *v11; // r4@12
  _WORD *v12; // r5@13
  __int16 v13; // r0@14
  _WORD *v14; // r4@17
  char v15; // r6@17
  unsigned int v16; // r7@18
  unsigned __int8 v17; // r5@18
  int v19; // [sp+0h] [bp-28h]@7
  int *v20; // [sp+4h] [bp-24h]@10
  int v21; // [sp+24h] [bp-4h]@23

  v0 = (_WORD *)dword_3005DEC;
  v1 = 0;
  do
  {
    v2 = 0;
    do
    {
      if ( !(*v0 & 0x8000) )
        *v0 = sub_80FD53C(v0);
      v2 = (v2 + 1) & 0xFF;
      ++v0;
    }
    while ( v2 <= 0x3F );
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0x3F );
  v3 = 0;
  v4 = &v19;
  do
  {
    v5 = (_WORD *)(dword_3005DEC + 2 * v3);
    *(_WORD *)v4 = *v5;
    *v5 = -32768;
    v6 = 1;
    v7 = v5 + 64;
    do
    {
      if ( !(*v7 & 0x8000) )
      {
        v20 = v4;
        v8 = sub_80FD7AC(&v19, v7, v7 + 64);
        *v7 = v8;
        v4 = v20;
        *(_WORD *)v20 = v8;
      }
      v6 = (v6 + 1) & 0xFF;
      v7 += 64;
    }
    while ( v6 <= 0x3E );
    *v7 = -32768;
    v9 = (_WORD *)(dword_3005DEC + 2 * v3);
    *(_WORD *)v4 = *v9;
    *v9 = -32768;
    v10 = 1;
    v11 = v9 + 64;
    do
    {
      v12 = v11 + 64;
      if ( !(*v11 & 0x8000) )
      {
        v20 = v4;
        v13 = sub_80FD7AC(&v19, v11, v11 + 64);
        *v11 = v13;
        v4 = v20;
        *(_WORD *)v20 = v13;
      }
      v10 = (v10 + 1) & 0xFF;
      v11 += 64;
    }
    while ( v10 <= 0x3E );
    *v12 = -32768;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0x3F );
  v14 = (_WORD *)dword_3005DEC;
  v15 = 0;
  do
  {
    v16 = 0;
    v17 = v15 + 1;
    do
    {
      if ( !(*v14 & 0x8000) )
        *v14 = sub_80FD53C(v14);
      v16 = (v16 + 1) & 0xFF;
      ++v14;
    }
    while ( v16 <= 0x3F );
    ++v15;
  }
  while ( v17 <= 0x3Fu );
  return v21;
}
