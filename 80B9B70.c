int __fastcall sub_80B9B70(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r9@1
  int v5; // r4@1
  int v6; // r5@1
  int v8; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  sub_80B9A88((int)byte_300071C);
  v6 = v3 + v4 * v5;
  memcpy(v6, v3 + v4 * byte_300071C[v5], 164);
  sub_8134AC0(v6);
  return v8;
}
