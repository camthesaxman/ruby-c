int __fastcall sub_8091564(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  char v3; // r10@1
  unsigned int v4; // r6@1
  signed int v5; // r5@3
  signed int v6; // r7@4
  unsigned int v7; // r6@6
  int v8; // r2@8
  int v9; // r7@8
  unsigned int v10; // r6@10
  int v11; // r2@12
  int v12; // r7@12
  unsigned int v13; // r6@14
  int v14; // r5@14
  int v15; // r1@14
  int v16; // r5@14
  int v17; // r1@14
  int v18; // r2@14
  int v19; // r3@14
  int v20; // r2@14
  char v22[16]; // [sp+0h] [bp-34h]@3
  char v23; // [sp+1h] [bp-33h]@4
  int v24; // [sp+10h] [bp-24h]@1
  int v25; // [sp+30h] [bp-4h]@14

  v3 = a2;
  v24 = a3;
  v4 = 100000 * a1 / 4536;
  if ( v4 % 0xA > 4 )
    v4 += 10;
  v5 = 0;
  v22[0] = v4 / 0x186A0 - 95;
  if ( (unsigned __int8)v22[0] == 161 )
  {
    v22[0] = 0;
    v6 = 2;
    v23 = 0;
  }
  else
  {
    v5 = 1;
    v6 = 1;
  }
  v7 = v4 % 0x186A0;
  v22[v6] = v7 / 0x2710 - 95;
  if ( (unsigned __int8)(v7 / 0x2710 - 95) != 161 || v5 )
  {
    v5 = 1;
    v9 = (v6 + 1) & 0xFF;
  }
  else
  {
    v8 = (v6 + 1) & 0xFF;
    v22[v6] = 0;
    v9 = (v8 + 1) & 0xFF;
    v22[v8] = 0;
  }
  v10 = v7 % 0x2710;
  v22[v9] = v10 / 0x3E8 - 95;
  if ( (unsigned __int8)(v10 / 0x3E8 - 95) != 161 || v5 )
  {
    v12 = (v9 + 1) & 0xFF;
  }
  else
  {
    v11 = (v9 + 1) & 0xFF;
    v22[v9] = 0;
    v12 = (v11 + 1) & 0xFF;
    v22[v11] = 0;
  }
  v13 = v10 % 0x3E8;
  v14 = (v12 + 1) & 0xFF;
  v22[v12] = v13 / 0x64 - 95;
  v15 = (v14 + 1) & 0xFF;
  v22[v14] = -83;
  v16 = (v15 + 1) & 0xFF;
  v22[v15] = v13 % 0x64 / 0xA - 95;
  v17 = (v16 + 1) & 0xFF;
  v22[v16] = 0;
  v18 = (v17 + 1) & 0xFF;
  v22[v17] = -32;
  v19 = (v18 + 1) & 0xFF;
  v22[v18] = -42;
  v20 = (v19 + 1) & 0xFF;
  v22[v19] = -25;
  v22[v20] = -83;
  v22[(v20 + 1) & 0xFF] = -1;
  MenuPrint((int)v22, v3, v24);
  return v25;
}
