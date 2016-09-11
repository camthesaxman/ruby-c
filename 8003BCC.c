int __fastcall ApplyColors_ShadowedFont(unsigned int *a1, int *a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned int *v5; // r6@1
  int *v6; // r5@1
  signed int v7; // r4@1
  unsigned int v8; // r2@2
  int v10; // [sp+0h] [bp-54h]@1
  int v11; // [sp+4h] [bp-50h]@1
  int v12; // [sp+8h] [bp-4Ch]@1
  int v13; // [sp+Ch] [bp-48h]@1
  int v14; // [sp+10h] [bp-44h]@1
  int v15; // [sp+14h] [bp-40h]@1
  int v16; // [sp+18h] [bp-3Ch]@1
  int v17; // [sp+1Ch] [bp-38h]@1
  int v18; // [sp+20h] [bp-34h]@1
  int v19; // [sp+24h] [bp-30h]@1
  int v20; // [sp+28h] [bp-2Ch]@1
  int v21; // [sp+2Ch] [bp-28h]@1
  int v22; // [sp+30h] [bp-24h]@1
  int v23; // [sp+34h] [bp-20h]@1
  int v24; // [sp+38h] [bp-1Ch]@1
  int v25; // [sp+3Ch] [bp-18h]@1
  int v26; // [sp+50h] [bp-4h]@3

  v11 = 1;
  v12 = 2;
  v13 = 3;
  v14 = 4;
  v15 = 5;
  v16 = 6;
  v17 = 7;
  v18 = 8;
  v19 = 9;
  v20 = 10;
  v21 = 11;
  v22 = 12;
  v23 = 13;
  v10 = a5;
  v24 = a4;
  v25 = a3;
  v5 = a1;
  v6 = a2;
  v7 = 7;
  do
  {
    v8 = *v5;
    ++v5;
    *v6 = *(&v10 + (v8 & 0xF)) | 16 * *(&v10 + ((unsigned __int8)v8 >> 4)) | (*(&v10 + ((v8 >> 8) & 0xF)) << 8) | (*(&v10 + ((unsigned __int16)v8 >> 12)) << 12) | (*(&v10 + ((v8 >> 16) & 0xF)) << 16) | (*(&v10 + ((v8 >> 20) & 0xF)) << 20) | (*(&v10 + ((v8 >> 24) & 0xF)) << 24) | (*(&v10 + (v8 >> 28)) << 28);
    ++v6;
    --v7;
  }
  while ( v7 >= 0 );
  return v26;
}
