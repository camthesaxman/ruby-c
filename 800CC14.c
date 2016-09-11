int __fastcall dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f(unsigned __int8 a1, char a2, char a3, char a4, int a5)
{
  signed int v5; // r2@1
  __int16 *v6; // r3@1
  int v8; // [sp+Ch] [bp-4h]@0

  byte_3004040 = 22;
  unk_3004041 = a2;
  LOBYTE(word_3004042) = a3;
  HIBYTE(word_3004042) = a4;
  v5 = 0;
  v6 = &word_3004044;
  do
  {
    *(_BYTE *)v6 = *(_BYTE *)(a5 + v5);
    v6 = (__int16 *)((char *)v6 + 1);
    ++v5;
  }
  while ( v5 <= 2 );
  dp01_prepare_buffer(a1, &byte_3004040, 8);
  return v8;
}
