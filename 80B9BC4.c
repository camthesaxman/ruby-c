int __fastcall sub_80B9BC4(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v5; // r8@1
  int v6; // r10@1
  int v7; // r9@1
  int v8; // r4@1
  int v9; // r6@1
  int v10; // r5@1
  int v11; // r8@1
  int v13; // [sp+0h] [bp-54h]@1
  int v14; // [sp+50h] [bp-4h]@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = (2 * a4 & 0x1FF) + a3;
  v9 = a2 * *(_BYTE *)v8 + a1;
  memcpy(&v13, v9 + 56 * *(_BYTE *)(v8 + 1), 56);
  v10 = 2 * a5 + v7;
  v11 = v5 + v6 * *(_BYTE *)v10;
  memcpy(v9 + 56 * *(_BYTE *)(v8 + 1), 56 * *(_BYTE *)(v10 + 1) + v11, 56);
  memcpy(v11 + 56 * *(_BYTE *)(v10 + 1), &v13, 56);
  return v14;
}
