int __fastcall s14_u32_var_to_var(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r3@1
  int v3; // r2@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  *(_DWORD *)(a1 + 100 + 4 * v2) = *(_DWORD *)(a1 + 100 + 4 * v3);
  return 0;
}
