int __fastcall sub_800CBA4(unsigned __int8 a1, char a2, unsigned __int8 a3, int a4)
{
  unsigned int v4; // r2@1
  __int16 *v5; // r4@1
  int v7; // [sp+Ch] [bp-4h]@0

  byte_3004040 = 20;
  unk_3004041 = a2;
  word_3004042 = a3;
  v4 = 0;
  v5 = &word_3004044;
  do
  {
    *(_BYTE *)v5 = *(_BYTE *)(a4 + v4);
    v5 = (__int16 *)((char *)v5 + 1);
    ++v4;
  }
  while ( v4 <= 0x13 );
  dp01_prepare_buffer(a1, &byte_3004040, 24);
  return v7;
}
