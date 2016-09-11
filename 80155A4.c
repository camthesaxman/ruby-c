int __fastcall sub_80155A4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  signed int v2; // r4@1
  int *v3; // r6@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = &gBitTable[a1];
  while ( v2 < (unsigned __int8)GetLinkPlayerCount() )
    v2024A64 |= *v3 << 4 * v2++;
  v2024A64 &= ~(0x10000000 << v1);
  return v5;
}
