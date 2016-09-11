signed int sub_80FAFC0()
{
  int v0; // r3@1
  unsigned int v1; // r1@1
  signed int result; // r0@2
  char *v3; // r1@4
  signed int v4; // r2@4
  char v5; // r2@6
  int v6; // r1@8
  signed int (*v7)(); // r2@8
  int v8; // r0@10
  signed int v9; // r4@10
  signed int v10; // r2@11
  _WORD *v11; // r4@11
  int v12; // r2@11
  int v13; // r3@15
  int v14; // r4@16
  int v15; // r2@20
  int v16; // r2@21
  int v17; // r3@21
  int v18; // ST00_4@27
  int v19; // ST04_4@27

  v0 = v20388CC;
  v1 = *(_WORD *)(v20388CC + 110);
  if ( v1 <= 0xF )
  {
    *(_WORD *)(v20388CC + 110) = v1 + 1;
    if ( (unsigned __int16)(v1 + 1) == 16 )
    {
      *(_DWORD *)(v0 + 68) = 0;
      *(_DWORD *)(v0 + 72) = 0;
      *(_WORD *)(v0 + 92) = *(_WORD *)(v0 + 96);
      *(_WORD *)(v0 + 94) = *(_WORD *)(v0 + 98);
      v3 = (char *)(v0 + 120);
      v4 = 0x10000;
      if ( !*(_BYTE *)(v0 + 120) )
        v4 = 0x8000;
      *(_DWORD *)(v0 + 76) = v4;
      v5 = 0;
      if ( !*v3 )
        v5 = 1;
      *v3 = v5;
      v6 = v20388CC;
      v7 = sub_80FAD04;
      if ( !*(_BYTE *)(v20388CC + 120) )
        v7 = sub_80FAB78;
      *(_DWORD *)(v20388CC + 24) = v7;
      v8 = sub_80FBB3C(*(_WORD *)(v6 + 88), *(_WORD *)(v6 + 90));
      sub_80FBE24(v8);
      v9 = 0;
    }
    else
    {
      v10 = *(_DWORD *)(v0 + 60) + *(_DWORD *)(v0 + 68);
      *(_DWORD *)(v0 + 60) = v10;
      *(_DWORD *)(v0 + 64) += *(_DWORD *)(v0 + 72);
      v11 = (_WORD *)(v0 + 92);
      *(_WORD *)(v0 + 92) = v10 >> 8;
      *(_WORD *)(v0 + 94) = *(_DWORD *)(v0 + 64) >> 8;
      *(_DWORD *)(v0 + 76) += *(_DWORD *)(v0 + 80);
      v12 = *(_DWORD *)(v0 + 68);
      if ( v12 < 0 && *v11 < (signed int)*(_WORD *)(v0 + 96) || v12 > 0 && *v11 > (signed int)*(_WORD *)(v0 + 96) )
      {
        v13 = v20388CC;
        *(_WORD *)(v20388CC + 92) = *(_WORD *)(v20388CC + 96);
        *(_DWORD *)(v13 + 68) = 0;
      }
      v14 = *(_DWORD *)(v20388CC + 72);
      if ( v14 < 0 && *(_WORD *)(v20388CC + 94) < (signed int)*(_WORD *)(v20388CC + 98)
        || v14 > 0 && *(_WORD *)(v20388CC + 94) > (signed int)*(_WORD *)(v20388CC + 98) )
      {
        v15 = v20388CC;
        *(_WORD *)(v20388CC + 94) = *(_WORD *)(v20388CC + 98);
        *(_DWORD *)(v15 + 72) = 0;
      }
      v16 = v20388CC;
      v17 = *(_BYTE *)(v20388CC + 120);
      if ( *(_BYTE *)(v20388CC + 120) )
      {
        if ( *(_DWORD *)(v20388CC + 76) > 0x10000 )
        {
          *(_DWORD *)(v20388CC + 76) = 0x10000;
          *(_DWORD *)(v16 + 80) = 0;
        }
      }
      else if ( *(_DWORD *)(v20388CC + 76) <= 0x7FFF )
      {
        *(_DWORD *)(v20388CC + 76) = 0x8000;
        *(_DWORD *)(v16 + 80) = v17;
      }
      v9 = 1;
    }
    v18 = *(_DWORD *)(v20388CC + 76) << 8 >> 16;
    v19 = *(_DWORD *)(v20388CC + 76) << 8 >> 16;
    sub_80FB170(*(_WORD *)(v20388CC + 92), *(_WORD *)(v20388CC + 94), 56, 72);
    result = v9;
  }
  else
  {
    result = 0;
  }
  return result;
}
