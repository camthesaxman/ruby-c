int __fastcall dp01_build_cmdbuf_x22_a_three_bytes(unsigned __int8 a1, char a2, int a3)
{
  signed int v3; // r3@1
  __int16 *v4; // r1@1
  int v6; // [sp+8h] [bp-4h]@0

  byte_3004040 = 34;
  unk_3004041 = a2;
  v3 = 0;
  v4 = &word_3004042;
  do
  {
    *(_BYTE *)v4 = *(_BYTE *)(a3 + v3);
    v4 = (__int16 *)((char *)v4 + 1);
    ++v3;
  }
  while ( v3 <= 2 );
  dp01_prepare_buffer(a1, &byte_3004040, 5);
  return v6;
}
