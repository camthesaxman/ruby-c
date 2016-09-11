int __fastcall s20_cmp_u8_ptr_ptr(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  _BYTE *v3; // r0@1

  v1 = a1;
  v2 = *(_BYTE *)script_read_word(a1);
  v3 = (_BYTE *)script_read_word(v1);
  *(_BYTE *)(v1 + 2) = compare_012(v2, *v3);
  return 0;
}
