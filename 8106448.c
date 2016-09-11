int sub_8106448()
{
  signed int v0; // r4@1
  signed int v1; // r3@1
  unsigned int v2; // r5@1
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 33619968;
  sub_800D238();
  v1 = 100663296;
  v2 = 7456;
  do
  {
    v40000D4 = v0;
    v40000D8 = v1;
    v40000DC = -2147481600;
    v0 += 4096;
    v1 += 4096;
    v2 -= 4096;
  }
  while ( v2 > 0x1000 );
  v40000D4 = v0;
  v40000D8 = v1;
  v40000DC = (v2 >> 1) | 0x80000000;
  LoadPalette((int)&gUnknown_08E95A18, 0, 160);
  LoadPalette((int)&gUnknown_083EDE24, 208, 32);
  return v4;
}
