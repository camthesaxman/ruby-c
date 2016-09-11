int __fastcall sub_80AAD84(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _BYTE *v4; // r9@1
  int v5; // r10@1
  int v6; // r5@1
  signed int v7; // r7@1
  signed int v8; // r6@3
  int v9; // r2@4
  int v10; // r7@6
  int *v11; // r3@6
  int *v12; // r7@6
  int v13; // r1@6
  int v15; // [sp+0h] [bp-84h]@5
  char v16; // [sp+20h] [bp-64h]@5
  char v17; // [sp+40h] [bp-44h]@5
  char v18; // [sp+41h] [bp-43h]@5
  int v19; // [sp+44h] [bp-40h]@1
  int v20; // [sp+48h] [bp-3Ch]@1
  int v21; // [sp+4Ch] [bp-38h]@1
  int v22; // [sp+50h] [bp-34h]@6
  int v23; // [sp+54h] [bp-30h]@6
  int v24; // [sp+58h] [bp-2Ch]@3
  int v25; // [sp+5Ch] [bp-28h]@3
  int v26; // [sp+60h] [bp-24h]@5
  int v27; // [sp+80h] [bp-4h]@6

  v4 = a1;
  v20 = a2;
  v21 = a3;
  v5 = a4;
  v6 = a4 + 1;
  v19 = 0;
  v40000D4 = &v19;
  v40000D8 = 100761600 - (v6 << 8);
  v40000DC = -2063597504;
  v7 = (unsigned __int16)StringLength(a1);
  if ( (unsigned int)v7 > 8 )
    v7 = 8;
  v8 = 0;
  v24 = 2 * v5;
  v25 = v20 + 32;
  if ( v7 > 0 )
  {
    v9 = 100761600;
    do
    {
      v17 = v4[v8];
      v18 = -1;
      v26 = v9;
      sub_80034D4((int)&v15, (int)&v17);
      v40000D4 = &v16;
      v40000D8 = v26 - (v6 << 8);
      v40000DC = -2080374776;
      v9 = v26 + 32;
      ++v8;
    }
    while ( v8 < v7 );
  }
  v10 = (124 - v24) & 0xFF;
  v11 = &gMain[2 * v10];
  v22 = 1073758208;
  v23 = 62463;
  v11[15] = 1073758208;
  v11[16] = 62463;
  *((_WORD *)v11 + 32) = *((_WORD *)v11 + 32) & 0xFC00 | (1024 - 8 * v6) & 0x3FF;
  *((_WORD *)v11 + 31) = *((_WORD *)v11 + 31) & 0xFE00 | v20;
  *((_BYTE *)v11 + 60) = v21;
  v12 = &gMain[2 * (v10 + 1)];
  v13 = v23;
  v12[15] = v22;
  v12[16] = v13;
  *((_WORD *)v12 + 32) = *((_WORD *)v12 + 32) & 0xFC00 | ((*((_WORD *)v11 + 32) & 0x3FF) + 4) & 0x3FF;
  *((_WORD *)v12 + 31) = *((_WORD *)v12 + 31) & 0xFE00 | v25;
  *((_BYTE *)v12 + 60) = v21;
  return v27;
}
