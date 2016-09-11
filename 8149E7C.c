int __fastcall sub_8149E7C(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r7@1
  unsigned int v4; // r1@1
  unsigned __int8 v5; // r0@3
  int v6; // r8@3
  int *v7; // r6@3
  char *v8; // r2@3
  unsigned int v9; // r1@3
  char *v10; // r1@3
  char v12[32]; // [sp+4h] [bp-44h]@2
  int *v13; // [sp+24h] [bp-24h]@3

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    *(_WORD *)&v12[2 * v4] = 0x7FFF;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0xF );
  v5 = CreateTask((int)sub_8149FC8, 0);
  v6 = v5;
  v7 = &dword_3004B20[10 * v5];
  *((_WORD *)v7 + 5) = v2;
  *((_WORD *)v7 + 6) = v3;
  *((_WORD *)v7 + 7) = 256;
  *((_WORD *)v7 + 8) = 16;
  SetOamMatrix(30, 256, 0, 0, 256);
  SetOamMatrix(31, 0x10000 / *((_WORD *)v7 + 8), 0, 0, 0x10000 / *((_WORD *)v7 + 8));
  dword_2020020[17 * v2] = (int)nullsub_85;
  v8 = &gSprites[68 * v2];
  v8[1] = v8[1] & 0xFC | 1;
  v8[3] = v8[3] & 0xC1 | 0x3C;
  v8[62] &= 0xFBu;
  v9 = 32 * ((unsigned int)(unsigned __int8)v8[5] >> 4) + 33747144;
  v13 = dword_2020020;
  CpuSet(v12, v9, 16);
  v13[17 * v3] = (int)nullsub_85;
  v10 = &gSprites[68 * v3];
  v10[1] = v10[1] & 0xFC | 1;
  v10[3] |= 0x3Eu;
  v10[62] &= 0xFBu;
  CpuSet(v12, 32 * ((unsigned int)(unsigned __int8)v10[5] >> 4) + 33747144, 16);
  *((_WORD *)v7 + 12) = 0;
  return v6;
}
