int __fastcall dp01_build_cmdbuf_x30_TODO(unsigned __int8 a1, int a2, char a3)
{
  signed int v3; // r2@1
  __int16 *v4; // r3@1
  int v6; // [sp+8h] [bp-4h]@0

  byte_3004040 = 48;
  unk_3004041 = a3 & 0x7F;
  LOBYTE(word_3004042) = (a3 & 0x80u) << 24 >> 31;
  HIBYTE(word_3004042) = 48;
  v3 = 0;
  v4 = &word_3004044;
  do
  {
    *(_BYTE *)v4 = *(_BYTE *)(a2 + v3);
    v4 = (__int16 *)((char *)v4 + 1);
    ++v3;
  }
  while ( v3 <= 47 );
  dp01_prepare_buffer(a1, &byte_3004040, 52);
  return v6;
}
