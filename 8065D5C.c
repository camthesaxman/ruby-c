int __fastcall s1B_cmp_u8_var_var(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r2@1
  int v3; // r0@1
  int v4; // r1@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 100 + 4 * *v2++);
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *(_BYTE *)(v1 + 100 + 4 * *v2);
  *(_DWORD *)(v1 + 8) = v2 + 1;
  *(_BYTE *)(v1 + 2) = compare_012(v3, v4);
  return 0;
}
