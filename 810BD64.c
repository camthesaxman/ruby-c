int __fastcall sub_810BD64(__int16 a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = 0;
  do
  {
    gBG2TilemapBuffer[32 * (2 * v2039248 + 1) + v1 + 15] = a1;
    gBG2TilemapBuffer[(v2039248 << 6) + 64 + v1 + 15] = a1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xD );
  return v3;
}
