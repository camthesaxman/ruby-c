int __fastcall sub_8051414(int a1)
{
  int v2; // [sp+0h] [bp-18h]@1
  int v3; // [sp+4h] [bp-14h]@1
  __int16 v4; // [sp+8h] [bp-10h]@1
  __int16 v5; // [sp+Ah] [bp-Eh]@1
  __int16 v6; // [sp+Ch] [bp-Ch]@1
  __int16 v7; // [sp+Eh] [bp-Ah]@1
  __int16 v8; // [sp+10h] [bp-8h]@1
  int v9; // [sp+14h] [bp-4h]@1

  v2 = 30720;
  v3 = 20480;
  v4 = 120 - *(_WORD *)(dword_3004854 + 324);
  v5 = 80 - *(_WORD *)(dword_3004854 + 326);
  v6 = *(_WORD *)(dword_3004854 + 322);
  v7 = *(_WORD *)(dword_3004854 + 322);
  v8 = *(_WORD *)(dword_3004854 + 84);
  BgAffineSet(&v2, a1, 1);
  return v9;
}
