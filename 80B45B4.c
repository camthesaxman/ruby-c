int __fastcall sub_80B45B4(unsigned __int8 a1, int a2, __int16 a3)
{
  int v3; // r9@1
  __int16 v4; // r10@1
  int *v5; // r1@1
  __int16 v6; // r4@1
  unsigned int v7; // r2@2
  int v8; // r7@2
  unsigned int v9; // r4@3
  unsigned int v10; // r8@3
  int v11; // r6@3
  signed int v12; // r4@4
  int v13; // r5@4
  signed int v14; // r0@8
  unsigned int v15; // r2@11
  int v16; // r7@11
  unsigned int v17; // r4@12
  unsigned int v18; // r8@12
  int v19; // r6@12
  signed int v20; // r4@13
  int v21; // r5@13
  signed int v22; // r0@17
  int v24; // [sp+0h] [bp-30h]@2
  int v25; // [sp+4h] [bp-2Ch]@2
  int v26; // [sp+8h] [bp-28h]@11
  signed int v27; // [sp+Ch] [bp-24h]@2
  signed int v28; // [sp+Ch] [bp-24h]@11
  int v29; // [sp+2Ch] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  v5 = &dword_3004B20[10 * a1];
  v6 = *((_WORD *)v5 + 5);
  if ( *((_WORD *)v5 + 6) )
  {
    v15 = 0;
    v28 = (LOWORD(dword_3004B20[10 * a1 + 4]) - 1) << 16;
    v26 = (signed __int16)(*((_WORD *)v5 + 9) - 1);
    v16 = v6;
    do
    {
      v17 = 0;
      v18 = v15 << 16;
      v19 = v26 + (signed __int16)v15;
      do
      {
        v20 = v17 << 16;
        v21 = (v28 >> 16) + (v20 >> 16);
        if ( *(_WORD *)(2 * (2 - v16) + v3) == (signed __int16)MapGridGetMetatileIdAt(v21, v19) )
        {
          if ( v16 == 2 )
            MapGridSetMetatileIdAt(v21, v19, v4 | *(_WORD *)(v3 + 4));
          else
            MapGridSetMetatileIdAt(v21, v19, v4 | *(_WORD *)(2 * (1 - v16) + v3));
        }
        v22 = v20 + 0x10000;
        v17 = (unsigned int)(v20 + 0x10000) >> 16;
      }
      while ( v22 >> 16 <= 2 );
      v15 = (v18 + 0x10000) >> 16;
    }
    while ( (signed int)(v18 + 0x10000) >> 16 <= 2 );
  }
  else
  {
    v7 = 0;
    v27 = (LOWORD(dword_3004B20[10 * a1 + 4]) - 1) << 16;
    v24 = (signed __int16)(*((_WORD *)v5 + 9) - 1);
    v25 = v6;
    v8 = 2 * v6 + v3;
    do
    {
      v9 = 0;
      v10 = v7 << 16;
      v11 = v24 + (signed __int16)v7;
      do
      {
        v12 = v9 << 16;
        v13 = (v27 >> 16) + (v12 >> 16);
        if ( *(_WORD *)v8 == (signed __int16)MapGridGetMetatileIdAt(v13, v11) )
        {
          if ( v25 == 2 )
            MapGridSetMetatileIdAt(v13, v11, v4 | *(_WORD *)v3);
          else
            MapGridSetMetatileIdAt(v13, v11, v4 | *(_WORD *)(v8 + 2));
        }
        v14 = v12 + 0x10000;
        v9 = (unsigned int)(v12 + 0x10000) >> 16;
      }
      while ( v14 >> 16 <= 2 );
      v7 = (v10 + 0x10000) >> 16;
    }
    while ( (signed int)(v10 + 0x10000) >> 16 <= 2 );
  }
  return v29;
}
