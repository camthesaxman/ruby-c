int __fastcall s1D_cmp_u8_var_ptr(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r2@1
  int v3; // r5@1
  _BYTE *v4; // r0@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 100 + 4 * *v2);
  *(_DWORD *)(a1 + 8) = v2 + 1;
  v4 = (_BYTE *)script_read_word(a1);
  *(_BYTE *)(v1 + 2) = compare_012(v3, *v4);
  return 0;
}
