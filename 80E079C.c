int __fastcall sub_80E079C(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  int v3; // r8@2
  signed int v4; // r5@2
  int v5; // r0@2
  signed int v6; // r2@3
  int v7; // r4@4
  signed int i; // r3@4
  signed int v9; // r2@8
  int v10; // r5@8
  signed int v11; // r3@9
  int v12; // r5@13
  int v13; // r4@13
  int v14; // r2@14
  signed int v15; // r0@14
  int v17; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 16);
  if ( *(_WORD *)(a1 + 18) == (_WORD)v2 )
  {
    v12 = *(_WORD *)(a1 + 28) + 159;
    LOWORD(v13) = 0;
    do
    {
      v14 = (signed __int16)v13;
      word_3004DE0[v14] = v12;
      word_3005560[v14] = v12--;
      v15 = ((signed __int16)v13 + 1) << 16;
      v13 = ((signed __int16)v13 + 1) & 0xFFFF;
    }
    while ( v15 >> 16 <= 111 );
  }
  else
  {
    v3 = *(_WORD *)(a1 + 34) / (signed __int16)(*(_WORD *)(a1 + 18) - v2);
    v4 = *(_WORD *)(a1 + 20) << 8;
    v5 = v2 << 16;
    LOWORD(v2) = 0;
    if ( v5 > 0 )
    {
      do
      {
        *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (signed __int16)v2) = *(_WORD *)(v1 + 28) - (v2 - 159);
        v6 = ((signed __int16)v2 + 1) << 16;
        v2 = ((signed __int16)v2 + 1) & 0xFFFF;
      }
      while ( v6 >> 16 < *(_WORD *)(v1 + 16) );
    }
    v7 = *(_WORD *)(v1 + 16);
    for ( i = v7 << 16; (signed __int16)v7 <= (signed int)*(_WORD *)(v1 + 18); i = ((i >> 16) + 1) << 16 )
    {
      if ( i >> 16 >= 0 )
        *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (i >> 16)) = (v4 >> 8) - HIWORD(i) + *(_WORD *)(v1 + 28);
      v4 += v3;
      v7 = ((i >> 16) + 1) & 0xFFFF;
    }
    v9 = v7 << 16;
    v10 = *(_WORD *)(v1 + 28) + 159 - (signed __int16)v7;
    if ( (signed __int16)v7 < (signed int)*(_WORD *)(v1 + 22) )
    {
      do
      {
        v11 = v9 >> 16;
        if ( v9 >> 16 >= 0 )
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v11) = v10--;
        v9 = (v11 + 1) << 16;
      }
      while ( (signed __int16)(v11 + 1) < (signed int)*(_WORD *)(v1 + 22) );
    }
  }
  return v17;
}
