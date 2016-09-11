int __fastcall sub_800CBE0(unsigned __int8 a1, int a2)
{
  signed int v2; // r2@1
  _BYTE *v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  byte_3004040 = 21;
  v2 = 0;
  v3 = &unk_3004041;
  do
    *v3++ = *(_BYTE *)(a2 + v2++);
  while ( v2 <= 2 );
  dp01_prepare_buffer(a1, &byte_3004040, 4);
  return v5;
}
