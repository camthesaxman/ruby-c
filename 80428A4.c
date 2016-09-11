int __fastcall sub_80428A4(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r2@1
  unsigned __int16 v6; // r10@1
  unsigned int v7; // r4@1
  int v8; // r2@3
  unsigned int v9; // r4@3
  char v10; // r0@5
  int v11; // r2@5
  char v12; // r0@5
  int v13; // r2@5
  unsigned int v14; // r4@5
  unsigned int v15; // r4@7
  int v17; // [sp+10h] [bp-58h]@2
  char v18[24]; // [sp+18h] [bp-50h]@4
  char v19; // [sp+30h] [bp-38h]@9
  _BYTE v20[3]; // [sp+31h] [bp-37h]@1
  int v21; // [sp+34h] [bp-34h]@1
  _BYTE *v22; // [sp+38h] [bp-30h]@1
  _BYTE *v23; // [sp+3Ch] [bp-2Ch]@1
  _BYTE *v24; // [sp+40h] [bp-28h]@1
  int *v25; // [sp+44h] [bp-24h]@1
  int v26; // [sp+64h] [bp-4h]@9

  v3 = a1;
  v4 = a2;
  v6 = GetMonData(a1, 11, a3);
  v7 = 0;
  v22 = v20;
  v23 = &v20[1];
  v24 = &v20[2];
  v25 = &v21;
  do
  {
    *((_WORD *)&v17 + v7) = GetMonData(v3, v7 + 13, v5);
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 3 );
  GetMonData(v3, 0, v5);
  v9 = 0;
  do
  {
    *(_DWORD *)&v18[4 * v9] = GetMonData(v3, v9 + 39, v8);
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 <= 5 );
  v10 = GetMonData(v3, 37, v8);
  *v22 = v10;
  v12 = GetMonData(v3, 8, v11);
  *v23 = v12;
  v21 = GetMonData(v3, 34, v13);
  CreateMon(v4, v6, 5u, 0x20u);
  v14 = 0;
  do
  {
    SetMonData(v4, v14 + 13, (int)&v17 + 2 * v14);
    v14 = (v14 + 1) & 0xFF;
  }
  while ( v14 <= 3 );
  v15 = 0;
  do
  {
    SetMonData(v4, v15 + 39, (int)&v18[4 * v15]);
    v15 = (v15 + 1) & 0xFF;
  }
  while ( v15 <= 5 );
  v19 = 2;
  SetMonData(v4, 3, (int)&v19);
  SetMonData(v4, 37, (int)v22);
  SetMonData(v4, 8, (int)v23);
  *v24 = 120;
  SetMonData(v4, 32, (int)v24);
  SetMonData(v4, 34, (int)v25);
  memcpy(v3, v4, 100);
  return v26;
}
