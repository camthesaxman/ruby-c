int __fastcall dp01_build_cmdbuf_x1B_aaaa_b(unsigned __int8 a1, char a2, int a3)
{
  int v4; // [sp+4h] [bp-4h]@0

  byte_3004040 = 27;
  unk_3004041 = a2;
  LOBYTE(word_3004042) = a3;
  HIBYTE(word_3004042) = (unsigned __int16)(a3 & 0xFF00) >> 8;
  LOBYTE(word_3004044) = (a3 & 0xFF0000u) >> 16;
  HIBYTE(word_3004044) = BYTE3(a3);
  dp01_prepare_buffer(a1, &byte_3004040, 6);
  return v4;
}
