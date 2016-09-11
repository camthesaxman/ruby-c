int __fastcall sub_80D8414(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r0@5
  int v4; // [sp+0h] [bp-1Ch]@3
  int v5; // [sp+4h] [bp-18h]@3
  unsigned __int8 v6; // [sp+8h] [bp-14h]@3
  int v7; // [sp+Ch] [bp-10h]@3
  int v8; // [sp+18h] [bp-4h]@5

  v1 = a1;
  v4000050 = 16194;
  v4000052 = 4096;
  v400000A = v400000A & 0xFC | 1;
  v400000B &= 0x3Fu;
  if ( !(sub_8076BE0() << 24) )
    v400000A = v400000A & 0xF3 | 4;
  word_30042C0 = 0;
  word_30041B4 = 0;
  v4000014 = 0;
  v4000016 = 0;
  sub_8078914((int)&v4);
  v7 = 0;
  v40000D4 = &gWeatherFog1Tiles;
  v40000D8 = v4;
  v40000DC = -2147482624;
  LZDecompressVram((int)&gWeatherFog1Tilemap, v5);
  LoadPalette((int)&gUnknown_083970E8, 16 * v6, 32);
  if ( sub_8076BE0() << 24 )
    sub_80763FC(v6, v5, 0, 0);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 19) = -1;
  *v2 = (int)sub_80D851C;
  return v8;
}
