int sub_80B2184()
{
  signed int v0; // r4@1
  signed int v1; // r3@1
  char *v2; // r1@2
  int v4; // [sp+0h] [bp-18h]@1
  int v5; // [sp+14h] [bp-4h]@3

  v400000A &= 0xFCu;
  v400000B = v400000B & 0x3F | 0x40;
  v400000B &= 0xDFu;
  word_30042C0 = 240;
  word_30041B4 = 160;
  v4000014 = 240;
  v4000016 = 160;
  v4 = 0;
  v40000D4 = &v4;
  v40000D8 = 100724736;
  v40000DC = -2063596544;
  LZDecompressVram((int)&gUnknown_08D17C3C, 100724736);
  v400000A &= 0xF3u;
  v0 = 0;
  v1 = 33657656;
  do
  {
    gSprites[68 * *(_BYTE *)v1 + 5] = gSprites[68 * *(_BYTE *)v1 + 5] & 0xF3 | 4;
    v2 = &gSprites[68 * *(_BYTE *)(v1 + 1)];
    v2[5] = v2[5] & 0xF3 | 4;
    v1 += 4;
    ++v0;
  }
  while ( v0 <= 3 );
  v400000C = v400000C & 0xFC | 1;
  v4000008 = v4000008 & 0xFC | 1;
  v400000B = v400000B & 0x3F | 0x80;
  return v5;
}
