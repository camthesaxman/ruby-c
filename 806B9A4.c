int __fastcall sub_806B9A4(__int16 a1, int a2, unsigned __int8 a3)
{
  int v3; // r1@1
  unsigned int v4; // r3@2
  unsigned __int8 v5; // r7@2
  int v7; // [sp+4h] [bp-24h]@1
  int v8; // [sp+24h] [bp-4h]@0

  v7 = 32 * a2 & 0xFFFF;
  v3 = 0;
  do
  {
    v4 = 0;
    v5 = v3 + 1;
    if ( a1 <= 31 )
    {
      do
      {
        if ( ((a1 + v4) & 0x80000000) == 0 )
          gBG2TilemapBuffer[v7 + 32 * v3 + a1 + v4] = *(&gUnknown_083769D8[11 * v3] + v4) | (unsigned __int16)(a3 << 12);
        v4 = (v4 + 1) & 0xFF;
      }
      while ( v4 <= 0xA && (signed int)(a1 + v4) <= 31 );
    }
    v3 = (unsigned __int8)(v3 + 1);
  }
  while ( v5 <= 6u );
  return v8;
}
