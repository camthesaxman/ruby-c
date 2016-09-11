int sub_80C4D80()
{
  signed __int16 *v0; // r2@1
  signed __int16 *v1; // r1@1
  signed int v2; // r6@1
  signed int v3; // r6@3
  signed int v4; // r1@4
  int v5; // r4@5
  char *v6; // r3@5
  char *v7; // r2@5
  signed int v8; // r0@5
  unsigned int v9; // r2@9
  int v10; // r7@9
  signed int v11; // r6@9
  signed __int16 *v12; // r1@9
  signed int v13; // r6@14
  signed int v14; // r10@14
  signed __int16 *v15; // r1@15
  __int16 v16; // r4@18
  int v17; // r2@18
  int v18; // r6@18
  signed __int16 v20; // [sp+0h] [bp-28h]@1
  int v21; // [sp+24h] [bp-4h]@31

  v0 = (signed __int16 *)33785456;
  v1 = &v20;
  v2 = 3;
  do
  {
    *v1 = *v0;
    ++v0;
    ++v1;
    --v2;
  }
  while ( v2 >= 0 );
  v3 = 0;
  do
  {
    v4 = 3;
    if ( v3 < 3 )
    {
      do
      {
        v5 = v4 - 1;
        v6 = (char *)(&v20 + v4 - 1);
        v7 = (char *)(&v20 + v4);
        v8 = *(_WORD *)v7;
        if ( *(_WORD *)v6 < v8 )
        {
          *(_WORD *)v7 = *(_WORD *)v6;
          *(_WORD *)v6 = v8;
        }
        --v4;
      }
      while ( v5 > v3 );
    }
    ++v3;
  }
  while ( v3 <= 2 );
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = &v20;
  do
  {
    if ( *v12 == *(&v20 + v202E8D0) )
    {
      v9 = ((v9 << 24) + 0x1000000) >> 24;
      if ( v11 == v202E8D0 )
        v10 = v9;
    }
    ++v12;
    ++v11;
  }
  while ( v11 <= 3 );
  v13 = 0;
  v14 = v9 << 24;
  if ( v20 != *(&v20 + v202E8D0) )
  {
    v15 = &v20;
    do
    {
      ++v15;
      ++v13;
    }
    while ( v13 <= 3 && *v15 != *(&v20 + v202E8D0) );
  }
  v16 = (unsigned __int8)v13;
  v17 = v10;
  v18 = 0;
  if ( *(&v20 + v202E8D0) == v2038670 )
  {
    if ( v10 != 1 )
      goto _080C4E5A;
  }
  else
  {
    do
    {
_080C4E60:
      if ( ++v18 > 3 )
        goto _080C4E78;
    }
    while ( *(&v20 + v202E8D0) != *(_WORD *)(2 * v18 + 0x2038670) );
    if ( v17 != 1 )
    {
_080C4E5A:
      v17 = (v17 - 1) & 0xFF;
      goto _080C4E60;
    }
  }
_080C4E78:
  sub_80C4698(&gStringVar1, v18);
  if ( v203869A & 1 )
    sub_80C4674(&gStringVar2, &byte_3002978[28 * v18]);
  else
    sub_80C4674(&gStringVar2, (_BYTE *)((v18 << 6) + 33785213));
  if ( v14 >> 24 != 1 && v10 != v14 >> 24 )
    v202E8D0 = v16 + 4;
  else
    v202E8D0 = v16;
  return v21;
}
