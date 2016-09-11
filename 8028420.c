int sub_8028420()
{
  int v0; // r6@1
  signed int v1; // r5@1
  int v2; // r1@3
  unsigned int v3; // r0@8
  unsigned int v4; // r6@8
  char v5; // r0@10
  int v6; // r5@10
  int v8; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  do
  {
    if ( sub_802838C(*(_WORD *)(2 * v1 + 88 * v2024C07 + 0x2024A8C)) << 24
      || (v2 = *(_WORD *)(2 * v1 + 88 * v2024C07 + 0x2024A8C), v2 == 264)
      || v2 == 253
      || sub_8028350(*(_WORD *)(2 * v1 + 88 * v2024C07 + 0x2024A8C)) << 24 )
    {
      v0 = (v0 | gBitTable[v1]) & 0xFF;
    }
    ++v1;
  }
  while ( v1 <= 3 );
  v3 = sub_8015A98(v2024C07, v0, 253) << 24;
  v4 = v3 >> 24;
  if ( v3 >> 24 == 15 )
  {
    v2024C10 += 5;
  }
  else
  {
    do
    {
      v5 = Random(v3);
      v6 = v5 & 3;
      v3 = gBitTable[v6] & v4;
    }
    while ( v3 );
    v2024BEA = *(_WORD *)(2 * v6 + 88 * v2024C07 + 0x2024A8C);
    v2024BE4 = v6;
    v2024C6C &= 0xFFFFFBFF;
    v2024C08 = sub_801B5C0(v2024BEA, 0);
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v8;
}
