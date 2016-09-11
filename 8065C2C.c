int __fastcall s11_u8_ptr_to_const(int a1)
{
  char *v1; // r1@1
  char v2; // r4@1

  v1 = *(char **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  *(_BYTE *)script_read_word(a1) = v2;
  return 0;
}
