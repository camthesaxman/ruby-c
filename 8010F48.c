int sub_8010F48()
{
  signed int v0; // r4@1
  signed int v1; // r4@3
  _DWORD *v2; // r3@4
  int v3; // r5@4
  int v4; // r2@8
  int v5; // r1@14
  unsigned int v6; // r4@14
  int v8; // [sp+20h] [bp-4h]@0

  v0 = 0;
  do
    *(_BYTE *)(v0++ + 88 * v2024A60 + 33704600) = 6;
  while ( v0 <= 7 );
  *(_DWORD *)(88 * v2024A60 + 0x2024AD0) = 0;
  *(_DWORD *)(4 * v2024A60 + 0x2024C98) = 0;
  v1 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v2 = (_DWORD *)33704656;
    v3 = 0;
    do
    {
      if ( *v2 & 0x4000000 && *(_BYTE *)(v3 + 33705148) == v2024A60 )
        *v2 &= 0xFBFFFFFF;
      v4 = gBitTable[v2024A60] << 16;
      if ( *v2 & v4 )
        *v2 &= ~v4;
      if ( *v2 & 0xE000 && *(_BYTE *)(v1 + 33644576) == v2024A60 )
        *v2 &= 0xFFFF1FFF;
      v2 += 22;
      v3 += 28;
      ++v1;
    }
    while ( v1 < v2024A68 );
  }
  *(_BYTE *)(v2024A60 + 0x2024E60) = 0;
  *(_BYTE *)(v2024A60 + 0x2024E64) = 0;
  v5 = 28 * v2024A60 + 33705128;
  v6 = 0;
  do
    *(_BYTE *)(v5 + v6++) = 0;
  while ( v6 <= 0x1B );
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xFEu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xFDu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xFBu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xF7u;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xEFu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xDFu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xBFu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0x7Fu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0xFEu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0xFDu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0xFBu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0xE7u;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0xDFu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0xBFu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D29) &= 0x7Fu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D2A) &= 0xFEu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D2A) &= 0xFDu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D2A) &= 0xFBu;
  *(_BYTE *)(16 * v2024A60 + 0x2024D2A) &= 0xF7u;
  *(_BYTE *)(28 * v2024A60 + 0x2024CBE) = 2;
  *(_WORD *)(2 * v2024A60 + 0x2024C34) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C3C) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C44) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C4C) = 0;
  *(_WORD *)(2 * v2024A60 + 0x2024C2C) = 0;
  *(_BYTE *)(v2024A60 + 0x2024C5C) = -1;
  *(_BYTE *)(2 * v2024A60 + 0x20160E8) = 0;
  *(_BYTE *)(2 * v2024A60 + 0x20160E9) = 0;
  *(_BYTE *)(2 * v2024A60 + 0x20160AC) = 0;
  *(_BYTE *)(2 * v2024A60 + 0x20160AD) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016100) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016101) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016102) = 0;
  *(_BYTE *)(4 * v2024A60 + 0x2016103) = 0;
  *(_DWORD *)(4 * v2024A60 + 0x2017100) = 0;
  *(_BYTE *)(88 * v2024A60 + 0x2024AA1) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024A60 + 0x2024A80) + 6);
  *(_BYTE *)(88 * v2024A60 + 0x2024AA2) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024A60 + 0x2024A80) + 7);
  return v8;
}
