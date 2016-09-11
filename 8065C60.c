int __fastcall s13_u8_var_to_ptr(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r5@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  *(_BYTE *)script_read_word(v1) = *(_DWORD *)(v1 + 100 + 4 * v3);
  return 0;
}
