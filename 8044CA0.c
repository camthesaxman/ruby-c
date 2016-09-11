int __fastcall sub_8044CA0(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r3@1
  int *v3; // r0@1
  int v4; // r9@1
  int v5; // r10@1
  signed int v6; // r5@1
  char *v7; // r2@1
  signed int v8; // r5@3
  char *v9; // r1@4
  signed int v10; // r5@7
  int *v11; // r3@7
  int *v12; // r4@7
  __int16 v13; // r7@7
  char v14; // r0@8
  char *v15; // r2@9
  char *v16; // r12@9
  int v17; // r3@12
  int v18; // r0@12
  int *v19; // r0@6
  int (*v20)(); // r1@6
  int v22; // [sp+0h] [bp-38h]@2
  int v23; // [sp+8h] [bp-30h]@1
  int v24; // [sp+Ch] [bp-2Ch]@1
  int v25; // [sp+10h] [bp-28h]@3
  int *v26; // [sp+14h] [bp-24h]@8
  int v27; // [sp+34h] [bp-4h]@13

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_BYTE *)v3 + 28);
  v5 = *((_BYTE *)v3 + 10);
  v23 = *((_BYTE *)v3 + 8);
  v6 = 0;
  v24 = v2;
  v7 = (char *)&unk_3004B2E + 40 * v1;
  do
  {
    *((_BYTE *)&v22 + v6) = *(_WORD *)v7;
    v7 += 2;
    ++v6;
  }
  while ( v6 <= 5 );
  v4000050 = 16192;
  v4000052 = 16;
  HIWORD(dword_3004B20[2 * (v24 + v1) + 9]) = 16;
  v8 = 0;
  v25 = 16 * v5;
  do
  {
    v9 = &gSprites[68 * *((_BYTE *)&v22 + v8)];
    v9[1] = v9[1] & 0xF3 | 4;
    ++v8;
  }
  while ( v8 <= 5 );
  gSprites[4 * (v25 + v5) + 1] = gSprites[4 * (v25 + v5) + 1] & 0xF3 | 4;
  if ( v4 )
  {
    v10 = 0;
    v11 = dword_2020020;
    v12 = &v22;
    v13 = 0;
    do
    {
      v26 = v11;
      v14 = battle_side_get_owner(v23);
      v11 = v26;
      if ( v14 )
      {
        v15 = (char *)&v22 + 5 - v10;
        *(_WORD *)&gSprites[68 * (unsigned __int8)*v15 + 48] = v13;
        *(_WORD *)&gSprites[68 * (unsigned __int8)*v15 + 52] = 0;
        *(_WORD *)&gSprites[68 * (unsigned __int8)*v15 + 54] = 0;
        v11[17 * (unsigned __int8)*v15] = (int)sub_8045110;
        v16 = gSprites;
      }
      else
      {
        *(_WORD *)&gSprites[68 * *(_BYTE *)v12 + 48] = v13;
        *(_WORD *)&gSprites[68 * *(_BYTE *)v12 + 52] = 0;
        *(_WORD *)&gSprites[68 * *(_BYTE *)v12 + 54] = 0;
        v11[17 * *(_BYTE *)v12] = (int)sub_8045110;
        v16 = gSprites;
      }
      v12 = (int *)((char *)v12 + 1);
      v13 += 7;
      ++v10;
    }
    while ( v10 <= 5 );
    v17 = 4 * (v25 + v5);
    v18 = (int)&v16[v17];
    *(_WORD *)(v18 + 46) = *(_WORD *)&v16[v17 + 46] / 2;
    *(_WORD *)(v18 + 48) = 0;
    *(_DWORD *)&v16[v17 + 28] = sub_8045048;
    SetSubspriteTables((int)&v16[v17], (int)&gSubspriteTables_820A6EC);
    v19 = &dword_3004B20[2 * (v24 + v1)];
    v20 = sub_8044E74;
  }
  else
  {
    v19 = &dword_3004B20[2 * (v24 + v1)];
    v20 = sub_8044F70;
  }
  *v19 = (int)v20;
  return v27;
}
