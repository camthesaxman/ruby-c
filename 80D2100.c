int __fastcall sub_80D2100(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+0h] [bp-1Ch]@3
  int v4; // [sp+4h] [bp-18h]@3
  unsigned __int8 v5; // [sp+8h] [bp-14h]@3
  int v6; // [sp+Ch] [bp-10h]@3
  int v7; // [sp+18h] [bp-4h]@5

  v1 = a1;
  v4000050 = 16194;
  v4000052 = 4096;
  v400000A |= 3u;
  v400000B &= 0x3Fu;
  if ( !(sub_8076BE0() << 24) )
    v400000A = v400000A & 0xF3 | 4;
  word_30042C0 = 0;
  word_30041B4 = 0;
  v4000014 = 0;
  v4000016 = 0;
  sub_8078914((int)&v3);
  v6 = 0;
  v40000D4 = &v6;
  v40000D8 = v4;
  v40000DC = -2063596544;
  LZDecompressVram((int)&gAttractTilemap, v4);
  LZDecompressVram((int)&gAttractGfx, v3);
  LoadCompressedPalette((int)&gAttractPal, 16 * v5, 32);
  if ( sub_8076BE0() << 24 )
    sub_80763FC(v5, v4, 0, 0);
  dword_3004B20[10 * v1] = (int)sub_80D21F0;
  return v7;
}
