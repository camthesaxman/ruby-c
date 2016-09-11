int __fastcall s1E_cmp_u8_ptr_var(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  _BYTE *v3; // r3@1
  int v4; // r1@1

  v1 = a1;
  v2 = *(_BYTE *)script_read_word(a1);
  v3 = *(_BYTE **)(v1 + 8);
  v4 = *(_BYTE *)(v1 + 100 + 4 * *v3);
  *(_DWORD *)(v1 + 8) = v3 + 1;
  *(_BYTE *)(v1 + 2) = compare_012(v2, v4);
  return 0;
}
