int sub_809E5C4()
{
  int v0; // r5@1
  int v1; // r8@1
  int v2; // r6@1
  int v3; // r2@1
  char v4; // r0@1
  int v5; // r2@1
  int v6; // r2@1
  char v7; // r0@1
  __int16 v9; // [sp+0h] [bp-40h]@1
  int v10; // [sp+2h] [bp-3Eh]@1
  char v11; // [sp+4h] [bp-3Ch]@1
  _BYTE v12[3]; // [sp+5h] [bp-3Bh]@1
  int v13; // [sp+8h] [bp-38h]@1
  int v14; // [sp+Ch] [bp-34h]@1
  int v15; // [sp+10h] [bp-30h]@1
  int *v16; // [sp+14h] [bp-2Ch]@1
  _BYTE *v17; // [sp+18h] [bp-28h]@1
  int v18; // [sp+1Ch] [bp-24h]@1
  int v19; // [sp+3Ch] [bp-4h]@1

  v0 = v2018000 + 100 * v2018009;
  v1 = v2018079;
  v2 = v201807A;
  v13 = v2018079 + 13;
  v16 = &v10;
  LOWORD(v10) = GetMonData(v2018000 + 100 * v2018009, v13, v2018009);
  v14 = v2 + 13;
  v9 = GetMonData(v0, v2 + 13, v2 + 13);
  v15 = v1 + 17;
  v4 = GetMonData(v0, v1 + 17, v3);
  v17 = v12;
  v12[0] = v4;
  v18 = v2 + 17;
  v11 = GetMonData(v0, v2 + 17, v5);
  v7 = GetMonData(v0, 21, v6);
  v12[1] = v7;
  v12[1] = v7 & ~gUnknown_08208238[v1] & ~gUnknown_08208238[v2] | (((((signed int)(unsigned __int8)(v7 & gUnknown_08208238[v1]) >> 2 * v1) & 0xFF) << 2 * v2)
                                                                 + ((((signed int)(unsigned __int8)(v7 & gUnknown_08208238[v2]) >> 2 * v2) & 0xFF) << 2 * v1));
  SetMonData(v0, v13, (int)&v9);
  SetMonData(v0, v14, (int)v16);
  SetMonData(v0, v15, (int)&v11);
  SetMonData(v0, v18, (int)v17);
  SetMonData(v0, 21, (int)&v12[1]);
  return v19;
}
