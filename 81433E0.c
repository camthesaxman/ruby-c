int sub_81433E0()
{
  signed int v0; // r3@1
  unsigned int v1; // r4@1
  unsigned int v2; // r1@3
  unsigned int v3; // r1@5
  unsigned int v4; // r1@7
  signed int v5; // r2@9
  unsigned int v6; // r3@9
  __int16 v8; // [sp+0h] [bp-24h]@2
  int v9; // [sp+4h] [bp-20h]@3
  int v10; // [sp+20h] [bp-4h]@11

  v4000000 = 0;
  v4000008 = 0;
  v4000010 = 0;
  v4000012 = 0;
  v400000A = 0;
  v4000014 = 0;
  v4000016 = 0;
  v400000C = 0;
  v4000018 = 0;
  v400001A = 0;
  v400000E = 0;
  v400001C = 0;
  v400001E = 0;
  v0 = 100663296;
  v1 = 98304;
  do
  {
    v8 = 0;
    v40000D4 = &v8;
    v40000D8 = v0;
    v40000DC = -2130704384;
    v0 += 4096;
    v1 -= 4096;
  }
  while ( v1 > 0x1000 );
  v9 = 0;
  v8 = 0;
  v40000D4 = &v8;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  LZ77UnCompVram(&gHallOfFame_Gfx, 100663296);
  v2 = 0;
  do
  {
    *(_WORD *)(2 * v2 + 0x6003800) = 1;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x3F );
  v3 = 0;
  do
  {
    *(_WORD *)(2 * v3 + 0x6003B80) = 1;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0xBF );
  v4 = 0;
  do
  {
    *(_WORD *)(2 * v4 + 0x6003000) = 2;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0x3FF );
  v5 = 0x2000000;
  v6 = 0x4000;
  do
  {
    v8 = 0;
    v40000D4 = &v8;
    v40000D8 = v5;
    v40000DC = -2130704384;
    v5 += 4096;
    v6 -= 4096;
  }
  while ( v6 > 0x1000 );
  v8 = 0;
  v40000D4 = &v8;
  v40000D8 = v5;
  v40000DC = (v6 >> 1) | 0x81000000;
  ResetPaletteFade();
  LoadPalette((int)&gHallOfFame_Pal, 0, 32);
  return v10;
}
