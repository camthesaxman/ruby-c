int __fastcall sub_807274C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, int a5, unsigned __int8 a6, int a7)
{
  int v7; // r4@1
  int v8; // r5@1
  unsigned __int8 v9; // r8@1
  unsigned __int8 v10; // r9@1
  unsigned __int8 v11; // r0@1
  int v12; // r4@1
  int v13; // r5@1
  int v15; // [sp+24h] [bp-4h]@0

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = sub_80724F4(a1, a2, a3, a5, a6);
  v12 = (v7 + 1) & 0xFF;
  v13 = (v8 + 1) & 0xFF;
  sub_8072484(v12, v13, v9, v10, a6, v11, a7);
  sub_8072620(v12, v13, v9, a5, a6);
  return v15;
}
