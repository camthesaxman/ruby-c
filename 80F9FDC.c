int __fastcall sub_80F9FDC(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r2@1
  int v7; // r2@1
  char v8; // r0@1
  int v9; // r2@1
  int v10; // r2@1
  char v11; // r0@1
  __int16 v13; // [sp+0h] [bp-40h]@1
  int v14; // [sp+2h] [bp-3Eh]@1
  char v15; // [sp+4h] [bp-3Ch]@1
  _BYTE v16[3]; // [sp+5h] [bp-3Bh]@1
  int v17; // [sp+8h] [bp-38h]@1
  int v18; // [sp+Ch] [bp-34h]@1
  int v19; // [sp+10h] [bp-30h]@1
  int *v20; // [sp+14h] [bp-2Ch]@1
  _BYTE *v21; // [sp+18h] [bp-28h]@1
  int v22; // [sp+1Ch] [bp-24h]@1
  int v23; // [sp+3Ch] [bp-4h]@1

  v3 = a1;
  v4 = a2;
  v5 = (unsigned __int8)a3;
  v17 = a2 + 13;
  v20 = &v14;
  LOWORD(v14) = GetMonData(a1, v17, a3);
  v18 = v5 + 13;
  v13 = GetMonData(v3, v5 + 13, v6);
  v19 = v4 + 17;
  v8 = GetMonData(v3, v4 + 17, v7);
  v21 = v16;
  v16[0] = v8;
  v22 = v5 + 17;
  v15 = GetMonData(v3, v5 + 17, v9);
  v11 = GetMonData(v3, 21, v10);
  v16[1] = v11;
  v16[1] = v11 & ~gUnknown_08208238[v4] & ~gUnknown_08208238[v5] | (((((signed int)(unsigned __int8)(v11 & gUnknown_08208238[v4]) >> 2 * v4) & 0xFF) << 2 * v5)
                                                                  + ((((signed int)(unsigned __int8)(v11 & gUnknown_08208238[v5]) >> 2 * v5) & 0xFF) << 2 * v4));
  SetMonData(v3, v17, (int)&v13);
  SetMonData(v3, v18, (int)v20);
  SetMonData(v3, v19, (int)&v15);
  SetMonData(v3, v22, (int)v21);
  SetMonData(v3, 21, (int)&v16[1]);
  return v23;
}
