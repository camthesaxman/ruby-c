int sub_80F1238()
{
  signed int v0; // r6@1
  unsigned int v1; // r7@1
  int v2; // r7@3
  unsigned int v3; // r9@3
  int v4; // r1@4
  unsigned int v5; // r4@4
  int v6; // r2@4
  int v7; // r4@4
  unsigned __int16 v8; // r0@5
  int v9; // r6@8
  unsigned int i; // r7@8
  int v11; // r1@9
  unsigned int v12; // r4@9
  int v13; // r2@9
  signed __int16 v15; // [sp+0h] [bp-28h]@2
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+24h] [bp-4h]@10

  v0 = 139;
  v16 = (v200BC8E - v200BC8F) & 0xFF;
  v1 = 0;
  do
  {
    v15 = 0x2000;
    CpuSet(&v15, 2 * (32 * v1 + 139) + 33592140, 16777234);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 7 );
  v2 = 0;
  v3 = v16 << 16;
  if ( v16 << 16 )
  {
    do
    {
      v4 = 4 * *(_BYTE *)(v2 + 33602636);
      v5 = (((unsigned int)*(_WORD *)((char *)&gUnknown_083E4698 + v4) << 25) + 0x10000000) >> 24;
      v6 = ((byte_83E469A[v4] + 3) << 12) & 0xFFFFF;
      *(_WORD *)(2 * v0 + 0x200934C) = ((byte_83E469A[v4] + 3) << 12) | v5;
      *(_WORD *)(2 * (v0 + 1) + 0x200934C) = v6 | 0x400 | v5;
      *(_WORD *)(2 * (v0 + 32) + 0x200934C) = v6 | (v5 + 1);
      *(_WORD *)(2 * (v0 + 33) + 0x200934C) = v6 | 0x400 | (v5 + 1);
      v7 = v2 + 1;
      if ( (v2 + 1) % 9 )
        v8 = v0 + 2;
      else
        v8 = v0 + 48;
      v0 = v8;
      v2 = (unsigned __int16)v7;
    }
    while ( v7 << 16 < v3 );
  }
  v9 = 331;
  for ( i = 0; i < v200BC8F; i = (i + 1) & 0xFFFF )
  {
    v11 = 4 * *(_BYTE *)(v16 + i + 33602636);
    v12 = (((unsigned int)*(_WORD *)((char *)&gUnknown_083E4698 + v11) << 25) + 0x10000000) >> 24;
    v13 = ((byte_83E469A[v11] + 3) << 12) & 0xFFFFF;
    *(_WORD *)(2 * v9 + 0x200934C) = ((byte_83E469A[v11] + 3) << 12) | v12;
    *(_WORD *)(2 * (v9 + 1) + 0x200934C) = v13 | 0x400 | v12;
    *(_WORD *)(2 * (v9 + 32) + 0x200934C) = v13 | (v12 + 1);
    *(_WORD *)(2 * (v9 + 33) + 0x200934C) = v13 | 0x400 | (v12 + 1);
    v9 = (v9 + 2) & 0xFFFF;
  }
  return v17;
}
