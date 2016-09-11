int __fastcall sub_806E7D0(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r0@1
  unsigned __int8 v6; // [sp+0h] [bp-14h]@1
  _BYTE v7[3]; // [sp+1h] [bp-13h]@1
  int v8; // [sp+10h] [bp-4h]@1

  v2 = a2;
  v3 = a1;
  sub_806E720(a1, &v6, v7, a2);
  v4 = MenuZeroFillWindowRect(
         v6,
         (unsigned __int8)v7[0],
         (v6 + *(_BYTE *)(8 * v3 + v2 + 1)) & 0xFF,
         ((unsigned __int8)v7[0] + 2 * *(_BYTE *)(8 * v3 + v2) + 1) & 0xFF);
  sub_8072DEC(v4);
  return v8;
}
