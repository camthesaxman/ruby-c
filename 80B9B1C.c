int __fastcall sub_80B9B1C(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+14h] [bp-4h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  sub_80B9A88((int)&v8);
  memcpy(v3 + v4 * v5, 33719496, 64);
  v6 = memcpy(33719496, v3 + v4 * *((_BYTE *)&v8 + v5), 64);
  sub_80F7F30(v6);
  return v9;
}
