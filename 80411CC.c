int __fastcall unref_sub_80411CC(int a1, int a2)
{
  unsigned int v2; // r2@1
  int i; // r3@1

  v2 = 4385;
  for ( i = 0; i < a2; i = (i + 1) & 0xFFFF )
    v2 = *(_WORD *)((char *)&gCrc16Table + (2 * (v2 ^ *(_BYTE *)(a1 + i)) & 0x1FF)) ^ (v2 >> 8);
  return ~v2 & 0xFFFF;
}
