int __fastcall dp01_build_cmdbuf_x0F_aa_b_cc_dddd_e_mlc_weather_00_x1Cbytes(unsigned __int8 a1, __int16 a2, char a3, __int16 a4, int a5, char a6, int a7)
{
  unsigned __int8 v7; // r8@1
  char *v8; // r4@3
  int v10; // [sp+18h] [bp-4h]@0

  v7 = a1;
  byte_3004040 = 15;
  word_3004041 = a2;
  byte_3004043 = a3;
  word_3004044 = a4;
  LOBYTE(word_3004046) = a5;
  HIBYTE(word_3004046) = (unsigned __int16)(a5 & 0xFF00) >> 8;
  LOBYTE(word_3004048) = (a5 & 0xFF0000) >> 16;
  HIBYTE(word_3004048) = BYTE3(a5);
  byte_300404A = a6;
  byte_300404B = v2024C0E;
  if ( sub_8018324(14, 0, 13, 0) & 0xFF || sub_8018324(14, 0, 77, 0) << 24 )
  {
    byte_300404C = 0;
    byte_300404D = 0;
    v8 = &byte_3004040;
  }
  else
  {
    byte_300404C = v2024DB8;
    byte_300404D = (unsigned __int16)(v2024DB8 & 0xFF00) >> 8;
    v8 = &byte_3004040;
  }
  v8[14] = 0;
  v8[15] = 0;
  memcpy(v8 + 16, a7, 28);
  dp01_prepare_buffer(v7, v8, 44);
  return v10;
}
