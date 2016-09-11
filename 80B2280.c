int sub_80B2280()
{
  signed int v0; // r2@1
  unsigned int v1; // r3@1
  signed int v2; // r4@3
  signed int v3; // r3@3
  char *v4; // r1@4
  int v6; // [sp+0h] [bp-1Ch]@2
  int v7; // [sp+18h] [bp-4h]@5

  v0 = 100696064;
  v1 = 0x2000;
  do
  {
    v6 = 0;
    v40000D4 = &v6;
    v40000D8 = v0;
    v40000DC = -2063596544;
    v0 += 4096;
    v1 -= 4096;
  }
  while ( v1 > 0x1000 );
  v6 = 0;
  v40000D4 = &v6;
  v40000D8 = 100724736;
  v40000DC = -2063596544;
  word_30042C0 = 0;
  word_30041B4 = 0;
  v400000A = v400000A & 0xFC | 1;
  v400000B &= 0x3Fu;
  v400000B &= 0xDFu;
  v400000A = v400000A & 0xF3 | 8;
  v2 = 0;
  v3 = 33657656;
  do
  {
    gSprites[68 * *(_BYTE *)v3 + 5] &= 0xF3u;
    v4 = &gSprites[68 * *(_BYTE *)(v3 + 1)];
    v4[5] &= 0xF3u;
    v3 += 4;
    ++v2;
  }
  while ( v2 <= 3 );
  return v7;
}
