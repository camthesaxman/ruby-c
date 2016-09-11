int __fastcall sub_80FB170(int a1, int a2, __int16 a3, __int16 a4, unsigned __int16 a5, unsigned __int16 a6, unsigned __int8 a7)
{
  int v7; // r6@1
  int v8; // r4@1
  int v9; // r10@1
  int v10; // r5@1
  int v11; // r12@1
  int v12; // r5@1
  int v13; // r4@1
  int v15; // [sp+20h] [bp-4h]@0

  v7 = v20388CC;
  v8 = gSineTable[a7 + 64];
  v9 = a5 * v8 >> 8;
  *(_DWORD *)(v20388CC + 44) = v9;
  v10 = gSineTable[a7];
  v11 = a5 * -v10 >> 8;
  *(_DWORD *)(v7 + 48) = v11;
  v12 = a6 * v10 >> 8;
  *(_DWORD *)(v7 + 52) = v12;
  v13 = a6 * v8 >> 8;
  *(_DWORD *)(v7 + 56) = v13;
  *(_DWORD *)(v7 + 36) = (a1 << 16 >> 8) + (a3 << 8) - (a4 * v12 + v9 * a3);
  *(_DWORD *)(v7 + 40) = (a2 << 16 >> 8) + (a4 << 8) - (v13 * a4 + v11 * a3);
  *(_BYTE *)(v7 + 125) = 1;
  return v15;
}
