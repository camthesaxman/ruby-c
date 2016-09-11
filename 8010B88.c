int sub_8010B88()
{
  int v0; // ST18_4@1
  signed int v1; // r5@2
  signed int v2; // r5@4
  signed int v3; // r3@5
  _DWORD *v4; // r4@5
  signed int v5; // r5@14
  int v6; // r6@15
  int v7; // r4@16
  int v8; // r1@17
  signed int i; // r5@23
  int v10; // r2@24
  int v11; // r1@30
  unsigned int v12; // r5@30
  int v14; // [sp+8h] [bp-3Ch]@1
  int v15; // [sp+Ch] [bp-38h]@1
  int v16; // [sp+14h] [bp-30h]@1
  int v17; // [sp+40h] [bp-4h]@0

  v14 = *(_DWORD *)(28 * v2024A60 + 0x2024CB0);
  v15 = *(_DWORD *)(28 * v2024A60 + 0x2024CB4);
  v16 = *(_DWORD *)(28 * v2024A60 + 0x2024CBC);
  v0 = *(_DWORD *)(28 * v2024A60 + 0x2024CC0);
  if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6) == 127 )
    goto LABEL_37;
  v1 = 0;
  do
    *(_BYTE *)(v1++ + 88 * v2024A60 + 33704600) = 6;
  while ( v1 <= 7 );
  v2 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v3 = 33705128;
    v4 = (_DWORD *)33705112;
    do
    {
      if ( *(_DWORD *)(88 * v2 + 0x2024AD0) & 0x4000000 && *(_BYTE *)(v3 + 20) == v2024A60 )
        *(_DWORD *)(88 * v2 + 0x2024AD0) &= 0xFBFFFFFF;
      if ( *v4 & 0x18 && *(_BYTE *)(v3 + 21) == v2024A60 )
      {
        *v4 &= 0xFFFFFFE7;
        *(_BYTE *)(v3 + 21) = 0;
      }
      v3 += 28;
      ++v4;
      ++v2;
    }
    while ( v2 < v2024A68 );
  }
  if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6) != 127 )
  {
    *(_DWORD *)(88 * v2024A60 + 0x2024AD0) = 0;
    *(_DWORD *)(4 * v2024A60 + 0x2024C98) = 0;
  }
  else
  {
LABEL_37:
    *(_DWORD *)(88 * v2024A60 + 0x2024AD0) &= 0x15100007u;
    *(_DWORD *)(4 * v2024A60 + 0x2024C98) &= 0x3043Fu;
    v5 = 0;
    if ( (signed int)v2024A68 > 0 )
    {
      v6 = 0;
      do
      {
        v7 = battle_side_get_owner(v2024A60);
        if ( v7 << 24 != battle_side_get_owner((unsigned __int8)v5) << 24 )
        {
          v8 = *(_DWORD *)(4 * v5 + 0x2024C98);
          if ( v8 & 0x18 )
          {
            if ( *(_BYTE *)(v6 + 33705149) == v2024A60 )
              *(_DWORD *)(4 * v5 + 0x2024C98) = v8 & 0xFFFFFFE7 | 0x10;
          }
        }
        v6 += 28;
        ++v5;
      }
      while ( v5 < v2024A68 );
    }
  }
  for ( i = 0; i < v2024A68; ++i )
  {
    v10 = gBitTable[v2024A60] << 16;
    if ( *(_DWORD *)(88 * i + 0x2024AD0) & v10 )
      *(_DWORD *)(88 * i + 0x2024AD0) &= ~(gBitTable[v2024A60] << 16);
    if ( *(_DWORD *)(88 * i + 0x2024AD0) & 0xE000 && *(_BYTE *)(i + 33644576) == v2024A60 )
      *(_DWORD *)(88 * i + 0x2024AD0) &= 0xFFFF1FFF;
  }
  *(_BYTE *)(v2024A60 + 0x2024E60) = 0;
  *(_BYTE *)(v2024A60 + 0x2024E64) = 0;
  v11 = 28 * v2024A60 + 33705128;
  v12 = 0;
  do
    *(_BYTE *)(v11 + v12++) = 0;
  while ( v12 <= 0x1B );
  if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6) == 127 )
  {
    *(_BYTE *)(28 * v2024A60 + 0x2024CB2) = BYTE2(v14);
    *(_BYTE *)(28 * v2024A60 + 0x2024CBD) = BYTE1(v16);
    *(_BYTE *)(28 * v2024A60 + 0x2024CB7) = *(_BYTE *)(28 * v2024A60 + 0x2024CB7) & 0xF0 | BYTE3(v15) & 0xF;
    *(_BYTE *)(28 * v2024A60 + 0x2024CB7) = *(_BYTE *)(28 * v2024A60 + 0x2024CB7) & 0xF | 16 * (BYTE3(v15) >> 4);
  }
  *(_BYTE *)(28 * v2024A60 + 0x2024CBE) = 2;
  *(_WORD *)(2 * v2024A60 + 0x2024C34) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C3C) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C44) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C4C) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C2C) = 0;
  *(_BYTE *)(v2024A60 + 0x2024C5C) = -1;
  *(_BYTE *)(2 * v2024A60 + 0x20160AC) = 0;
  *(_BYTE *)(2 * v2024A60 + 0x20160AD) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016100) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016101) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016102) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016103) = 0;
  *(_BYTE *)(2 * v2024A60 + 0x20160E8) = 0;
  *(_BYTE *)(2 * v2024A60 + 0x20160E9) = 0;
  *(_DWORD *)(4 * v2024A60 + 0x2017100) = 0;
  v2024BE6 = 0;
  return v17;
}
