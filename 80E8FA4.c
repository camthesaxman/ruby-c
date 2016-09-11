int sub_80E8FA4()
{
  int v0; // r9@1
  unsigned int v1; // r2@2
  unsigned int v2; // r1@2
  unsigned int v3; // r3@2
  int *v4; // r4@2
  int v5; // r4@4
  int *v6; // r6@4
  unsigned int v7; // r3@5
  int v9; // [sp+0h] [bp-4Ch]@2
  int v10; // [sp+4h] [bp-48h]@2
  int v11; // [sp+8h] [bp-44h]@2
  int v12[6]; // [sp+Ch] [bp-40h]@2
  signed int v13; // [sp+10h] [bp-3Ch]@2
  signed int v14; // [sp+14h] [bp-38h]@2
  int v15[6]; // [sp+18h] [bp-34h]@1
  int *v16; // [sp+24h] [bp-28h]@1
  int v17; // [sp+28h] [bp-24h]@2
  int v18; // [sp+48h] [bp-4h]@9

  v0 = 0;
  v16 = v15;
  do
  {
    v1 = (unsigned __int16)word_8E8F19A[v0];
    v9 = (v1 & 0x1F) << 8;
    v2 = (unsigned __int16)word_8E8F1A0[v0];
    v12[0] = (v2 & 0x1F) << 8;
    v1 <<= 16;
    v10 = ((v1 >> 21) & 0x1F) << 8;
    v2 <<= 16;
    v13 = ((v2 >> 21) & 0x1F) << 8;
    v11 = ((v1 >> 26) & 0x1F) << 8;
    v14 = ((v2 >> 26) & 0x1F) << 8;
    v3 = 0;
    v17 = v0 + 1;
    v4 = v16;
    do
    {
      v4[v3] = (v12[v3] - *(&v9 + v3)) / 8;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 2 );
    v5 = 0;
    v6 = v16;
    do
    {
      *(_WORD *)(2 * v5 + 18 * v0 + 0x200AC34) = (((v11 >> 8) & 0x1F) << 10) | 32 * ((v10 >> 8) & 0x1F) | (v9 >> 8) & 0x1F;
      v7 = 0;
      LOWORD(v5) = v5 + 1;
      do
      {
        *(&v9 + v7) += v6[v7];
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 <= 2 );
      v5 = (unsigned __int16)v5;
    }
    while ( (unsigned __int16)v5 <= 7u );
    *(_WORD *)(2 * (9 * v0 + v5) + 0x200AC34) = (((v14 >> 8) & 0x1F) << 10) | 32 * ((v13 >> 8) & 0x1F) | (v12[0] >> 8) & 0x1F;
    v0 = (unsigned __int16)v17;
  }
  while ( (unsigned __int16)v17 <= 2u );
  v200AC32 = 0;
  return v18;
}
