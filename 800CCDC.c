int __fastcall dp01_build_cmdbuf_x1A_aaaa_bbbb(unsigned __int8 a1, int a2, int a3)
{
  int v4; // [sp+Ch] [bp-4h]@0

  byte_3004040 = 26;
  unk_3004041 = a2;
  LOBYTE(word_3004042) = (unsigned __int16)(a2 & 0xFF00) >> 8;
  HIBYTE(word_3004042) = (a2 & 0xFF0000u) >> 16;
  LOBYTE(word_3004044) = BYTE3(a2);
  HIBYTE(word_3004044) = a3;
  LOBYTE(word_3004046) = (unsigned __int16)(a3 & 0xFF00) >> 8;
  HIBYTE(word_3004046) = (a3 & 0xFF0000u) >> 16;
  LOBYTE(word_3004048) = BYTE3(a3);
  dp01_prepare_buffer(a1, &byte_3004040, 9);
  return v4;
}
