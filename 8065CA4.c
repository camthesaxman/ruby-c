int __fastcall s15_u8_ptr_to_ptr(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r5@1

  v1 = a1;
  v2 = (_BYTE *)script_read_word(a1);
  *v2 = *(_BYTE *)script_read_word(v1);
  return 0;
}
