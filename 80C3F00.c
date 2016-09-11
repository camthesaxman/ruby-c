int sub_80C3F00()
{
  int v0; // r2@1
  _WORD *v1; // r3@1
  signed int v2; // r8@1
  signed int v3; // r9@5
  int v4; // r2@6
  _WORD *v5; // r3@6
  signed int v6; // r8@6
  signed int v7; // r8@10
  int v8; // r10@10
  signed int v9; // r6@11
  signed int v10; // r1@11
  int v11; // r4@13
  int v12; // r1@15
  signed int v13; // r0@17
  signed int v14; // r1@17
  int v15; // r4@19
  unsigned int v16; // r1@23
  unsigned int v17; // r1@25
  int v18; // r0@27
  int v19; // r2@30
  int v20; // r1@30
  int v22; // [sp+1Ch] [bp-4h]@0

  v0 = v2038678;
  v1 = (_WORD *)33785466;
  v2 = 2;
  do
  {
    if ( (signed __int16)v0 < (signed int)*v1 )
      v0 = *v1;
    ++v1;
    --v2;
  }
  while ( v2 >= 0 );
  v3 = v0 << 16;
  if ( v0 & 0x8000 )
  {
    v4 = v2038678;
    v5 = (_WORD *)33785466;
    v6 = 2;
    do
    {
      if ( (signed __int16)v4 > (signed int)*v5 )
        v4 = *v5;
      ++v5;
      --v6;
      v3 = v4 << 16;
    }
    while ( v6 >= 0 );
  }
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = v3 >> 16;
    v10 = v3 >> 16;
    if ( v3 >> 16 < 0 )
      v10 = -v9;
    v11 = 1000 * *(_WORD *)(2 * v7 + 0x2038670) / v10;
    if ( v11 % 10 > 4 )
      v11 += 10;
    *(_DWORD *)(v8 + 33652760) = v11 / 10;
    v12 = *(_WORD *)(2 * v7 + 0x2038688);
    if ( v12 < 0 )
      v12 = -v12;
    v13 = 1000 * v12;
    v14 = v3 >> 16;
    if ( v9 < 0 )
      v14 = -v9;
    v15 = v13 / v14;
    if ( v13 / v14 % 10 > 4 )
      v15 += 10;
    *(_DWORD *)(v8 + 33652764) = v15 / 10;
    if ( (signed int)*(_WORD *)(2 * v7 + 0x2038688) < 0 )
      *(_BYTE *)(v8 + 33652776) = 1;
    v16 = 22528 * *(_DWORD *)(v8 + 33652760) / 100;
    if ( (unsigned __int8)v16 > 0x7Fu )
      v16 += 256;
    *(_DWORD *)(v8 + 33652768) = v16 >> 8;
    v17 = 22528 * *(_DWORD *)(v8 + 33652764) / 100;
    if ( (unsigned __int8)v17 > 0x7Fu )
      v17 += 256;
    *(_DWORD *)(v8 + 33652772) = v17 >> 8;
    *(_BYTE *)(v8 + 33652777) = sub_80C3990((unsigned __int8)v7, 1u);
    v18 = (char)sub_80C39E4(v7, 1);
    if ( (char)v18 < 0 )
      v18 = -v18;
    *(_BYTE *)(v8 + 33652778) = v18;
    if ( *(_BYTE *)(v7 + 33785488) )
    {
      LOWORD(v19) = *(_WORD *)(v8 + 33652768);
      v20 = *(_WORD *)(v8 + 33652772);
      if ( *(_BYTE *)(v8 + 33652776) )
        v20 = 0xFFFF * v20 & 0xFFFF;
      v19 = (signed __int16)v19;
      v20 = (signed __int16)v20;
      if ( (signed __int16)v19 + (signed __int16)v20 == 88 )
      {
        if ( v20 <= 0 )
        {
          if ( v19 > 0 )
            --*(_DWORD *)(v8 + 33652768);
        }
        else
        {
          --*(_DWORD *)(v8 + 33652772);
        }
      }
    }
    v8 += 20;
    ++v7;
  }
  while ( v7 <= 3 );
  return v22;
}
