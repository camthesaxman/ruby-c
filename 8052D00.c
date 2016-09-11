unsigned int __fastcall write_word_to_mem(unsigned int a1, int a2)
{
  unsigned int result; // r0@1

  *(_BYTE *)a2 = a1;
  *(_BYTE *)(a2 + 1) = BYTE1(a1);
  *(_BYTE *)(a2 + 2) = a1 >> 16;
  result = a1 >> 24;
  *(_BYTE *)(a2 + 3) = result;
  return result;
}
