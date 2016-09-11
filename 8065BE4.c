int __fastcall s0F_u32_var_to_const(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r5@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  *(_DWORD *)(v1 + 100 + 4 * v3) = script_read_word(v1);
  return 0;
}
