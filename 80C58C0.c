int __fastcall sub_80C58C0(int a1, int a2, int a3)
{
  int v3; // r5@1
  unsigned int v4; // r0@1
  unsigned int v5; // ST04_4@1
  unsigned int v6; // ST00_4@1
  int v7; // r2@1
  int v8; // r7@1
  int v9; // r2@1
  int v10; // r8@1
  int v11; // r2@1
  int v12; // r9@1
  int v13; // r2@1
  int v14; // r10@1
  int v15; // r2@1
  int v16; // r4@1
  int v17; // r2@1

  v3 = a1;
  v4 = GetMonData(a1, 0, a3) << 16;
  v5 = v4;
  v6 = v4 >> 16;
  v8 = GetMonData(v3, 39, v7) & 0xF;
  v10 = GetMonData(v3, 40, v9) & 0xF;
  v12 = GetMonData(v3, 41, v11) & 0xF;
  v14 = GetMonData(v3, 42, v13) & 0xF;
  v16 = GetMonData(v3, 43, v15) & 0xF;
  return (((v10 ^ v12) * v8 ^ (unsigned __int8)v6) << 8) + (v14 * (v16 ^ GetMonData(v3, 44, v17) & 0xF) ^ (v5 >> 24));
}
